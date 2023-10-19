/*******************************************************************************
 Mdbus interface layer

  Company:
    Onward Technologies.

  File Name:
    modbus-interface.c

  Summary:
    Interface definition for communication between Master and Slave with Modbus

  Description:
    The file provides a simple interface to manage the MOdbus Communication for read and write
    operation.

 * Date of creation:
 * version:0.1
*******************************************************************************/

#include "modbus-interface.h"
#include "mainwindow.h"

modbus_t* m_serialModbus_return = NULL;
static uint16_t connect_flag =0;
static QString ReciveBuff = 0;
MainWindow* mainPtr = NULL;
static bool ModbusBusyCheck = false; // variable representing status of Modbus Commnunication on Port

/************************************** Function: ****************************************/

/*******************************************************************************
* Function Name: void ModInterface(const char *device, int baud, char parity,
                  int data_bit, int stop_bit , uint16_t slave_id)
* Description  : This function is used to connect the Modbus communication.
* Parameter    : device - set the port
*              : baud - set the baudrate
*              : parity - set the parity bit
*              : data_bit - Data bits to communicate
*              : stop_bit - to signal the end of frame
*              : slave_id - slave number tot identify
* Return       : None
******************************************************************************/

void ModInterface(const char *device, int baud, char parity,
                  int data_bit, int stop_bit )
{

    if ( connect_flag == 0 )
    {
        m_serialModbus_return = modbus_new_rtu( device, baud, parity, data_bit, stop_bit );
#ifdef QDEBUG
        qDebug()<<"ModInterface - m_serialModbus_return "<<m_serialModbus_return;
#endif
        if( modbus_connect( m_serialModbus_return ) == -1 )
        {
           qDebug()<<"could not connect ";
           modbus_free(m_serialModbus_return);
           ModbusBusyCheck = false;
           connect_flag = 0;
        }
        else
        {
              qDebug()<<"connected successfully ";
              ModbusBusyCheck = true;
              connect_flag = 1;
//              modbus_set_byte_timeout(m_serialModbus_return, 0, 50);
              modbus_set_response_timeout(m_serialModbus_return, 0, 50000);
              modbus_register_monitor_raw_data_fnc( m_serialModbus_return, stBusMonitorRawData );
        }

    }
    else
    {
            ModbusBusyCheck = false;
            connect_flag = 0;
            modbus_close( m_serialModbus_return );
            modbus_free(m_serialModbus_return);
            m_serialModbus_return = NULL;

    }
}


/*******************************************************************************
* Function Name: int WriteModbusData(int addr, int value)
* Description  : This function is used to perform the Write operation through Modbus.
* Parameter    : addr -  address to write the data
*              : value - value to write on given address
* Return       : ret - response from modbus for completion of write functionality
******************************************************************************/

int WriteModbusData( int addr, int value )
{
    int ret = 0;
    uint16_t slaveId = 0;
    if (!m_serialModbus_return )
    {
        errno = EINVAL;
        return -1;
    }
    slaveId = GetMainWindowObj()->ActiveSlaveId();
    modbus_set_slave( m_serialModbus_return , slaveId );
    ret = modbus_write_register( m_serialModbus_return, addr, value );

    if(slaveId)
        return ret;
    else
        return 0;

}


/*******************************************************************************
* Function Name: int ReadModbusData(int addr, int nb, uint16_t *dest)
* Description  : This function is used to Read the Modbus data from Address .
* Parameter    : addr - Address to read from
*              : nb - number of bytes to read
*              : dest - buffer to save the number of bytes after read
* Return       : ret - response from modbus for completion of write functionality
******************************************************************************/

int ReadModbusData( int addr, int nb, uint16_t *dest )
{
    int  ret = 0;
    int slaveId = 0;

    if (!m_serialModbus_return)
    {
        errno = EINVAL;
        return -1;
    }
    slaveId = GetMainWindowObj()->ActiveSlaveId();
    modbus_set_slave( m_serialModbus_return , slaveId );
    ret =modbus_read_registers( m_serialModbus_return, addr, nb, dest );

    return ret;
}


/*******************************************************************************
* Function Name: int WriteMultipleModbusData(int addr, int nb, const uint16_t *src)
* Description  : This function is used to write the multiple address at single cmd .
* Parameter    : addr - Address to read from
*              : nb - number of bytes to read
*              : src - buffer with multiple data to write
* Return       : ret - response from modbus for completion of write functionality
******************************************************************************/

int WriteMultipleModbusData( int addr, int nb, const uint16_t *src )
{
    int ret = 0;
    uint16_t slaveId = 0;
    if (!m_serialModbus_return )
    {
        errno = EINVAL;
        return -1;
    }

    slaveId = GetMainWindowObj()->ActiveSlaveId();
    modbus_set_slave( m_serialModbus_return , slaveId );
    ret = modbus_write_registers( m_serialModbus_return, addr,nb, src );

    if(slaveId)
        return ret;
    else
        return 0;
}


/*******************************************************************************
* Function Name: int Brcst_WriteMultipleModbusData( int addr, int nb, const uint16_t *src )
* Description  : This function is used to write the multiple address at single cmd in broadcast mode with slave id 0 .
* Parameter    : addr - Address to read from
*              : nb - number of bytes to read
*              : src - buffer with multiple data to write
* Return       : ret - response from modbus for completion of write functionality
******************************************************************************/

int Brcst_WriteMultipleModbusData( int addr, int nb, const uint16_t *src )
{
    int ret = 0;
    if (!m_serialModbus_return )
    {
        errno = EINVAL;
        return -1;
    }
    modbus_set_slave( m_serialModbus_return , BROADCAST_SLAVEID );
    ret = modbus_broadcast_mode( m_serialModbus_return, addr,nb, src );
    return ret;
}

/*******************************************************************************
* Function Name: int Brcst_WriteModbusData( int addr, int value )
* Description  : This function is used to perform single Write operation through Modbus in broadcast mode.
* Parameter    : addr -  address to write the data
*              : value - value to write on given address
* Return       : ret - response from modbus for completion of write functionality
******************************************************************************/

int Brcst_WriteModbusData( int addr, int value )
{
    int ret = 0;
    if (!m_serialModbus_return )
    {
        errno = EINVAL;
        return -1;
    }
    modbus_set_slave( m_serialModbus_return , BROADCAST_SLAVEID );
    ret = modbus_broadcast_write_single( m_serialModbus_return,MODBUS_WRITE_SINGLE_REGISTER, addr, value );
    return ret;
}

/*******************************************************************************
* Function Name: modbus_t * ModbusVlaue(void)
* Description  : This function is used to return the Modbus Object .
* Parameter    : None - Address to read from
* Return       : m_serialModbus_return - Modbus object
******************************************************************************/

modbus_t *ModbusValue( void )
{
    if (!m_serialModbus_return)
    {
        errno = EINVAL;
        return m_serialModbus_return;
    }
    return  m_serialModbus_return;
}


/*******************************************************************************
* Function Name: void stBusMonitorRawData( modbus_t * modbus, uint8_t * data, uint8_t dataLen,
*                                           uint8_t addNewline , uint8_t direction)
* Description  : This function is used as to get th Raw Data from Modbus communication .
* Parameter    : modbus - Modbus object
*              : data - data to print on PlainTextEdit
*              : dataLen - data length
*              : addNewline - jump to newline character
*              : direction - states whether data is input or output
* Return       : None
******************************************************************************/


void stBusMonitorRawData( modbus_t *modbus, uint8_t *data, uint8_t dataLen, uint8_t addNewline , uint8_t direction )
{
    Q_UNUSED(modbus);
    RawdataMod( data, dataLen, addNewline != 0 , direction );
}


/*******************************************************************************
* Function Name: QString RawdataMod( uint8_t * data, uint8_t dataLen, bool addNewline,
*                                    uint8_t direction)
* Description  : This function is used for adding the raw data to PlaiTextEdit log .
* Parameter
*              : data - data to print on PlainTextEdit
*              : dataLen - data length
*              : addNewline - jump to newline character
*              : direction - states whether data is input or output
* Return       : dump - Data to print  as log
******************************************************************************/

QString RawdataMod( uint8_t *data, uint8_t dataLen, bool addNewline, uint8_t direction )
{
    QString dump = nullptr;
    static QString ReciveBuff = nullptr;

    if ( dataLen > 0 )
    {
        static bool new_line_flag=1;

        if ( new_line_flag )
        {
            new_line_flag = 0;
            dump = nullptr;
            if( direction == SENT )
                dump += "Req >> : ";
            else
                dump += "<< Resp: ";
        }

        if ( addNewline )
            new_line_flag = 1;

        for( int i = 0; i < dataLen; ++i )
        {
            dump += QString::asprintf( "%.2x ", data[i] );
        }
#ifdef QDEBUG
        qDebug()<<"Each time Receiving data in dump >>"<<dump;
#endif
        if ( addNewline )
        {
            dump += "\n";
        }

        if ( dump[0] == "R" )
        {
            GetMainWindowObj()->RawDataPrint( dump );
            dump.clear();
        }
        else if ( dump[0] == "<" )
        {
                 dump += "\n";
                 ReciveBuff = dump;
                 ReciveBuff.chop(1);

        }
        else
        {
              ReciveBuff = ReciveBuff + dump;
#ifdef QDEBUG
              qDebug()<<"size is "<<ReciveBuff.size();
#endif
              if ( ReciveBuff.length() >= 31  )
              {
                  GetMainWindowObj()->RawDataPrint( ReciveBuff );
                  ReciveBuff.clear();
                  dump = nullptr;
              }
              if( ReciveBuff.length() == 25 )
              {
                  GetMainWindowObj()->RawDataPrint( ReciveBuff );
                  ReciveBuff.clear();
                  dump = nullptr;
              }

        }
    }

    return dump;

}


/*******************************************************************************
* Function Name: MainWindow* GetMainWindowObj( void )
* Description  : This function is used for getting the MainWindow object in interface file .
* Parameter    : None
* Return       : mainPtr - Return the Main window object
******************************************************************************/

MainWindow* GetMainWindowObj( void )
{
    return mainPtr;
}


/*******************************************************************************
* Function Name: void SetMainWindowObj(MainWindow* main)
* Description  : This function is used for set the MainWindow object in interface file .
* Parameter    : main - Mainwindow Object
* Return       : None
******************************************************************************/

void SetMainWindowObj( MainWindow* main )
{
    mainPtr = main;
}

/*******************************************************************************
* Function Name: bool ModbusBusyVerify( void )
* Description  : This function is used to return the status of Modbus with another devices.
* Parameter    : None
* Return       : ModbusBusyCheck
******************************************************************************/
bool ModbusBusyVerify( void )
{
    return ModbusBusyCheck;
}

