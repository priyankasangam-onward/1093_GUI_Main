/*******************************************************************************
 function to perform

  Company:
    Onward Technologies.

  File Name:
    mainwindow.c

  Summary:
    Data to be read and write LED current,maximum current,maximum current pulse

  Description:
    The file provides a simple functionality to manage read and write
    operation.

 * Date of creation:
 * version:0.1
*******************************************************************************/

#include <QCoreApplication>
#include <QStandardItemModel>
#include "mainwindow.h"
#include <QStatusBar>
#include <QUrl>
#include <QString>
#include <QtSerialBus/qmodbusreply.h>
#include <QThread>
#include <QAction>
#include <QMessageBox>
#include "QVector"
#include <QWidget>
#include <QByteArray>
#include <QProgressBar>
#include <bitset>
#include <QRegularExpressionValidator>
#include <stdexcept>
#include <cstdint>
#include <QRegExpValidator>
#include <QClipboard>
#include <QtSerialPort/QSerialPortInfo>
#include <QSpinBox>
#include <QValidator>
#include <QDateTime>
#include <QTimer>
#include <QRegExpValidator>
#include <QRegularExpression>
#include <QValidator>
#include <QByteArray>
#include <chrono>
#include <thread>


QTimer waitTimer;
static QString filePath;
static QString serial= 0;
static int Baud = 0;
static char ParityValue = 0;
static int Databits = 0;
static int Stopbits = 0;
static  uint16_t connect_disconnect =0;
bool statusFlag = false;

QString rawException;



MainWindow::MainWindow(QWidget *parent)
     : QMainWindow(parent)
     , ui(new Ui::MainWindow)
     ,dataReadWrite(nullptr)
 {
    ui-> setupUi(this);
    this -> setWindowTitle("Raytech 1093 GUI");
    combo_value = {
       ui -> serialPortSelect_comboBox,
       ui -> baud,
       ui -> parity,
       ui -> databits,
       ui -> stopbits
    };
    m_comboBox = {
       ui -> comboBox_configuration
    };
    write_lineEdit_of_mainwindow_upper = {
       ui -> LedMicroCycleTimeLineEdit_write,
       ui -> lineEdit_LedCycleTime_write,
       ui -> lineEdit_NumMicroCycles_write
    };
    write_lineEdit_of_mainwindow_lower = {
       ui -> lineEdit_FanTempLedMin_write,
       ui -> lineEdit_FanTempLedMax_write,
       ui -> lineEdit_LedTempWar_write,
       ui -> lineEdit_SyncMode_write,
       ui -> lineEdit_DeadTime10_write,
       ui -> lineEdit_DeglitchingEnable_write
    };
    lineEdit_of_mainwindow_upper = {
       ui -> LedMicroCycleTimeLineEdit_read,
       ui -> lineEdit_LedCycleTime_read,
       ui -> lineEdit_NumMicroCycles_read
    };
    lineEdit_of_mainwindow_lower = {
       ui -> lineEdit_FanTempLedMin_read,
       ui -> lineEdit_FanTempLedMax_read,
       ui -> lineEdit_LedTempWar_read,
       ui -> lineEdit_SyncMode_read ,
        ui -> lineEdit_DeadTime10_read,
       ui -> lineEdit_DeglitchingEnable_read
    };
    value_of_config_checkbox = {
       ui -> checkBox_LedMicroCycleTime,
       ui -> checkBox_LedCycleTime,
       ui -> checkBox_NumMicroCycles,
       ui -> checkBox_FanTempLedMin,
       ui -> checkBox_FanTempLedMax,
       ui -> checkBox_LedTempWar,
       ui -> checkBox_SyncMode,
       ui -> checkBox_DeadTime10,
       ui -> checkBox_DeglitchingEnable
    };
    value_of_config_read_lineedit.append(lineEdit_of_mainwindow_upper);
    value_of_config_read_lineedit.append(lineEdit_of_mainwindow_lower);
    value_of_config_write_lineedit.append(write_lineEdit_of_mainwindow_upper);
    value_of_config_write_lineedit.append(write_lineEdit_of_mainwindow_lower);

    for(int count = 0; count < value_of_config_write_lineedit.size(); count++)
    {
        if(count == 6)
        {
        value_of_config_write_lineedit[count]->setMaxLength(1);
        }
        else if( count == 7 )
        {
            QDoubleValidator validator;
            value_of_config_write_lineedit[count] -> setValidator(&validator);
            value_of_config_read_lineedit[count] -> setValidator(&validator);
        }
        else if(count == 8)
        {
            value_of_config_write_lineedit[count]->setMaxLength(1);

        }
        else
        {
            QRegularExpressionValidator * validator = new QRegularExpressionValidator(QRegularExpression("[0-9]*"), value_of_config_write_lineedit[count]);
             value_of_config_write_lineedit[count] -> setValidator(validator);
             value_of_config_read_lineedit[count] -> setValidator(validator);
        }
    }


    fault_status = {
       ui -> fault_7,
       ui -> fault_6,
       ui -> fault_5,
       ui -> fault_4,
       ui -> fault_3,
       ui -> fault_2,
       ui -> fault_1
    };
    warning_status = {
       ui -> warning_6,
       ui -> warning_5,
       ui -> warning_4,
       ui -> warning_3,
       ui -> warning_2,
       ui -> warning_1
    };
    for(uint8_t count = 0; count < 9; count++)
    {
       if( count < 3 )
       {
           adresses_config[count] = CONFIG_START_ADDR + count;
           adresses_preset_config[count] = CONFIG_PRESET_START_ADDR + count;
       } else
       {
           adresses_config[count] = CONFIG_START_ADDR + (count + 128);//128
           adresses_preset_config[count] = CONFIG_PRESET_START_ADDR + (count + 128);//128
       }
    }
    ui -> comboBox_configuration -> setStyleSheet("QComboBox { background-color: white; }");
    ui->SlaveAddress->setRange(MIN_SLAVE_ADDRESS, MAX_SLAVE_ADDRESS); // Set the visible range
    ui->SlaveAddress->setValue(INITIAL_SLAVE_ADDRESS); // Set an initial value

    ui -> nSize -> setEditable(true);
    for(int i = 1; i <= MAXNUMOFREGISTER; i++)
    {
       ui -> nSize -> addItem(QString::number(i));
    }
    dataReadWrite = new writedataDialog(this, this, 1);
    read_MB_LedMicroCycleTime_Preset = new writedataDialog(this, this, 1);
    read_MB_LedCycleTime_Preset = new currentDialog(this, this, 1);
    read_MB_LedMaxCurrentPulse_Preset = new currentDialog(this, this, 2);
    read_MB_LedMaxCurrentContinuous_Preset = new currentDialog(this, this, 3);

    Lineedit_RamDiagnosis = {
       ui -> lineEdit_TempLed100_1,
       ui -> lineEdit_TempLed100_2,
       ui -> lineEdit_Vin,
       ui -> lineEdit_FanDuty,
       ui -> lineEdit_FanRPM,
       ui -> lineEdit_TempDriver100,
       ui -> lineEdit_HumidityDriver100
    };
    LineEditRamFault = {
       ui -> lineEdit_Faults,
       ui -> lineEdit_FaultLedID,
       ui -> lineEdit_FaultCurrentSetPoint,
       ui -> lineEdit_FaultVin,
       ui -> lineEdit_FaultTempLed100_1,
       ui -> lineEdit_FaultTempLed100_2,
       ui -> lineEdit_TempDriver100_2,
       ui -> lineEdit_HumidityDriver100_2
    };
    LineditFlashFault = {
       ui -> lineEdit_FaultFIFO_WR_Pointer,
       ui -> lineEdit_FaultFifoNumEvents
    };
    Lineditfaulfifo = {
       ui -> fault_fifo_2,
       ui -> fault_Id_2,
       ui -> faultcurrent_read_2,
       ui -> FaultVin_2,
       ui -> FaultTempled100_3,
       ui -> FaultTempled100_4,
       ui -> FaultTempDriver100_2,
       ui -> FaultHumidityDriver100_2
    };
    Lineditfaulfifo_time = {
       ui -> TimeStamp_2};

    custom_lineEdit = {
       ui -> customLineEdit1,
       ui -> customLineEdit2,
       ui -> customLineEdit3,
       ui -> customLineEdit4,
       ui -> customLineEdit5,
       ui -> customLineEdit6,
       ui -> customLineEdit7,
       ui -> customLineEdit8,
       ui -> customLineEdit9,
       ui -> customLineEdit10,
       ui -> customLineEdit11,
       ui -> customLineEdit12,
       ui -> customLineEdit13,
       ui -> customLineEdit14,
       ui -> customLineEdit15,
       ui -> customLineEdit16,
       ui -> customLineEdit17,
       ui -> customLineEdit18,
       ui -> customLineEdit19,
       ui -> customLineEdit20,
       ui -> customLineEdit21,
       ui -> customLineEdit22,
       ui -> customLineEdit23,
       ui -> customLineEdit24,
       ui -> customLineEdit25,
       ui -> customLineEdit26,
       ui -> customLineEdit27,
       ui -> customLineEdit28,
       ui -> customLineEdit29,
       ui -> customLineEdit30,
       ui -> customLineEdit31,
       ui -> customLineEdit32,
       ui -> customLineEdit33,
       ui -> customLineEdit34,
       ui -> customLineEdit35,
       ui -> customLineEdit36,
       ui -> customLineEdit37,
       ui -> customLineEdit38,
       ui -> customLineEdit39,
       ui -> customLineEdit40,
       ui -> customLineEdit41,
       ui -> customLineEdit42,
       ui -> customLineEdit43,
       ui -> customLineEdit44,
       ui -> customLineEdit45,
       ui -> customLineEdit46,
       ui -> customLineEdit47,
       ui -> customLineEdit48,
       ui -> customLineEdit49,
       ui -> customLineEdit50,
       ui -> customLineEdit51,
       ui -> customLineEdit52,
       ui -> customLineEdit53,
       ui -> customLineEdit54,
       ui -> customLineEdit55,
       ui -> customLineEdit56,
       ui -> customLineEdit57,
       ui -> customLineEdit58,
       ui -> customLineEdit59,
       ui -> customLineEdit60,
       ui -> customLineEdit61,
       ui -> customLineEdit62,
       ui -> customLineEdit63,
       ui -> customLineEdit64,
       ui -> customLineEdit65,
       ui -> customLineEdit66,
       ui -> customLineEdit67,
       ui -> customLineEdit68,
       ui -> customLineEdit69,
       ui -> customLineEdit70,
       ui -> customLineEdit71,
       ui -> customLineEdit72,
       ui -> customLineEdit73,
       ui -> customLineEdit74,
       ui -> customLineEdit75,
       ui -> customLineEdit76,
       ui -> customLineEdit77,
       ui -> customLineEdit78,
       ui -> customLineEdit79,
       ui -> customLineEdit80,
       ui -> customLineEdit81,
       ui -> customLineEdit82,
       ui -> customLineEdit83,
       ui -> customLineEdit84,
       ui -> customLineEdit85,
       ui -> customLineEdit86,
       ui -> customLineEdit87,
       ui -> customLineEdit88,
       ui -> customLineEdit89,
       ui -> customLineEdit90,
       ui -> customLineEdit91,
       ui -> customLineEdit92,
       ui -> customLineEdit93,
       ui -> customLineEdit94,
       ui -> customLineEdit95,
       ui -> customLineEdit96,
       ui -> customLineEdit97,
       ui -> customLineEdit98,
       ui -> customLineEdit99,
       ui -> customLineEdit100,
       ui -> customLineEdit101,
       ui -> customLineEdit102,
       ui -> customLineEdit103,
       ui -> customLineEdit104,
       ui -> customLineEdit105,
       ui -> customLineEdit106,
       ui -> customLineEdit107,
       ui -> customLineEdit108,
       ui -> customLineEdit109,
       ui -> customLineEdit110,
       ui -> customLineEdit111,
       ui -> customLineEdit112,
       ui -> customLineEdit113,
       ui -> customLineEdit114,
       ui -> customLineEdit115,
       ui -> customLineEdit116,
       ui -> customLineEdit117,
       ui -> customLineEdit118,
       ui -> customLineEdit119,
       ui -> customLineEdit120,
       ui -> customLineEdit121,
       ui -> customLineEdit122,
       ui -> customLineEdit123,
       ui -> customLineEdit124,
       ui -> customLineEdit125
    };
    statusValues = {
       ui -> State_Version_Read,
       ui -> Hw_Version_Read,
       ui -> sw_Version_Read,
       ui -> Device_Id_Read,
       ui -> preset_Read
    };

    disable_read_lineedits();
    QRegExp hexRegExp("^(0x|0X)?[0-9A-Fa-f]*$");
    for(int count = 0; count < custom_lineEdit.size(); count++)
    {
       QRegExpValidator * validator_custom = new QRegExpValidator(hexRegExp, custom_lineEdit[count]);
       custom_lineEdit[count] -> setValidator(validator_custom);
    }
    QRegExpValidator * validator_1 = new QRegExpValidator(hexRegExp, ui -> StartAddress);
    ui -> StartAddress -> setValidator(validator_1);
    QRegExpValidator * validator_2 = new QRegExpValidator(hexRegExp, ui -> fifo_numevent_Enter);
    ui -> fifo_numevent_Enter -> setValidator(validator_2);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(MySlot()));
#ifdef QDEBUG
    connect(timer, &QTimer::timeout, this, &MainWindow::updateDateTime);
    timer->start(1000);
#endif
    for(int count = 0; count < lineeditCommandWrite.size(); count++)
    {
       lineeditCommandWrite[count] -> setStyleSheet("QComboBox { background-color: white; }");
    }
    mywidget = this -> ui -> rawData;
/**********************************************************************************************/
    foreach(const QSerialPortInfo & ThisPort, QSerialPortInfo::availablePorts())
    {
      ui -> serialPortSelect_comboBox -> addItem(ThisPort.portName());
   }

#ifdef QDEBUG
      foreach (const QSerialPortInfo &portInfo, QSerialPortInfo::availablePorts())
      {
           qDebug() << "Port Name: " << portInfo.portName();
           qDebug() << "Description: " << portInfo.description();
           qDebug() << "Manufacturer: " << portInfo.manufacturer();
      }
#endif
/**********************************************************************************************/
   QList < qint32 > baudRates = info.standardBaudRates();
   QList < QString > stringBaudRates;
   for(int i = 0; i < baudRates.size(); i++)
   {
      stringBaudRates.append(QString::number(baudRates.at(i)));
   }
    customlineedit_enable(1);
    ui -> baud -> addItems(stringBaudRates);
    ui -> baud -> addItem("921600");
    ui -> baud -> setCurrentIndex(12);
    ui -> parity -> addItem("NoParity");
    ui -> parity -> addItem("EvenParity");
    ui -> parity -> addItem("OddParity");
    ui -> parity -> setCurrentIndex(0);
    ui -> databits -> addItem("7");
    ui -> databits -> addItem("8");
    ui -> databits -> setCurrentIndex(1);
    ui -> stopbits -> addItem("1");
    ui -> stopbits -> addItem("1.5");
    ui -> stopbits -> addItem("2");
    ui -> stopbits -> setCurrentIndex(0);

    Baud = ui->baud->currentText().toInt();
    Databits=ui->databits->currentText().toInt();
    Stopbits=ui->stopbits->currentText().toInt();
    QString str = ui->parity->currentText();
    QByteArray latin1 = str.toLatin1();
    ParityValue = latin1.at(0);

}

MainWindow::~MainWindow()
{
     delete ui;
}


/*******************************************************************************
 * Function Name: QVector<QComboBox*> serial_communication_combo( void )
 * Description  : This function is used for serial communication combo values return
 * Parameter    : None
 * Return       : combo_value - response of combobox
 ******************************************************************************/
QVector<QComboBox*>  MainWindow::serial_communication_combo(void)
{
    return  combo_value;
}


/*******************************************************************************
 * Function Name: QComboBox* config_preset_return( void )
 * Description  : This function is used for config/preset combo value return
 * Parameter    : None
 * Return       : m_comboBox - response of combobox
 ******************************************************************************/
QComboBox* MainWindow::config_preset_return() const
{
    return m_comboBox;
}


/*******************************************************************************
 * Function Name: void on_connect_btn_clicked( void )
 * Description  : This function is used for connect and disconnect
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
void MainWindow::on_connect_btn_clicked(void)
{
        QList<QSerialPortInfo> availablePorts;
        QString selectedPort = ui->serialPortSelect_comboBox->currentText();
        int index_baud = on_baud_currentIndexChanged(ui->baud->currentText().toInt());
        int index_databits = on_databits_currentIndexChanged(ui->databits->currentText().toInt());
        int index_stopbits = on_stopbits_currentIndexChanged(ui->stopbits->currentText().toInt());
        QString index_parity = on_parity_currentTextChanged(ui->parity->currentText());
        if(connect_disconnect == 0)
        {
           if((ui->serialPortSelect_comboBox->count() == 0))
           {
               availablePorts = QSerialPortInfo::availablePorts();
               if(availablePorts.size() >= 1)
               {
                   for (const QSerialPortInfo &portInfo : availablePorts)
                   {
                       ui -> serialPortSelect_comboBox->addItem(portInfo.portName());
                   }
               }
               else
               {
                   errorMessage(SERIALERROR);
               }
           }
           else
           {
                 SetMainWindowObj(this);
                 ModInterface( ui->serialPortSelect_comboBox->currentText().toLatin1().constData(),
                               index_baud, ParityValue, index_databits,
                               index_stopbits);
                if ( !ModbusBusyVerify() )
                {
                    QMessageBox::warning(this, "Warning", "Modbus Is Busy with Another Device !");
                    ui->connect_btn->setText(tr("Connect"));

                    connect_disconnect = 0;
                }
                else
                {
                      ui->connect_btn->setText(tr("Disconnect"));

                      statusBar()->showMessage(tr("connected successfully"),5000);
                      m_serialModbus_value = ModbusValue();
                      connect_disconnect = 1;
                }
                statusBar()->showMessage(tr("connected successfully"),5000);
                ui->connect_disconnect_status->setStyleSheet("QCheckBox::indicator{  background-color: Green; }");
                m_serialModbus_value = ModbusValue();
                ui->baud->setEnabled(false);
                ui->databits->setEnabled(false);
                ui->stopbits->setEnabled(false);
                ui->parity->setEnabled(false);
                if(connect_disconnect == 1)
                {
                   updateDateTime();
                }
                else
                {
                  ui->connect_disconnect_status->setStyleSheet("QCheckBox::indicator{  background-color: white; }");
                }
           }

        }
        else
        {
              if((ui->serialPortSelect_comboBox->count() == 0))
              {
                 errorMessage(SERIALERROR);
              }

              else
              {
                    ModInterface( ui->serialPortSelect_comboBox->currentText().toLatin1().constData(),
                                index_baud, ParityValue, index_databits,index_stopbits);
                    Fault_warning_clear();
                    clear_all_lineedit();
                    statusBar()->showMessage(tr("Connect failed.."), 5000);
                    ui->connect_btn->setText(tr("Connect"));
                    ui->connect_disconnect_status->setStyleSheet("QCheckBox::indicator{  background-color: Red; }");
                    ui->baud->setEnabled(true);
                    ui->databits->setEnabled(true);
                    ui->stopbits->setEnabled(true);
                    ui->parity->setEnabled(true);

              }
               connect_disconnect=0;
        }
              ui -> serialPortSelect_comboBox ->clear();
              availablePorts = QSerialPortInfo::availablePorts();
              for (const QSerialPortInfo &portInfo : availablePorts)
              {
              ui -> serialPortSelect_comboBox->addItem(portInfo.portName());
              }

}


/*******************************************************************************
 * Function Name: void on_SendCustomFrame_clicked( void )
 * Description  : This function is used for write data as customer input addres and number of bytes and data
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
void MainWindow::on_SendCustomFrame_clicked(void)
{
    bool flagChkData = false;
    QString var1 =0 ;
    uint16_t rx_buff[TX_RX_BUF] = {0};
    uint16_t index = 0;
    uint16_t Address = static_cast<uint16_t>(ui->StartAddress->text().toInt());
    uint16_t lengthToReadWrite = static_cast<uint16_t>(ui->nSize->currentText().toInt());
    int dataValue = 0;
    int return_value = 0;

    index = static_cast<uint16_t>(ui->single_multi_write->currentIndex());
    m_serialModbus_value = ModbusValue();

    if( isActiveCommunication() )
    {
        if ( m_serialModbus_value ) {
            if ( ui->StartAddress->text().isEmpty() )
            {
                  errorMessage(STARTADDRERROR);
            }
            else
            {
                switch (index) {
                    case 0:
                    if(ActiveSlaveId() == 0 )
                    {
                       QMessageBox::warning(this, "Warning", "Modbus is in broadcast mode!");
                    }
                    else
                    {
                        return_value = ReadModbusData( Address, lengthToReadWrite, rx_buff);
                        if(return_value == ERROR_CODE) {
                           checkException();
                        }
                        else
                        {
                            if(ui->hex_check->checkState() == 0)
                            {
                              for(int count = 0; count < lengthToReadWrite ;count++)
                              {
                                  custom_lineEdit[count]->setText(QString::number(rx_buff[count]));
                              }
                            }
                            else {
                                for(int count = 0; count < lengthToReadWrite ;count++)
                                {
                                    custom_lineEdit[count]->setText("0x" + QString("%1").arg(rx_buff[count], 4, HEX_BASE_VALUE, QLatin1Char('0')));
                                }
                            }
                        }
                    }
                    break;

                    case 1:
                    lengthToReadWrite = 1;

                    for (int count = 0 ; count < lengthToReadWrite ; count++ )
                    {
                         if ( custom_lineEdit[count]->text().isEmpty() )
                         {
                             flagChkData = true;
                         }
                         else
                         {
                             var1 =  custom_lineEdit[count]->text();
                             bool ok;
                              dataValue = var1.toInt(&ok, 0);

                             if (!ok)
                             {
                                 QMessageBox::warning(this, "Invalid Input", "Please enter a valid number or hexadecimal value.");
                                 return;
                             }
                         }
                         }
                    if ( !flagChkData )
                    {
                        return_value = WriteModbusData(Address,dataValue);
                        if(return_value == ERROR_CODE)
                        {
                           checkException();
                        }
                    }
                    else
                    {
                        errorMessage(LINEEDITERROR);
                    }
                    break;

                    case 2:
                    if ( lengthToReadWrite <= READ_WRITE_LENGTH)
                    {
                        QString* settowrite = new QString[lengthToReadWrite];
                        uint16_t* dataValue_multi= new uint16_t[lengthToReadWrite];
                        for (int count = 0 ; count < lengthToReadWrite ; count++ )
                        {
                             if ( custom_lineEdit[count]->text().isEmpty() )
                             {
                                 flagChkData = true;
                             }
                             else
                             {
                                   settowrite[count] = custom_lineEdit[count]->text();
                                   bool ok;
                                   dataValue_multi[count] =static_cast<uint16_t>(settowrite[count].toInt(&ok, 0)); // Convert the input to an integer (decimal or hexadecimal)

                                   if (!ok)
                                   {
                                       QMessageBox::warning(this, "Invalid Input", "Please enter a valid number or hexadecimal value.");
                                       return;
                                   }
                             }
                        }
                        if ( !flagChkData )
                        {
                             return_value=WriteMultipleModbusData( Address, lengthToReadWrite,dataValue_multi  );
                             if(return_value == ERROR_CODE) {
                                checkException();
                             }
                        }
                        else
                        {
                            errorMessage(LINEEDITERROR);
                        }
                    }
                else
                    {
                      errorMessage(TOOMANYDATAERROR);
                    }
                break;
                }
            }
        }
    }
}


/*******************************************************************************
 * Function Name: void customlineedit_enable( int nb )
 * Description  : This function is used for set number of bytes to read/write
 * Parameter    : nb
 * Return       : None
 ******************************************************************************/
void MainWindow::customlineedit_enable(int nb)
{
    for (uint8_t count= 0;count < custom_lineEdit.size() ;count ++ )
    {
         custom_lineEdit[count]->setEnabled(true);
    }

    int value = (custom_lineEdit.size()) - (nb);
    for (uint8_t count= 0;count < value ;count ++ )
    {
         custom_lineEdit[nb+count]->setEnabled(false);
    }
}


/*******************************************************************************
 * Function Name: void on_MicroCycleLedConfig_readButton_clicked( void )
 * Description  : This function is used to read/write  MicroCycleLedConfig and show dailogbox
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
void MainWindow::on_MicroCycleLedConfig_readButton_clicked(void)
{
    int index_value =0;
    uint16_t rx_buff[TX_RX_BUF] = {0};
    QVector<QLineEdit*> data_return;
    index_value =ui->comboBox_configuration->currentIndex();
    data_return = this->read_MB_LedMicroCycleTime_Preset->show_intial_microcycleled_data();
        if( isActiveCommunication() )
            {
                if(index_value == 0)
                {
                  ReadModbusData(MB_MicroCycleLedConfig, MULTI_WR_LENGTH, rx_buff );
                  for(uint8_t count = 0; count < data_return.size() ;count++)
                  {
                      data_return[count]->setText(QString::number(rx_buff[count]));
                  }
                }

                else
                {
                      ReadModbusData(MB_MicroCycleLedConfig_Preset, MULTI_WR_LENGTH, rx_buff );

                      for(uint8_t count = 0; count < data_return.size() ;count++)
                      {
                          data_return[count]->setText(QString::number(rx_buff[count]));
                      }
                  }
                  this->read_MB_LedMicroCycleTime_Preset->show();
            }
}


/*******************************************************************************
 * Function Name: void on_LedCurrentSetpoint_readButton_clicked( void )
 * Description  : This function is used to read/write  LedCurrentSetpoint and show dailogbox
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
void MainWindow::on_LedCurrentSetpoint_readButton_clicked(void)
{
    uint16_t rx_buff[TX_RX_BUF] = {0};
    int index_value = 0;
    QVector<QLineEdit*> data_return;
    this->read_MB_LedCycleTime_Preset->setWindowTitle("LedCurrentSetpoint Configuration");
    index_value =ui->comboBox_configuration->currentIndex();
    data_return = this->read_MB_LedCycleTime_Preset->show_data_current();

        if( isActiveCommunication() )
            {
                if(index_value == 0)
                {

                  ReadModbusData(MB_LedCurrentSetpoint, MULTI_WR_LENGTH, rx_buff );
                  for(uint8_t count = 0; count < data_return.size() ;count++)
                  {
                      data_return[count]->setText(QString::number(rx_buff[count]));
                  }
                }
                else
                {
                    ReadModbusData(MB_LedCurrentSetpoint_Preset, MULTI_WR_LENGTH, rx_buff );
                    for(uint8_t count = 0; count < data_return.size() ;count++)
                    {
                        data_return[count]->setText(QString::number(rx_buff[count]));
                    }
                }
                  this->read_MB_LedCycleTime_Preset->show();
            }
}


/*******************************************************************************
 * Function Name: void on_LedMaxCurrentPulse_readButton_clicked( void )
 * Description  : This function is used to read/write  LedMaxCurrentPulse and show dailogbox
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
void MainWindow::on_LedMaxCurrentPulse_readButton_clicked(void)
{
    uint16_t rx_buff[TX_RX_BUF] = {0};
    int index_value = 0;
    QVector<QLineEdit*> data_return;
    this->read_MB_LedMaxCurrentPulse_Preset->setWindowTitle("Current LedMaxCurrentPulse  Configuration");
    index_value =ui->comboBox_configuration->currentIndex();
    data_return = this->read_MB_LedMaxCurrentPulse_Preset->show_data_current();

        if( isActiveCommunication() )
            {
                if(index_value == 0)
                {
                  ReadModbusData(MB_LedMaxCurrentPulse, MULTI_WR_LENGTH, rx_buff );
                    for(uint8_t count = 0; count < data_return.size(); count++)
                    {
                        data_return[count]->setText(QString::number(rx_buff[count]));
                    }
                }
                else
                {
                    ReadModbusData(MB_LedMaxCurrentPulse_Preset, MULTI_WR_LENGTH, rx_buff );
                      for(uint8_t count = 0; count < data_return.size(); count++)
                      {
                          data_return[count]->setText(QString::number(rx_buff[count]));
                      }
                }
                    this->read_MB_LedMaxCurrentPulse_Preset->show();
        }
}


/*******************************************************************************
 * Function Name: void on_LedMaxCurrentContinuous_readButton_clicked( void )
 * Description  : This function is used to read/write  LedMaxCurrentContinuous and show dailogbox
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
void MainWindow::on_LedMaxCurrentContinuous_readButton_clicked(void)
{
    uint16_t rx_buff[TX_RX_BUF] = {0};
    int index_value = 0;
    QVector<QLineEdit*> data_return;
    this->read_MB_LedMaxCurrentContinuous_Preset->setWindowTitle("Current LedMaxCurrentContinuous Configuration");
    index_value =ui->comboBox_configuration->currentIndex();

    data_return = this->read_MB_LedMaxCurrentContinuous_Preset->show_data_current();
        if( isActiveCommunication() )
            {
                if(index_value == 0)
                {
                  ReadModbusData(MB_LedMaxCurrentContinuous, MULTI_WR_LENGTH, rx_buff );
                  for(uint8_t count = 0; count < data_return.size() ;count++)
                  {
                      data_return[count]->setText(QString::number(rx_buff[count]));
                  }
                }
                else
                {
                    ReadModbusData(MB_LedMaxCurrentContinuous_Preset, MULTI_WR_LENGTH, rx_buff );
                    for(uint8_t count = 0; count < data_return.size() ;count++)
                    {
                        data_return[count]->setText(QString::number(rx_buff[count]));
                    }
                }
                  this->read_MB_LedMaxCurrentContinuous_Preset->show();
            }
}


/*******************************************************************************
 * Function Name: void on_pushButton_WriteData_clicked( void )
 * Description  : This function is used to write the address from 1001
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
void MainWindow::on_pushButton_WriteData_clicked(void)
{
   uint8_t countValue =0;
   int var1 = 0;
   int index_value = 0;
   int return_value = 0;

   index_value =ui->comboBox_configuration->currentIndex();

    if( isActiveCommunication() )
    {
        if ( index_value == 0 )
        {

            for (int checked = 0; checked<9 ; checked++)
            {
                 if ( value_of_config_checkbox[checked]->isChecked() )
                 {
                     countValue++;
                     if (value_of_config_write_lineedit[checked]->text().isEmpty())
                     {
                         errorMessage(LINEEDITERROR);
                         break;
                     }
                     else
                     {
                         if(checked == 7)
                         {
                             var1 =static_cast<int>((value_of_config_write_lineedit[checked]->text().toFloat())*10) ;
                             return_value = WriteModbusData(adresses_config[checked],var1 );
                             if( return_value == ERROR_CODE )
                             {
                                 checkException();
                                 break;
                             }

                         }
                         else
                         {
                             var1 = value_of_config_write_lineedit[checked]->text().toUShort();
                             return_value = WriteModbusData(adresses_config[checked],var1 );
                             if( return_value == ERROR_CODE )
                             {
                                 checkException();
                                 break;
                             }

                         }
                         }
                     }
                 }
            if ( countValue == 0 )
            {
                errorMessage(CHECKBOXERROR);
            }
            }
        else
        {
            for (int checked = 0; checked<9 ; checked++)
            {
                 if ( value_of_config_checkbox[checked]->isChecked() )
                 {
                     countValue++;
                     if (value_of_config_write_lineedit[checked]->text().isEmpty())
                     {
                         errorMessage(LINEEDITERROR);
                         break;
                     }
                     else
                     {
                         if(checked == 7)
                         {
                             var1 =static_cast<int>((value_of_config_write_lineedit[checked]->text().toFloat())*10) ;
                             return_value = WriteModbusData(adresses_preset_config[checked],var1 );
                             if( return_value == ERROR_CODE )
                             {
                                 checkException();
                                 break;
                             }
                         }
                         else
                         {
                             var1 = value_of_config_write_lineedit[checked]->text().toUShort();
                             return_value = WriteModbusData(adresses_preset_config[checked],var1 );
                             if( return_value == ERROR_CODE )
                             {
                                 checkException();
                                 break;
                             }
                         }

                         }
                     }
                 }
            if ( countValue == 0 )
            {
                errorMessage(CHECKBOXERROR);
            }
        }
        delay(10);
        State_version();
    }
}


/*******************************************************************************
 * Function Name: void on_pushButton_ReadData_clicked( void )
 * Description  : This function is used to  Read the address from 1001
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
void MainWindow::on_pushButton_ReadData_clicked(void)
{
    const uint8_t upper_len = 3;
    const uint8_t lower_len = 6;
    quint16 var1[3] = {0};
    quint16 var2[6] = {0};
    int index_value  =0;
    float varTOFloat = 0;
    int ret =0;
    int ret2 =0;

    index_value = ui->comboBox_configuration->currentIndex();

    if( isActiveCommunication())
    {
        if(ActiveSlaveId() == 0)
        {
           QMessageBox::warning(this, "Warning", "Modbus is in broadcast mode!");
        }
        else
        {
            if ( index_value == 0 )
            {
                ret = ReadModbusData(CONFIG_START_ADDR, upper_len, var1 );


                if( ret == ERROR_CODE )
                {
                    checkException();
                    return;
                }

                ui -> LedMicroCycleTimeLineEdit_read->setText(QString::number(var1[0]));
                ui -> lineEdit_LedCycleTime_read->setText(QString::number(var1[1]));
                ui -> lineEdit_NumMicroCycles_read->setText(QString::number(var1[2]));

                memset(var1, 0, sizeof(var1));

                ret2 = ReadModbusData(MB_FanTempLedMin, lower_len, var2);
                if( ret2 == ERROR_CODE )
                {
                    checkException();
                    return;
                }

                ui -> lineEdit_FanTempLedMin_read->setText(QString::number(var2[0]));
                ui -> lineEdit_FanTempLedMax_read->setText(QString::number(var2[1]));
                ui -> lineEdit_LedTempWar_read->setText(QString::number(var2[2]));
                ui -> lineEdit_SyncMode_read->setText(QString::number(var2[3]));
                varTOFloat = ((float)var2[4]/10);
                ui -> lineEdit_DeadTime10_read->setText(QString::number(varTOFloat));
                ui -> lineEdit_DeglitchingEnable_read->setText(QString::number(var2[5]));
                memset(var2, 0, sizeof(var2));
            }
            else
            {
                ret = ReadModbusData(CONFIG_PRESET_START_ADDR, upper_len, var1 );
                if( ret == ERROR_CODE )
                {
                    checkException();
                    return;
                }
                ui -> LedMicroCycleTimeLineEdit_read->setText(QString::number(var1[0]));
                ui -> lineEdit_LedCycleTime_read->setText(QString::number(var1[1]));
                ui -> lineEdit_NumMicroCycles_read->setText(QString::number(var1[2]));

                 memset(var1, 0, sizeof(var1));


                ret2 = ReadModbusData(MB_FanTempLedMin_Preset, lower_len, var2);
                if( ret2 == ERROR_CODE )
                {
                    checkException();
                    return;
                }
                ui -> lineEdit_FanTempLedMin_read->setText(QString::number(var2[0]));
                ui -> lineEdit_FanTempLedMax_read->setText(QString::number(var2[1]));
                ui -> lineEdit_LedTempWar_read->setText(QString::number(var2[2]));
                ui -> lineEdit_SyncMode_read->setText(QString::number(var2[3]));
                varTOFloat = ((float)var2[4]/10);
                ui -> lineEdit_DeadTime10_read->setText(QString::number(varTOFloat));
                ui -> lineEdit_DeglitchingEnable_read->setText(QString::number(var2[5]));
                memset(var2, 0, sizeof(var2));
            }
        }
    }
}


/*******************************************************************************
 * Function Name: uint16_t connect_disconnect_flag( void )
 * Description  : This function is used to  return flag value
 * Parameter    : None
 * Return       : connect_disconnect
 ******************************************************************************/
uint16_t MainWindow::connect_disconnect_flag(void)
{
    return connect_disconnect;
}


/*******************************************************************************
 * Function Name: QString serial_flag( void )
 * Description  : This function is used to  return flag value
 * Parameter    : None
 * Return       : serial
 ******************************************************************************/
QString MainWindow::serial_flag(void)
{
    return serial;
}


/*******************************************************************************
 * Function Name: void on_pushButton_Write_Command_clicked( void )
 * Description  : This function is used to   write command parameter address from 3000
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
void MainWindow::on_pushButton_Write_Command_clicked(void)
{
    int var =0;
    int return_value = 0;
    if( isActiveCommunication() )
    {
              if (ui->checkBox_FanMode->isChecked())
              {
                  var = ui->Combo_FanMode_write->currentText().toUShort();
                  return_value=WriteModbusData((MB_FanMode),var);
                  if(return_value == ERROR_CODE)
                  {
                      checkException();
                  }
              }
              else
              {
                    errorMessage(CHECKBOXERROR);
              }
              delay(10);
              State_version();
    }
}


/*******************************************************************************
 * Function Name: void on_pushButton_Read_Command_clicked( void )
 * Description  : This function is used to  read command parameter the address  from 3000
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
void MainWindow::on_pushButton_Read_Command_clicked(void)
{
    uint16_t readData = 0;
    int return_value = 0;
    if( isActiveCommunication() )
    {
        if( ActiveSlaveId() == 0 )
        {
            QMessageBox::warning(this, "Warning", "Modbus is in broadcast mode!");
        }
        else
        {
            if (ui->checkBox_FanMode->isChecked())
            {
                return_value = ReadModbusData(MB_FanMode, 1,(&readData) );
                if(return_value == ERROR_CODE)
                {
                    checkException();
                }
                ui->lineEdit_FanMode_read->setText(QString::number(readData));
            }
            else
            {
                  errorMessage(CHECKBOXERROR);
            }

        }

        }
}


/*******************************************************************************
 * Function Name: void on_pushButton_RamDiagnosis_clicked( void )
 * Description  : This function is used to  read RamDiagnosis adsress 4000
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
void MainWindow::on_pushButton_RamDiagnosis_clicked(void)
{
    const uint8_t uLen = 7;
    uint16_t rx_buff[TX_RX_BUF] = {0};
    int return_value = 0;

    if ( isActiveCommunication() )
    {
        if(ActiveSlaveId() == 0)
        {
            QMessageBox::warning(this, "Warning", "Modbus is in broadcast mode!");
        }
        else
        {
            return_value= ReadModbusData(MB_TempLed100_1, uLen, rx_buff );
             for (uint8_t count = 0;count < ( Lineedit_RamDiagnosis.size() ) ;count++ )
             {
                 if(return_value == ERROR_CODE)
                 {
                    checkException();
                     break;
                 }
                 if((count == 0) | (count == 1))
                 {
                    Lineedit_RamDiagnosis[count]->setText(QString::number((float)(int16_t)(rx_buff[count])/100));
                 }
                 else if((count == 5) | (count == 6))
                 {
                    Lineedit_RamDiagnosis[count]->setText(QString::number((float)(rx_buff[count])/100));
                 }
                 else if(count == 2)
                 {
                    Lineedit_RamDiagnosis[count]->setText(QString::number((float)(rx_buff[count])/10));
                 }
                 else
                 {
                    Lineedit_RamDiagnosis[count]->setText(QString::number(rx_buff[count]));
                 }
        }

         }
    }
}


/*******************************************************************************
 * Function Name: void on_pushButton_Read_RamFault_clicked( void )
 * Description  : This function is used to  read RamFault adsress 5000
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
void MainWindow::on_pushButton_Read_RamFault_clicked(void)
{
    const uint8_t uLen = 8;
    uint16_t rx_buff[TX_RX_BUF] = {0};
    int return_value = 0;

    if ( isActiveCommunication() )
    {
        if(ActiveSlaveId() == 0)
        {
            QMessageBox::warning(this, "Warning", "Modbus is in broadcast mode!");
        }
        else
        {
            return_value = ReadModbusData(MB_Faults, uLen, rx_buff );
             update_fault_status(rx_buff[0]);
            for (uint8_t count = 0;count < LineEditRamFault.size(); count++ )
            {
                if(return_value == ERROR_CODE)
                {
                    checkException();
                    break;
                }
                if(count == 3 )
                {
                    LineEditRamFault[count]->setText(QString::number((float)rx_buff[count]/10));
                }
                else if((count == 4)|(count == 5))
                {
                   LineEditRamFault[count]->setText(QString::number((float)(int16_t)(rx_buff[count])/100));
                }
                else if((count == 6)|(count == 7))
                {
                   LineEditRamFault[count]->setText(QString::number((float)(rx_buff[count])/100));
                }
                else
                {
                   LineEditRamFault[count]->setText(QString::number(rx_buff[count]));
                }

                 }
        }
       }
}


/*******************************************************************************
 * Function Name: void on_pushButton_FlashFault_clicked( void )
 * Description  : This function is used to  read FlashFault adsress 6001
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
void MainWindow::on_pushButton_FlashFault_clicked()
{
    const uint8_t ulen = 2;
    uint16_t rx_buff[TX_RX_BUF] = {0};
    int return_value = 0;
    if ( isActiveCommunication() )
    {
        if(ActiveSlaveId() == 0)
        {
            QMessageBox::warning(this, "Warning", "Modbus is in broadcast mode!");
        }
        else
        {
            return_value= ReadModbusData(MB_FaultFIFO_WR_Pointer, ulen,rx_buff );
            for (uint8_t count = 0;count < LineditFlashFault.size(); count++ )
            {
                if(return_value==ERROR_CODE)
                {
                    checkException();
                    break;
                }
                 LineditFlashFault[count]->setText(QString::number(rx_buff[count]));
            }
            }
       }
}


/*******************************************************************************
 * Function Name: void on_pushButton_eventReadIndex_5_clicked( void )
 * Description  : This function is used to  eventindex read lineedit and get data
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
void MainWindow::on_pushButton_eventReadIndex_5_clicked(void)
{
    const uint8_t ulen = 2;
    const uint16_t element_length =16;
    QString rec_string = nullptr;
    QString timedata = nullptr;
    QStringList stringList;
    uint16_t startaddress = 0;
    uint16_t read_event_data = 0;
    uint16_t rx_buff[TX_RX_BUF] = {0};
    int index_value = 0;
    int return_value = 0;


    return_value = ReadModbusData(MB_FaultFIFO_WR_Pointer, ulen,rx_buff );
    read_event_data = rx_buff[0];
    index_value = ui->fifo_numevent_Enter->text().toInt();
    startaddress = static_cast<uint16_t>(MB_FaultFIFO+((index_value-1)*16)) ;

        if( isActiveCommunication() )
        {
            if(ActiveSlaveId() == 0)
            {
                QMessageBox::warning(this, "Warning", "Modbus is in broadcast mode!");
            }

            else
            {
                if(ui->fifo_numevent_Enter->text().isEmpty())
                {
                    QMessageBox::warning(this, "Warning", "Please enter index value!");
                }

                else
                {
                    Fault_warning_clear();
                    if(index_value > 0 && index_value < 129)
                    {
                       if((index_value >= 1)  && (index_value <= read_event_data))
                       {
                            return_value= ReadModbusData(startaddress, element_length, rx_buff );

                                for (int count = 0; count < Lineditfaulfifo.size(); count++ )
                                {
                                    if(return_value == ERROR_CODE)
                                    {
                                        checkException();
                                        break;
                                    }

                                    if(count == 3 )
                                    {
                                        Lineditfaulfifo[count]->setText(QString::number((float)rx_buff[count]/10));
                                    }
                                    else if((count == 4)|(count == 5))
                                    {
                                       Lineditfaulfifo[count]->setText(QString::number((float)(int16_t)(rx_buff[count])/100));
                                    }
                                    else if((count == 6)|(count == 7))
                                    {
                                       Lineditfaulfifo[count]->setText(QString::number((float)(rx_buff[count])/100));
                                    }
                                    else
                                    {
                                       Lineditfaulfifo[count]->setText(QString::number(rx_buff[count]));
                                    }
                                }

                                for ( uint8_t count = 8; count < 15; count++)
                                {
                                    rec_string = Conversion_UInt_ASCII(rx_buff[count]);
                                    stringList << rec_string;
                                }
                                timedata = stringList.join("");
                                ui->TimeStamp_2->setText(timedata);

                                update_fault_status(rx_buff[0]);
                           }
                       else
                       {
                          QMessageBox::warning(this, "Warning", "Data can be inserted only below " + QString::number(read_event_data));
                          for(uint8_t count = 0; count < Lineditfaulfifo.size(); count++)
                          {
                               Lineditfaulfifo[count]->clear();
                          }
                          ui->TimeStamp_2->clear();
                          Fault_warning_clear();

                       }
                    }
                        else
                        {
                           QMessageBox::warning(this, "Warning", "Data can be inserted only between 1 to 128");
                           Fault_warning_clear();
                        }
                }

            }
        }
}


/*******************************************************************************
 * Function Name: void update_fault_status( uint16_t fault )
 * Description  : This function is used to update faults on checkboxes
 * Parameter    : fault
 * Return       : None
 ******************************************************************************/
void MainWindow::update_fault_status(uint16_t fault_warning)
{
    for(int count= 0;count<fault_status.size();count++)
    {
        fault_status[count]->setStyleSheet("\
           QCheckBox::indicator{ color: White; }\
       ");
    }
    for(int count= 0;count<warning_status.size();count++)
    {
        warning_status[count]->setStyleSheet("\
        QCheckBox::indicator{ color: White; }\
        ");
    }
    std::bitset<HEX_BASE_VALUE> binary(fault_warning);
    std::string binaryString = binary.to_string();
    QString val = QString::fromStdString(binaryString);
    QString lsb = val.mid(0, 8);
    QString msb = val.mid(8, 8);
    lsb.remove(0,2);
    msb.remove(0,1);
    for(int count= 0;count<lsb.length();count++)
    {
        if(lsb[count] == "0")
        {
           qDebug()<<"NO WARNING";
        }
        else
        {
            warning_status[count]->setStyleSheet("\
                QCheckBox::indicator{ background-color: yellow; }\
                                                   ");
        }
    }
    for(int count= 0;count<msb.length();count++)
    {
        if(msb[count] == "0")
        {
           qDebug()<<"NO ERROR";
        }
        else
        {

              fault_status[count]->setStyleSheet("\
                 QCheckBox::indicator{ background-color: red; }\
             ");
        }
    }
}


/*******************************************************************************
 * Function Name: void on_Reset_timestamp_clicked( void )
 * Description  : This function is used to reset
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
void MainWindow::on_Reset_timestamp_clicked(void)
{
    uint16_t value_to_read;
    uint16_t reset_not_val;
    uint16_t rx_buff[TX_RX_BUF] = {0};
    int return_value = 0;
    if(isActiveCommunication())
    {
        return_value=WriteModbusData(MB_SoftResetReq,0xffff);
        if(return_value==ERROR_CODE)
        {
           checkException();
        }
    else
        {
          WriteModbusData(MB_SoftResetReq,0xffff);
          ReadModbusData(MB_SOFT_REQ,SINGLE_RW_LENGTH,rx_buff);
          value_to_read = *rx_buff;
          reset_not_val = ~value_to_read;
          WriteModbusData(MB_SoftResetKey,reset_not_val);
          clear_all_lineedit();
          delay(10);
          State_version();
          statusTabUpdate();
          ui->upgrade_progress->setValue(0);
          Fault_warning_clear();
        }

    }
}


/*******************************************************************************
 * Function Name: void MySlot( void )
 * Description  : This function is used to  read function after some fixed time
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
void MainWindow::MySlot(void)
{
    uint16_t rx_buff[TX_RX_BUF] = {0};
    int return_value = 0;
    return_value = ReadModbusData(MB_FanMode,SINGLE_RW_LENGTH,rx_buff);
    if(return_value == ERROR_CODE)
    {
        checkException();
        this->timer->stop();
        ui->update_read_faults->setText("Start");
    }
    else
    {
        on_pushButton_RamDiagnosis_clicked();
        on_pushButton_Read_RamFault_clicked();
        on_pushButton_FlashFault_clicked();
        on_Fault_warning_clicked();
    }
}


/*******************************************************************************
 * Function Name: void on_update_read_faults_clicked( void )
 * Description  : This function is used to update data
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
void MainWindow::on_update_read_faults_clicked(void)
{
    uint16_t rx_buff[TX_RX_BUF] = {0};
    int return_value = 0;
    if(ActiveSlaveId() == 0)
    {
       QMessageBox::warning(this, "Warning", "Modbus is in broadcast mode!");
    }
    else
    {
        return_value = ReadModbusData(MB_FanMode,SINGLE_RW_LENGTH,rx_buff);
        if( isActiveCommunication() )
        {
            if(return_value == ERROR_CODE)
            {
                checkException();
                if ( this->timer->isActive() == true )
                    {
                        this->timer->stop();
                    }
            }
            else
            {
                if ( this->timer->isActive() == true )
                {
                    this->timer->stop();
                    ui->update_read_faults->setText("Start");
                }
                else
                {
                        this->timer->start(1000);
                        ui->update_read_faults->setText("Stop");
                }
              }
        }
    }
}


/*******************************************************************************
 * Function Name: void on_RawDataCLear_clicked( void )
 * Description  : This function is used clear data
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
void MainWindow::on_RawDataCLear_clicked(void)
{
   ui->rawData->clear();
}


/*******************************************************************************
 * Function Name: void on_BrowseUpgrade_clicked( void )
 * Description  : This function is used browse the bin file
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
void MainWindow::on_BrowseUpgrade_clicked(void)
{
    filePath = QFileDialog::getOpenFileName(this, "Select a text file to search",QDir::currentPath(), "Bin files (*.bin)");
#ifdef QDEBUG
    qDebug() << "on_BrowseUpgrade_clicked - File_path "<<filePath;
#endif
    ui->browseLineEdit->setText(filePath);

}


/***************************function to start the flashing after browsing file**********************/
/*******************************************************************************
 * Function Name: void on_startBrowse_clicked( void )
 * Description  : This function is used for upgradea bin file to flash
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
void MainWindow::on_startBrowse_clicked(void)
{
    uint16_t readData[2] = {0};
    uint8_t progress_flag = 0;
    uint32_t data = 0;
    uint32_t addressToWrite = 0;
    uint8_t num_count = HEX_BASE_VALUE;
    uint8_t sum =0;
    uint8_t delay_Value = 10;
    int (*pWriteMultiple)( int addr, int nb, const uint16_t *src );
    int (*pWriteSingle)( int addr, int value );


    if ( isActiveCommunication() )
    {

        if ( ActiveSlaveId() == 0)
        {
            pWriteMultiple = Brcst_WriteMultipleModbusData;
            pWriteSingle = Brcst_WriteModbusData;
        }
        else
        {
            pWriteMultiple = WriteMultipleModbusData;
            pWriteSingle = WriteModbusData;
            ReadModbusData(MB_STATE, SINGLE_RW_LENGTH, (&readData[0]));
            if ( !(readData[0] >= 5 && readData[0] <= 9) )
            {
                QMessageBox::warning(this, "Warning", "State Should be in Bootloader Mode");
                return ;
            }

        }
        if ( ui->browseLineEdit->text().isEmpty() )
        {
            QMessageBox::warning(this, "Warning", "Select a Bin file first");
        }
        else
        {
            QFile file(filePath);
            if ( !file.open(QIODevice::ReadOnly ))
            {
                QMessageBox::warning(this, "Warning", "File is not having permission to open ");
            }
            else
            {
                QByteArray FileData = file.readAll();
                data = UPGRADE_PAGE_SIZE;
                uint16_t add_lsw = 0;
                uint16_t add_msw = 0;
                addressToWrite = APP_FLASH_START_RANGE_2;
                uint16_t addressToFill = data - FileData.size();
                for (int fill = 0;fill <addressToFill  ;fill ++ )
                {
                     FileData.append(static_cast<char>(0xff));
                }

                uint16_t* uintPtr = reinterpret_cast<uint16_t*>(FileData.data());
                quint32 crc_data = MPEG2_crc32 (FileData);
                quint16 crc_lsw = crc_data & 0xFFFF;
                quint16 crc_msw = (crc_data & 0xFFFF0000) >> 16;

                pWriteSingle(FLASH_ERASE_CMD,0);
                delay(2000);

                pWriteSingle( APP_EXPECTED_CRC_MSB, crc_msw );
                delay(delay_Value);
                pWriteSingle( APP_EXPECTED_CRC_LSB, crc_lsw );
                delay(delay_Value);
                pWriteSingle( WRITE_LENGTH_ADDRESS_MSB, 0);
                delay(delay_Value);
                pWriteSingle( WRITE_LENGTH_ADDRESS_LSB, 64);
                delay(delay_Value);


                uint32_t m_count = 0;

                for (uint32_t count = 0; count < 1535 ;count+= 1 )
                {

                    add_lsw = addressToWrite & 0xFFFF;
                    add_msw = (addressToWrite & 0xFFFF0000) >> 16;
                    pWriteSingle( WRITE_DATA_ADDRESS_MSB, add_msw);  // write add
                    delay(delay_Value);
                    pWriteSingle( WRITE_DATA_ADDRESS_LSB, add_lsw);  // write add
                    delay(delay_Value);
                    pWriteMultiple(WRITE_DATA_ADDRESS,MULTI_WR_LENGTH,(uintPtr + m_count));
                    delay(delay_Value);
                    pWriteSingle( FLASH_WRITE_CMD,SINGLE_RW_LENGTH);
                    delay(delay_Value);
                    addressToWrite += 64;
                    m_count = m_count+MULTI_WR_LENGTH;
                    sum=count % num_count;
                    if(sum == 0 && progress_flag<100 )
                    {
                        start_updating_progress(++progress_flag);
                    }

               }
               start_updating_progress(100);
              add_lsw = addressToWrite & 0xFFFF;
              add_msw = (addressToWrite & 0xFFFF0000) >> 16;
              delay(delay_Value);
              pWriteSingle( WRITE_DATA_ADDRESS_MSB, add_msw);
              delay(delay_Value);
              pWriteSingle( WRITE_DATA_ADDRESS_LSB, add_lsw);
              delay(delay_Value);

              pWriteSingle( WRITE_LENGTH_ADDRESS_MSB, 0);
              delay(delay_Value);
              pWriteSingle( WRITE_LENGTH_ADDRESS_LSB, 60);
              delay(delay_Value);
              pWriteMultiple(WRITE_DATA_ADDRESS,30,(uintPtr + m_count));
              delay(delay_Value);
              pWriteSingle( FLASH_WRITE_CMD,SINGLE_RW_LENGTH);
              delay(delay_Value);

              pWriteSingle = NULL;
              pWriteMultiple = NULL;

            }

        }

    }

}


/*******************************************************************************
 * Function Name: void on_jump_to_app_btn_clicked( void )
 * Description  : This function is used to write data to address 1004
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
void MainWindow::on_jump_to_app_btn_clicked(void)
{
    uint16_t data[]={0};
    int return_value = 0;

    if( isActiveCommunication() )
    {
        ReadModbusData(MB_STATE,SINGLE_RW_LENGTH,data);
        if ( ( data[0] ) && ( data[0] < 5 ) )
        {
            QMessageBox::warning(this, "Warning", "Initially in Application Mode");
        }
        else
        {
            return_value = WriteModbusData( MB_MicroCycleLedConfig, SINGLE_RW_LENGTH);
            if(return_value == ERROR_CODE)
            {
                checkException();
            }
        }
        delay(50);
        State_version();
        updateDateTime();
        ui->upgrade_progress->setValue(0);
    }
}


/*******************************************************************************
 * Function Name: void statusTabUpdate( void )
 * Description  : This function is used to read data to addresses of MB_state,MB_Version,MB_Device_ID,MB_Preset_Valid
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
void MainWindow::statusTabUpdate(void)
{
   const uint8_t uLen = 4;
   uint8_t Hw_ver = 0;
   uint8_t Fw_ver = 0;
   uint32_t deviceId = 0;
   uint16_t readData[5];
   int return_value = 0;


        return_value = ReadModbusData(MB_STATE, uLen, readData);
         if ( return_value ==  ERROR_CODE )
         {
             checkException();
         }
         else
         {
             Hw_ver = ((readData[1])&(0xF000)) >> 12U;
             ui->Hw_Version_Read->setText(QString::number(Hw_ver));
             Fw_ver = static_cast<uint8_t>((readData[1])&(0x0FFF));
             ui->sw_Version_Read->setText(QString::number(Fw_ver));
             deviceId =  addUInt16(readData[2], readData[3]);
             ui->Device_Id_Read->setText(QString::number(deviceId));

             if((readData[0] >=0) && (readData[0] <=3))
             {
                 Preset_valid();
             }
             else
             {
                 ui->preset_Read->clear();
             }
             State_version();
             statusFlag = true;
         }
         if ( !statusFlag )
         {
             checkException();
         }
}

/*******************************************************************************
 * Function Name: void addUInt16( void )
 * Description  : This function is used to read 2 16bit data and add to have one 32bit data
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
uint32_t MainWindow::addUInt16(uint16_t a, uint16_t b)
{
    uint32_t var_result = static_cast<uint32_t>((a<<16) | b) ;

    return var_result;
}


/*******************************************************************************
 * Function Name: void RawDataPrint( QString data )
 * Description  : This function is used to show log of read and write data
 * Parameter    : data - data of read/write
 * Return       : None
 ******************************************************************************/
void MainWindow::RawDataPrint(QString data)
{
    ui->rawData->appendPlainText(data);
    if (data.size() == 25)
    {
        rawException = data;
    }
    data.clear();
#ifdef QDEBUG
    qDebug()<<"rawdata"<<data;
#endif
}


/*******************************************************************************
 * Function Name: void on_Fault_warning_clicked( void )
 * Description  : This function is used to show status of faults
 * Parameter    : None
 * Return       : None
 ******************************************************************************/
void MainWindow::on_Fault_warning_clicked(void)
{
    uint16_t rx_buff[TX_RX_BUF] = {0};
    int return_value = 0;
    for(int count=0;count<fault_status.size();count++)
    {
        fault_status[count]->setStyleSheet("\
           QCheckBox::indicator{ color: White; }\
       ");
    }
    for(int count=0;count<warning_status.size();count++)
    {
        warning_status[count]->setStyleSheet("\
                            QCheckBox::indicator{ color: White; }\
                                                               ");
    }
    if( isActiveCommunication() )
    {
        if(ActiveSlaveId() == 0)
        {
            QMessageBox::warning(this, "Warning", "Modbus is in broadcast mode!");
        }
        else
        {
            return_value=ReadModbusData(MB_Faults,SINGLE_RW_LENGTH,rx_buff);
            if(return_value == ERROR_CODE)
            {
               checkException();
            }

            else
            {
                  ReadModbusData(MB_Faults,SINGLE_RW_LENGTH,rx_buff);
                  uint16_t decimal = *rx_buff;
                  std::bitset<16> binary(decimal);
                  std::string binaryString = binary.to_string();
                  QString val = QString::fromStdString(binaryString);
                  QString lsb = val.mid(0, 8);
                  QString msb = val.mid(8, 8);
                  lsb.remove(0,2);
                  msb.remove(0,1);
                  for(int count=0;count<lsb.length();count++)
                  {
                      if(lsb[count] == "0")
                      {
                         qDebug()<<"NO WARNING";
                      }
                      else {
                          warning_status[count]->setStyleSheet("\
                              QCheckBox::indicator{ background-color: yellow; }\
                                                                 ");
                      }
                  }
                  for(int count=0;count<msb.length();count++)
                  {
                      if(msb[count] == "0")
                      {
                         qDebug()<<"NO ERROR";
                      }
                      else
                      {
                            fault_status[count]->setStyleSheet("\
                               QCheckBox::indicator{ background-color: red; }\
                           ");
                      }
                  }
            }
        }

    }
}


/*******************************************************************************
* Function Name: void Preset_valid( void )
* Description  : This function is used to read data of adress 2000
* Parameter    : None
* Return       : None
******************************************************************************/
void MainWindow::Preset_valid(void)
{
    uint16_t readData = 0;
    int return_value = 0;
    return_value = ReadModbusData(MB_Preset_Valid, SINGLE_RW_LENGTH,(&readData) );
    if ( return_value == 1 )
    {
        ui->preset_Read->setText(QString::number(readData, HEX_BASE_VALUE).toUpper());
        statusFlag = true;
    }
    else
    {
          statusFlag = false;
    }
}


/*******************************************************************************
* Function Name: void State_version( void )
* Description  : This function is used to read data of adress 0
* Parameter    : None
* Return       : None
******************************************************************************/
void MainWindow::State_version(void)
{
    uint16_t readData = 0;
    int return_value = 0;
    if ( m_serialModbus_value )
    {
        return_value = ReadModbusData(MB_STATE, SINGLE_RW_LENGTH, (&readData));
        if ( return_value == 1 )
        {
            if (readData == 0 )
            {
                ui->State_Version_Read->setText("Configuration");
            }
            else if (readData == 1 )
            {
                ui->State_Version_Read->setText("Light off");
            }
            else if (readData == 2 )
            {
                ui->State_Version_Read->setText("Light on");
            }
            else if (readData == 3 )
            {
                ui->State_Version_Read->setText("Failure");
            }
            else if( (readData >= 5) && (readData <= 9) )
            {
                ui->State_Version_Read->setText("Bootloader");
            }
            statusFlag = true;
        }
        else
        {
              statusFlag = false;
        }
    }
}


/*******************************************************************************
* Function Name: void on_customer_data_clear_clicked( void )
* Description  : This function is used to clear data of lineEdit
* Parameter    : None
* Return       : None
******************************************************************************/
void MainWindow::on_custom_data_clear_clicked(void)
{
    for(int i=0;i<custom_lineEdit.size();i++)
    {
        this->custom_lineEdit[i]->clear();
    }
}


/*******************************************************************************
* Function Name: uint16_t MainWindow::ActiveSlaveId()
* Description  : This function is used to set the slave ID before communication
* Parameter    : None
* Return       : value
******************************************************************************/
int MainWindow::ActiveSlaveId()
{
     int active_slaveId = on_SlaveAddress_editingFinished();
     return active_slaveId;
}


/*******************************************************************************
* Function Name: void on_state_version_2_clicked(void)
* Description  : This function is used to update the versions
* Parameter    : None
* Return       : None
******************************************************************************/
void MainWindow::on_state_version_2_clicked(void)
{
    if ( isActiveCommunication() )
    {
        if(ActiveSlaveId() == 0)
        {
            QMessageBox::warning(this, "Warning", "Modbus is in broadcast mode!");
        }
        else
        {
             statusTabUpdate();
        }
    }

}


/*******************************************************************************
* Function Name: void Fault_warning_clear(void)
* Description  : This function is used to clear checkboxes of fault and warning
* Parameter    : None
* Return       : value
******************************************************************************/
void MainWindow::Fault_warning_clear(void)
{
    for(int count=0;count<fault_status.size();count++)
    {
        fault_status[count]->setStyleSheet("\
           QCheckBox::indicator{ color: White; }\
       ");
    }
    for(int count=0;count<warning_status.size();count++)
    {
        warning_status[count]->setStyleSheet("\
            QCheckBox::indicator{ color: White; }\
            ");
    }
}


/*******************************************************************************
* Function Name: void clear_all_lineedit(void)
* Description  : This function is used to clear checkboxes of fault and warning
* Parameter    : None
* Return       : value
******************************************************************************/
void MainWindow::clear_all_lineedit(void)
{
    for(int count=0;count<custom_lineEdit.size();count++)
    {
        custom_lineEdit[count]->clear();
    }
    for(int count=0;count<write_lineEdit_of_mainwindow_upper.size();count++)
    {
        write_lineEdit_of_mainwindow_upper[count]->clear();
    }
    for(int count=0;count<write_lineEdit_of_mainwindow_lower.size();count++)
    {
        write_lineEdit_of_mainwindow_lower[count]->clear();
    }
    for(int count=0;count<write_lineEdit_of_mainwindow_lower.size();count++)
    {
        write_lineEdit_of_mainwindow_lower[count]->clear();
    }
    for(int count=0;count<lineEdit_of_mainwindow_upper.size();count++)
    {
        lineEdit_of_mainwindow_upper[count]->clear();
    }
    for(int count=0;count<lineEdit_of_mainwindow_lower.size();count++)
    {
        lineEdit_of_mainwindow_lower[count]->clear();
    }
    for(int count=0;count<value_of_config_checkbox.size();count++)
    {
        value_of_config_checkbox[count]->setChecked(false);
    }
    for(int count=0;count<lineeditCommandRead.size();count++)
    {
        lineeditCommandRead[count]->clear();
    }

    ui->StartAddress->clear();

    ui->fifo_numevent_Enter->clear();
    for(int count=0;count<Lineedit_RamDiagnosis.size();count++)
    {
        Lineedit_RamDiagnosis[count]->clear();
    }
    for(int count=0;count<LineEditRamFault.size();count++)
    {
        LineEditRamFault[count]->clear();
    }
    for(int count=0;count<LineditFlashFault.size();count++)
    {
        LineditFlashFault[count]->clear();
    }
    for(int count=0;count<Lineditfaulfifo.size();count++)
    {
        Lineditfaulfifo[count]->clear();
    }
    for(int count=0;count<Lineditfaulfifo_time.size();count++)
    {
        Lineditfaulfifo_time[count]->clear();
    }
    for(int count=0;count<statusValues.size();count++)
    {
        statusValues[count]->clear();
    }

    for (int count = 0;count < checkboxCommandRead.size(); count++ ) {
         checkboxCommandRead[count]->setChecked(false);
    }
}


/*******************************************************************************
* Function Name: void disable_read_lineedits(void)
* Description  : This function is used to set lineedit as readonly mode
* Parameter    : None
* Return       : value
******************************************************************************/
void MainWindow::disable_read_lineedits(void)
{
    for(uint8_t count=0;count < lineeditCommandRead.size(); count++)
    {
     lineeditCommandRead[count]->setReadOnly(true);
    }
    for(uint8_t count=0;count < Lineedit_RamDiagnosis.size(); count++)
    {
     Lineedit_RamDiagnosis[count]->setReadOnly(true);
    }
    for(uint8_t count=0;count < LineditFlashFault.size(); count++)
    {
     LineditFlashFault[count]->setReadOnly(true);
    }
    for(uint8_t count=0;count < LineEditRamFault.size(); count++)
    {
     LineEditRamFault[count]->setReadOnly(true);
    }
    for(uint8_t count=0;count < Lineditfaulfifo.size(); count++)
    {
     Lineditfaulfifo[count]->setReadOnly(true);
    }
    for(uint8_t count=0;count < lineEdit_of_mainwindow_lower.size(); count++)
    {
     lineEdit_of_mainwindow_lower[count]->setReadOnly(true);
    }
    for(uint8_t count=0;count < lineEdit_of_mainwindow_upper.size(); count++)
    {
     lineEdit_of_mainwindow_upper[count]->setReadOnly(true);
    }
    ui->Hw_Version_Read->setReadOnly(true);

    ui->sw_Version_Read->setReadOnly(true);

    ui->preset_Read->setReadOnly(true);

    ui->Device_Id_Read->setReadOnly(true);

    ui->State_Version_Read->setReadOnly(true);

}



/*******************************************************************************
* Function Name: void on_single_multi_write_currentIndexChanged(int index)
* Description  : This function is used to show error of bootloader when its in application mode
* Parameter    : None
* Return       : value
******************************************************************************/
void MainWindow::on_single_multi_write_currentIndexChanged(int index)
{
    if(index == 0)
    {
        ui->nSize->setEnabled(true);
    }

    else if(index == 1)
    {
        ui->nSize->setEnabled(false);
        customlineedit_enable(1);
    }
    else
    {
        ui->nSize->setEnabled(true);
    }
}


/*******************************************************************************
* Function Name: void errorMessage(uint8_t warningType)
* Description  : This function is used to show error messages
* Parameter    : warningType
* Return       : None
******************************************************************************/
void MainWindow::errorMessage(uint8_t warningType)
{
    switch (warningType)
    {
        case SERIALERROR:
            QMessageBox::critical(this, "No serial port is found", "Could not found any serial port!");
            break;
        case MODBUSERROR:
            QMessageBox::critical(this, "No Modbus communication found", "Did not receive data from slave.");
            break;
        case BOOTLOADERERROR:
            QMessageBox::warning(this, "In Bootloader Mode", "Illegal data address or function not implemented.");
            break;
        case APPLICATIONERROR:
            QMessageBox::warning(this, "In Application Mode", "Illegal data address or function not implemented.");
            break;
        case CHECKBOXERROR:
            QMessageBox::warning(this, "warning", "Select the checkbox to read/write.");
            break;
        case LINEEDITERROR:
            QMessageBox::warning(this, "warning", "Provide data to write.");
            break;
        case INVALID_S_ID_ERROR:
            QMessageBox::critical(this, "I/O error", "Possible reason:\n -Invalid slaveID\n -Invalid serial parameter\n -Did not receive data from slave");
            break;
        case ILLEGAL_ADDR_ERROR:
            QMessageBox::critical(this, "Protocol error", "Illegal data address.");
            break;
        case MODBUS_BUSY_ERROR:
            QMessageBox::critical(this, "Modbus busy", "Modbus is busy with another Application.");
            break;
        case STARTADDRERROR:
            QMessageBox::warning(this, "Address not found", "Insert address to write/read.");
            break;
        case TOOMANYDATAERROR:
            QMessageBox::critical(this, "Protocol error", "Too many data!");
            break;
        case MB_ADDRESS_EXCEPTION:
            QMessageBox::critical(this, "Protocol error", "Slave threw exception \"Illegal data  address\"");
            break;
        case MB_QTY_REGS_EXCEPTION:
            QMessageBox::critical(this, "Protocol error", "Slave thew exception \"Too many data\"");
            break;
        case MB_DATA_OUT_OF_RANGE_EXCEPTION:
            QMessageBox::critical(this, "Protocol error", "Slave thew exception \"Data out of range\"");
            break;
        case BL_WRITE_ERROR:
            QMessageBox::critical(this, "Protocol error", "Slave threw exception \"BL write error\"");
            break;
        case BL_READ_ERROR:
            QMessageBox::critical(this, "Protocol error", "Slave threw exception \"BL read error\"");
            break;
        case BL_ADDR_ERROR:
            QMessageBox::critical(this, "Protocol error", "Slave threw exception \"BL address error\"");
            break;
        case BL_LEN_ERROR:
            QMessageBox::critical(this, "Protocol error", "Slave threw exception \"BL length error\"");
            break;
        case BL_WRITE_LEN_ADDR_ERROR:
            QMessageBox::critical(this, "Protocol error", "Slave threw exception \"BL write length error\"");
            break;
        case BL_READ_LEN_ADDR_ERROR:
            QMessageBox::critical(this, "Protocol error", "Slave threw exception \"BL read length error\"");
            break;


    }

}


/*******************************************************************************
* Function Name: bool activeCommunication(void)
* Description  : This function is used to check the serial port and modbus communication
* Parameter    : None
* Return       : None
******************************************************************************/
bool MainWindow::isActiveCommunication(void)
{
    bool checkState = false;
    bool isPortNull = false;
    QList<QSerialPortInfo> portList = QSerialPortInfo::availablePorts();
    QString portName;

    m_serialModbus_value = ModbusValue();
    foreach (const QSerialPortInfo &ThisPort, portList)
    {
#ifdef QDEBUUG
            qDebug() << "Port Name: " << ThisPort.portName();
#else
            if ( !( ThisPort.isValid() ))
            {
                isPortNull = true;
                break;
            }
            portName = ThisPort.portName();

        }
        if( portName.isEmpty() || (isPortNull) )
        {
            errorMessage(SERIALERROR);
            return checkState;
        }
        else if ( !m_serialModbus_value )
        {
            errorMessage(MODBUSERROR);
            return checkState;
        }
        else
        {
            checkState = true;
            return checkState;
        }
#endif
}

/*******************************************************************************
* Function Name: void checkException(void)
* Description  : This function is used to check check communicaton exception
* Parameter    : None
* Return       : None
******************************************************************************/
void MainWindow::checkException(void)
{
    QStringList strList = rawException.split(" ");
    int hexValue1 = 0, hexvalue2 = 0;
    if (!rawException.isEmpty())
    {
        hexValue1 = strList[3].toInt(nullptr, HEX_BASE_VALUE);
        hexvalue2 = strList[4].toInt(nullptr, HEX_BASE_VALUE);
    }

    if (hexValue1 == MB_READ_HR_ERROR_CODE || hexValue1 == MB_WRITE_HR_ERROR_CODE || hexValue1 == MB_WRITE_MULTIPLE_HR_ERROR_CODE)
    {
        isResponseError(hexValue1, hexvalue2);
    }
    else
    {
        isResponseError(NULL, NULL);
    }
    rawException.clear();
}

/*******************************************************************************
* Function Name: void isResponseError(int responseError, int exceptionError)
* Description  : This function is used to check and give pop up for exception
* Parameter    : responseError,exceptionError
* Return       : None
******************************************************************************/
void MainWindow::isResponseError(int responseError, int exceptionError)
{
    switch(responseError)
    {
        case MB_READ_HR_ERROR_CODE:
            isExceptionError(exceptionError);
            break;
        case MB_WRITE_HR_ERROR_CODE:
            isExceptionError(exceptionError);
            break;
        case MB_WRITE_MULTIPLE_HR_ERROR_CODE:
            isExceptionError(exceptionError);
            break;
        default:
            errorMessage(INVALID_S_ID_ERROR);
            break;

    }
}


/*******************************************************************************
* Function Name: void isExceptionError(int exceptionErrorNum)
* Description  : This function is used to check is exception of address,data and length
* Parameter    : exceptionErrorNum
* Return       : None
******************************************************************************/
void MainWindow::isExceptionError(int exceptionErrorNum)
{

    switch (exceptionErrorNum)
    {
    case MB_HR_ADDRESS_EXCEPTION_CODE:
        errorMessage(MB_ADDRESS_EXCEPTION);
        break;
    case MB_HR_QTY_REGS_EXCEPTION_CODE:
        errorMessage(MB_QTY_REGS_EXCEPTION);
        break;
    case MB_HR_DATA_OUT_OF_RANGE_EXCEPTION_CODE:
        errorMessage(MB_DATA_OUT_OF_RANGE_EXCEPTION);
        break;
    case BL_WRITE_ERROR_CODE:
        errorMessage(BL_WRITE_ERROR);
        break;
    case BL_READ_ERROR_CODE:
        errorMessage(BL_READ_ERROR);
        break;
    case BL_ADDR_ERROR_CODE :
        errorMessage(BL_ADDR_ERROR);
        break;
    case BL_LEN_ERROR_CODE :
        errorMessage(BL_LEN_ERROR);
        break;
    case BL_WRITE_LEN_ADDR_ERROR_CODE:
        errorMessage(BL_WRITE_LEN_ADDR_ERROR);
        break;
    case BL_READ_LEN_ADDR_ERROR_CODE:
        errorMessage(BL_READ_LEN_ADDR_ERROR);
        break;

    }
}

/*******************************************************************************
* Function Name: void on_baud_currentIndexChanged(int data)
* Description  : This function is used to current index changed of baud rate
* Parameter    : data
* Return       : value
******************************************************************************/
int MainWindow::on_baud_currentIndexChanged(int data)
{
#ifdef QDEBUG
    qDebug()<<"baudrate"<<data;
#endif
    return data;

}


/*******************************************************************************
* Function Name: void on_databits_currentIndexChanged(int data)
* Description  : This function is used to current index changed of databits rate
* Parameter    : data
* Return       : value
******************************************************************************/
int MainWindow::on_databits_currentIndexChanged(int data)
{
#ifdef QDEBUG
    qDebug()<<"databits"<<data;
#endif
    return data;

}


/*******************************************************************************
* Function Name: void on_stopbits_currentIndexChanged(int data)
* Description  : This function is used to current index changed of databits rate
* Parameter    : data
* Return       : value
******************************************************************************/
int MainWindow::on_stopbits_currentIndexChanged(int data)
{
#ifdef QDEBUG
    qDebug()<<"stopbits"<<data;
#endif
    return data;
}


/*******************************************************************************
* Function Name: void on_parity_currentTextChanged(int data)
* Description  : This function is used to current index changed of databits rate
* Parameter    : data
* Return       : value
******************************************************************************/
QString MainWindow::on_parity_currentTextChanged(const QString &data)
{
#ifdef QDEBUG
    qDebug()<<"parityadta"<<data;
#endif
    return data;

}


/*******************************************************************************
* Function Name: void connect_disconnect_status_check(void)
* Description  : This function is used to show the status of connection and disconnection
* Parameter    : None
* Return       : None
******************************************************************************/
void MainWindow::start_updating_progress(uint8_t count)
{
        ui->upgrade_progress->setValue(count);
}


/*******************************************************************************
* Function Name: void on_single_multi_write_activated(int index)
* Description  : This function is used to switch single write of multiple write using combo box
* Parameter    : index
* Return       : None
******************************************************************************/

void MainWindow::on_single_multi_write_activated(int index)
{
    if(index == 0)
    {
        ui->hex_check->setEnabled(true);
    }
    else if(index == 1)
    {
        ui->hex_check->setEnabled(false);
    }
    else
    {
        ui->hex_check->setEnabled(false);
    }
}


/*******************************************************************************
 * Function Name: void on_nSize_currentIndexChanged(int index )
 * Description  : This function is used for set number of bytes using Combo indexchange
 * Parameter    : index
 * Return       : None
 ******************************************************************************/
void MainWindow::on_nSize_currentIndexChanged(int index)
{
    customlineedit_enable((ui->nSize->currentText().toInt()));

}

/*******************************************************************************
* Function Name: void on_stop_progressbar_clicked(void)
* Description  : This function is used to stop the upgrade
* Parameter    : None
* Return       : None
******************************************************************************/
void MainWindow::on_stop_progressbar_clicked()
{
    ui->upgrade_progress->setValue(0);
}


/*******************************************************************************
* Function Name: void on_lineEdit_SyncMode_write_textEdited(const QString &sync_data)
* Description  : This function is used to update the text edited from lineedit
* Parameter    : sync_data
* Return       : None
******************************************************************************/
void MainWindow::on_lineEdit_SyncMode_write_textEdited(const QString &sync_data)
{
    if (sync_data != "0" && sync_data != "1" && sync_data != "2")
    {
        QMessageBox::warning(this, "Invalid Input", "Please enter only '0', '1', or '2'.");
        ui->lineEdit_SyncMode_write->clear();
        ui->lineEdit_SyncMode_write->setFocus();
    }
}


/*******************************************************************************
* Function Name: void  on_lineEdit_DeglitchingEnable_write_textEdited(const QString &deglitch_data)
* Description  : This function is used to update the text edited from lineedit
* Parameter    : deglitch_data
* Return       : None
******************************************************************************/
void MainWindow::on_lineEdit_DeglitchingEnable_write_textEdited(const QString &deglitch_data)
{
    if (deglitch_data != "0" && deglitch_data != "1")
    {
        QMessageBox::warning(this, "Invalid Input", "Please enter only '0' or '1'.");
        ui->lineEdit_DeglitchingEnable_write->clear();
        ui->lineEdit_DeglitchingEnable_write->setFocus();
    }
}


/*******************************************************************************
* Function Name: void  updateDateTime(void)
* Description  : This function is used to update data from RTC
* Parameter    : None
* Return       : None
******************************************************************************/
void MainWindow::updateDateTime(void)
{
    uint16_t dateTimeArray[6];
    QDateTime currentDateTime = QDateTime::currentDateTime();
    int year = currentDateTime.date().year();
    int month = currentDateTime.date().month();
    int day = currentDateTime.date().day();
    int hour = currentDateTime.time().hour();
    int minute = currentDateTime.time().minute();
    int second = currentDateTime.time().second();
    dateTimeArray[0] = static_cast<uint16_t>(second);
    dateTimeArray[1] = static_cast<uint16_t>(minute);
    dateTimeArray[2] = static_cast<uint16_t>(hour);
    dateTimeArray[3] = static_cast<uint16_t>(day);
    dateTimeArray[4] = static_cast<uint16_t>(month);
    dateTimeArray[5] = static_cast<uint16_t>(year);
    Brcst_WriteMultipleModbusData( RTC_TIMESTAMP, 6, dateTimeArray);
}

/*******************************************************************************
* Function Name: int  on_SlaveAddress_editingFinished(void)
* Description  : This function is used to get the current value of slaveId
* Parameter    : None
* Return       : int
******************************************************************************/
int MainWindow::on_SlaveAddress_editingFinished(void)
{
    int current_slavId = ui->SlaveAddress->value();
    return  current_slavId;

}


/*******************************************************************************
* Function Name: int  on_Fault_fifo_reset_btn_clicked(void)
* Description  : This function is used to get the current value of slaveId
* Parameter    : None
* Return       : int
******************************************************************************/
void MainWindow::on_Fault_fifo_reset_btn_clicked(void)
{
    int return_value = 0;
    if( isActiveCommunication() )
    {
        return_value = WriteModbusData(MB_FaultFIFO_Erase,SET);
        if(return_value == ERROR_CODE)
        {
            checkException();
        }
        else
        {
            for(int count=0; count<LineditFlashFault.size(); count++)
            {
                LineditFlashFault[count]->clear();
            }
            ui->fifo_numevent_Enter->clear();
            Fault_warning_clear();
            for(int count=0; count<Lineditfaulfifo.size(); count++)
            {
                Lineditfaulfifo[count]->clear();
            }
            ui->TimeStamp_2->clear();

        }

    }
}


/*******************************************************************************
* Function Name: void  on_Light_on_cmd_button_clicked(void)
* Description  : This function is used to show state in light on
* Parameter    : None
* Return       : None
******************************************************************************/
void MainWindow::on_Light_on_cmd_button_clicked(void)
{
    int return_value = 0;
    if( isActiveCommunication() )
    {
        return_value = WriteModbusData(MB_LightAsked,SET);
        if(return_value == ERROR_CODE)
        {
            checkException();
        }
        else
        {
            WriteModbusData(MB_Configuration,SET);
        }
    }
    delay(10);
    State_version();
}


/*******************************************************************************
* Function Name: void  on_Light_off_cmd_button_clicked(void)
* Description  : This function is used to show state in light on
* Parameter    : None
* Return       : None
******************************************************************************/
void MainWindow::on_Light_off_cmd_button_clicked(void)
{
    int return_value = 0;
    if( isActiveCommunication() )
    {
        return_value = WriteModbusData(MB_LightAsked,CLEAR);
        if(return_value == ERROR_CODE)
        {
            checkException();
        }

    }
    delay(10);
    State_version();
}


/*******************************************************************************
* Function Name: void  on_config_cmd_button_clicked(void)
* Description  : This function is used to show state in configuration
* Parameter    : None
* Return       : int
******************************************************************************/
void MainWindow::on_config_cmd_button_clicked(void)
{
    int return_value = 0;
    if( isActiveCommunication() )
    {
        return_value = WriteModbusData(MB_Configuration,SET);
        if(return_value == ERROR_CODE)
        {
            checkException();
        }
    }
    delay(10);
    State_version();
}


/*******************************************************************************
* Function Name: void  delay(int milliseconds)
* Description  : This function is used for delay
* Parameter    : int
* Return       : None
******************************************************************************/
void MainWindow::delay(int milliseconds)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}


/*******************************************************************************
* Function Name: QString Conversion_UInt_ASCII( uint16_t value)
* Description  : This function is used to convert uint16 value to ascii string
* Parameter    : uint16_t
* Return       : QString
******************************************************************************/
QString MainWindow::Conversion_UInt_ASCII( uint16_t value)
{
       uint16_t rec_val = value;
       QString in_Hex_Str = QString::number(rec_val, HEX_BASE_VALUE);
       QByteArray in_Byte_Array = QByteArray::fromHex(in_Hex_Str.toLatin1());
       QString in_ASCII_String = QString::fromLatin1(in_Byte_Array);
       return in_ASCII_String;
}


