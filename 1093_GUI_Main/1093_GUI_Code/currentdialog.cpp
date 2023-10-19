/*******************************************************************************
LED current data

  Company:
    Onward Technologies.

  File Name:
    currentdialog.c

  Summary:
    Data to be read and write LED current,maximum current,maximum current pulse

  Description:
    The file provides a simple modbus communication to manage read and write
    operation.

 * Date of creation:
 * version:0.1
*******************************************************************************/

#include "currentdialog.h"
#include "ui_currentdialog.h"
#include "mainwindow.h"


class MainWindow;

currentDialog::currentDialog(QWidget *parent, MainWindow* currentptr, uint8_t currentdifferentiator) :
    QDialog(parent),
    ui(new Ui::currentDialog)
  ,currentdataMain(currentptr)
  ,newDifferentiator(currentdifferentiator)
{
    ui->setupUi(this);
    this->setWindowTitle("Current Config");
    Onchecked_currentdata.resize(32);

    lineedits_data_currentdata.resize(32);

    Onchecked_currentdata = {ui->checkBox_write1,ui->checkBox_write2,ui->checkBox_write3,ui->checkBox_write4,ui->checkBox_write5,ui->checkBox_write6,ui->checkBox_write7,ui->checkBox_write8,ui->checkBox_write9,
                                        ui->checkBox_write10,ui->checkBox_write11,ui->checkBox_write12,ui->checkBox_write13,ui->checkBox_write14,ui->checkBox_write15,ui->checkBox_write16,ui->checkBox_write17,ui->checkBox_write18,ui->checkBox_write19
                                          ,ui->checkBox_write20,ui->checkBox_write21,ui->checkBox_write22,ui->checkBox_write23,ui->checkBox_write24,ui->checkBox_write25,ui->checkBox_write26,ui->checkBox_write27,ui->checkBox_write28,ui->checkBox_write29
                                          ,ui->checkBox_write30,ui->checkBox_write31,ui->checkBox_write32};

    lineedits_data_currentdata= {ui->lineEdit_write1,ui->lineEdit_write2,ui->lineEdit_write3,ui->lineEdit_write4,ui->lineEdit_write5,
                                      ui->lineEdit_write6,ui->lineEdit_write7,ui->lineEdit_write8,ui->lineEdit_write9,ui->lineEdit_write10,
                                      ui->lineEdit_write11,ui->lineEdit_write12,ui->lineEdit_write13,ui->lineEdit_write14,ui->lineEdit_write15,
                                      ui->lineEdit_write16,ui->lineEdit_write17,ui->lineEdit_write18,ui->lineEdit_write19,ui->lineEdit_write20,
                                      ui->lineEdit_write21,ui->lineEdit_write22,ui->lineEdit_write23,ui->lineEdit_write24,ui->lineEdit_write25,
                                      ui->lineEdit_write26,ui->lineEdit_write27,ui->lineEdit_write28,ui->lineEdit_write29,ui->lineEdit_write30,
                                      ui->lineEdit_write31,ui->lineEdit_write32};
    for(int count=0;count<lineedits_data_currentdata.size();count++)
    {
        QRegularExpressionValidator* validator = new QRegularExpressionValidator(QRegularExpression("[0-9]*"), lineedits_data_currentdata[count]);
        lineedits_data_currentdata[count]->setValidator(validator);
    }

    for (uint8_t count=0; count<96 ;count++ )
        {
            adresses_config_currentdialog[count]= MB_LedCurrentSetpoint + count;
            adresses_preset_config_currentdialog[count] = MB_LedCurrentSetpoint_Preset + count;
        }
}


currentDialog::~currentDialog()
{
    delete ui;
}


/*******************************************************************************
* Function Name: void on_SelectAll_clicked( void )
* Description  : This function is used to select checkbox
* Parameter    : None
* Return       : None
******************************************************************************/
void currentDialog::on_SelectAll_clicked(void)
{
    if( ui->SelectAll->text()=="Diselect All" )
        {
            for( int count=0;count<32;count++ )
                {
                    Onchecked_currentdata[count]->setChecked(false);
                    ui->SelectAll->setText("select All");
                }
        }
    else
        {
            for( int count=0;count<32;count++ )
                {
                    Onchecked_currentdata[count]->setChecked(true);
                    ui->SelectAll->setText("Diselect All");
                }
        }
}


/*******************************************************************************
* Function Name: void on_readConfigBtn_clicked( void )
* Description  : This function is used to read data of config/preset data to address 1036
* Parameter    : None
* Return       : None
******************************************************************************/
void currentDialog::on_readConfigBtn_clicked(void)
{
    bool connect_flag = currentdataMain->isActiveCommunication();
    QString serial_flag_write =currentdataMain->serial_flag();
    uint16_t *pAddressesValue = NULL;
    uint16_t current_rx_buff[96];
    int index_value = currentdataMain->config_preset_return()->currentIndex();
    int return_value = 0;


    if( connect_flag==1 )
    {
        if(currentdataMain->ActiveSlaveId() == 0)
        {
           QMessageBox::warning(this, "Warning", "Modbus is in broadcast mode!");
        }
        else
        {
            if (index_value == 0)
            {
                switch(newDifferentiator)
                {
                    case 1: pAddressesValue = current_rx_buff;
                    return_value = ReadModbusData(adresses_config_currentdialog[0], MULTI_WR_LENGTH, pAddressesValue );
                    break;

                    case 2: pAddressesValue = current_rx_buff+32;
                    return_value= ReadModbusData(adresses_config_currentdialog[MULTI_WR_LENGTH], MULTI_WR_LENGTH, pAddressesValue );
                    break;

                    case 3: pAddressesValue = current_rx_buff+64;
                    return_value= ReadModbusData(adresses_config_currentdialog[CURRENT_MAXCURRENTCONTINUOS_RW], MULTI_WR_LENGTH, pAddressesValue );
                    break;

                }
                if(return_value == ERROR_CODE)
                {
                   currentdataMain->checkException();
                   return;
                }
                for (int count =0;count < 32;count ++ )
                {
                    lineedits_data_currentdata[count]->setText(QString::number(*(pAddressesValue + count)));
                }
                pAddressesValue = NULL;
            }
            else
            {
                switch(newDifferentiator)
                {
                    case 1:pAddressesValue = current_rx_buff;
                    return_value = ReadModbusData(adresses_preset_config_currentdialog[0], MULTI_WR_LENGTH, pAddressesValue );
                    break;

                    case 2: pAddressesValue = current_rx_buff+32;
                    return_value= ReadModbusData(adresses_preset_config_currentdialog[MULTI_WR_LENGTH], MULTI_WR_LENGTH, pAddressesValue );
                    break;

                    case 3:  pAddressesValue = current_rx_buff+64;
                    return_value= ReadModbusData(adresses_preset_config_currentdialog[CURRENT_MAXCURRENTCONTINUOS_RW], MULTI_WR_LENGTH, pAddressesValue );
                    break;

                }
                if(return_value == ERROR_CODE)
                {
                   currentdataMain->checkException();
                   return;
                }
                for (int count =0;count < 32;count ++ )
                {
                    lineedits_data_currentdata[count]->setText(QString::number(*(pAddressesValue + count)));
                }
                pAddressesValue = NULL;
            }
        }

    }

}


/*******************************************************************************
* Function Name: void on_writeConfigBtn_clicked( void )
* Description  : This function is used to write data of config/preset data to address 1036
* Parameter    : None
* Return       : None
******************************************************************************/
void currentDialog::on_writeConfigBtn_clicked(void)
{
    bool connect_flag = currentdataMain->isActiveCommunication();
    QString serial_flag_write =currentdataMain->serial_flag();
    uint8_t count_value = 0;
    int return_value=0;
    int index_value = currentdataMain->config_preset_return()->currentIndex();
    int var1 = 0;

    if(connect_flag==1)
    {
        if (index_value == 0)
            {
                if (newDifferentiator == 1)
                    {
                    for ( int count =0;count < Onchecked_currentdata.size()  ;count ++ )
                         {

                         if ( Onchecked_currentdata[count]->isChecked() )
                             {
                                 count_value++;
                             }
                    }
                    if(count_value==0)
                    {
                       currentdataMain->errorMessage(CHECKBOXERROR);
                    }
                    else
                    {
                        for (int count =0;count < Onchecked_currentdata.size()  ;count ++ )
                        {
                            if (Onchecked_currentdata[count]->isChecked())
                                {
                                    if (lineedits_data_currentdata[count]->text().isEmpty())
                                    {
                                        currentdataMain->errorMessage(LINEEDITERROR);
                                        break;
                                    }
#ifdef QDEBUG
                                    qDebug()<<"value_of_LedMicroCycleTime_checkbox "<<adresses_config_currentdialog[count]<<count;
#endif
                                    var1 =  lineedits_data_currentdata[count]->text().toInt();
                                    return_value = WriteModbusData(adresses_config_currentdialog[count],var1 );
                                    if(return_value==ERROR_CODE)
                                    {
                                        currentdataMain->checkException();
                                        break;
                                    }
                                    }
                                }
                        }
                    currentdataMain->delay(10);
                    currentdataMain->State_version();
                    }

           else if (newDifferentiator == 2)
                {
                    for ( int count =0;count < Onchecked_currentdata.size()  ;count ++ )
                         {
                         if ( Onchecked_currentdata[count]->isChecked() )
                             {
                                 count_value++;
                             }
                        }
                        if(count_value==0)
                        {
                           currentdataMain->errorMessage(CHECKBOXERROR);
                        }
                        else
                        {
                                for (int count =0;count < Onchecked_currentdata.size()  ;count ++ )
                                     {

                                         if (Onchecked_currentdata[count]->isChecked())
                                             {
                                                 if (lineedits_data_currentdata[count]->text().isEmpty())
                                                 {
                                                     currentdataMain->errorMessage(LINEEDITERROR);
                                                     break;
                                                 }
#ifdef QDEBUG
                                                 qDebug()<<"value_of_LedMicroCycleTime_checkbox "<<adresses_config_currentdialog[count+MULTI_WR_LENGTH]<<count;
#endif
                                                 var1=  lineedits_data_currentdata[count]->text().toInt();
                                                 return_value = WriteModbusData(adresses_config_currentdialog[count+MULTI_WR_LENGTH],var1 );
                                                 if(return_value == ERROR_CODE)
                                                 {
                                                     currentdataMain->checkException();
                                                     break;
                                                 }

                                             }
                                     }
                                }
                        currentdataMain->delay(10);
                        currentdataMain->State_version();
                }
           else if (newDifferentiator == 3)
                {
                    for ( int count =0;count < Onchecked_currentdata.size()  ;count ++ )
                         {
                         if ( Onchecked_currentdata[count]->isChecked() )
                             {
                                 count_value++;
                             }
                        }
                        if(count_value==0)
                        {
                           currentdataMain->errorMessage(CHECKBOXERROR);
                        }
                        else
                        {
                                for (int count =0;count < Onchecked_currentdata.size()  ;count ++ )
                                 {
                                     if (Onchecked_currentdata[count]->isChecked())
                                         {
                                             if (lineedits_data_currentdata[count]->text().isEmpty())
                                             {
                                                 currentdataMain->errorMessage(LINEEDITERROR);
                                                 break;
                                             }
#ifdef QDEBUG
                                             qDebug()<<"value_of_LedMicroCycleTime_checkbox "<<adresses_config_currentdialog[count+CURRENT_MAXCURRENTCONTINUOS_RW]<<count;
#endif
                                             var1 =  lineedits_data_currentdata[count]->text().toInt();
                                             return_value = WriteModbusData(adresses_config_currentdialog[count+CURRENT_MAXCURRENTCONTINUOS_RW],var1 );
                                             if(return_value==ERROR_CODE)
                                             {
                                                 currentdataMain->checkException();
                                                 break;
                                             }

                                        }
                                 }
                        }
                    currentdataMain->delay(10);
                    currentdataMain->State_version();
                }
        }
        else
            {
                if (newDifferentiator == 1)
                    {
                    for ( int count =0;count < Onchecked_currentdata.size()  ;count ++ )
                         {

                         if ( Onchecked_currentdata[count]->isChecked() )
                             {
                                 count_value++;
                             }
                        }
                        if(count_value==0)
                        {
                           currentdataMain->errorMessage(CHECKBOXERROR);
                        }
                        else {
                            for (int count =0;count < Onchecked_currentdata.size()  ;count ++ )
                                {

                                    if (Onchecked_currentdata[count]->isChecked())
                                        {
                                            if (lineedits_data_currentdata[count]->text().isEmpty())
                                            {
                                                currentdataMain->errorMessage(LINEEDITERROR);
                                                break;
                                            }
#ifdef QDEBUG
                                             qDebug()<<"value_of_LedMicroCycleTime_checkbox "<<adresses_preset_config_currentdialog[count]<<count;
#endif
                                             var1 =  lineedits_data_currentdata[count]->text().toInt();
                                             return_value = WriteModbusData(adresses_preset_config_currentdialog[count],var1 );
                                             if(return_value==ERROR_CODE)
                                             {
                                                 currentdataMain->checkException();
                                                 break;
                                             }
                                        }
                                }
                        }
                        currentdataMain->delay(10);
                        currentdataMain->State_version();
                    }
            else if (newDifferentiator == 2)
            {
                    for ( int count =0;count < Onchecked_currentdata.size()  ;count ++ )
                         {

                         if ( Onchecked_currentdata[count]->isChecked() )
                             {
                                 count_value++;
                             }
                        }
                        if(count_value==0)
                        {
                           currentdataMain->errorMessage(CHECKBOXERROR);
                        }
                        else {
                            for (int count =0;count < Onchecked_currentdata.size()  ;count ++ )
                             {

                                 if (Onchecked_currentdata[count]->isChecked())
                                 {
                                     if (lineedits_data_currentdata[count]->text().isEmpty())
                                     {
                                         currentdataMain->errorMessage(LINEEDITERROR);
                                         break;
                                     }
#ifdef QDEBUG
                                     qDebug()<<"value_of_LedMicroCycleTime_checkbox "<<adresses_preset_config_currentdialog[count+MULTI_WR_LENGTH]<<count;
#endif
                                     var1 =  lineedits_data_currentdata[count]->text().toInt();
                                     return_value = WriteModbusData(adresses_preset_config_currentdialog[count+MULTI_WR_LENGTH],var1 );
                                     if(return_value==ERROR_CODE)
                                     {
                                         currentdataMain->checkException();
                                         break;
                                     }
                                 }
                             }
                        }
                        currentdataMain->delay(10);
                        currentdataMain->State_version();
            }
            else if (newDifferentiator == 3)
            {
                    for ( int count =0;count < Onchecked_currentdata.size()  ;count ++ )
                         {

                         if ( Onchecked_currentdata[count]->isChecked() )
                             {
                                 count_value++;
                            }
                        }
                        if(count_value==0)
                        {
                           currentdataMain->errorMessage(CHECKBOXERROR);
                        }
                        else
                        {
                            for (int count =0;count < Onchecked_currentdata.size()  ;count ++ )
                             {
                                 if (Onchecked_currentdata[count]->isChecked())
                                 {
                                     if (lineedits_data_currentdata[count]->text().isEmpty())
                                     {
                                         currentdataMain->errorMessage(LINEEDITERROR);
                                         break;
                                     }
#ifdef QDEBUG
                                     qDebug()<<"value_of_LedMicroCycleTime_checkbox "<<adresses_preset_config_currentdialog[count+CURRENT_MAXCURRENTCONTINUOS_RW]<<count;
#endif
                                     var1 =  lineedits_data_currentdata[count]->text().toInt();
                                    return_value =  WriteModbusData(adresses_preset_config_currentdialog[count+CURRENT_MAXCURRENTCONTINUOS_RW],var1 );
                                     if(return_value == ERROR_CODE)
                                     {
                                         currentdataMain->checkException();
                                         break;
                                     }

                                 }
                             }
                        }
                        currentdataMain->delay(10);
                        currentdataMain->State_version();
            }
        }
    }
}


/*******************************************************************************
* Function Name: void on_clear_clicked( void )
* Description  : This function is used to clear data of lineEdits
* Parameter    : None
* Return       : None
******************************************************************************/
void currentDialog::on_clear_clicked(void)
{
    for(int i=0;i<lineedits_data_currentdata.size();i++)
    {
        this->lineedits_data_currentdata[i]->clear();
    }
}

/*******************************************************************************
* Function Name: void on_pushButton_2_clicked( void )
* Description  : This function is used to hide the dailogbox
* Parameter    : None
* Return       : None
******************************************************************************/
void currentDialog::on_currentdialog_ok_clicked()
{
    this->hide();
}


/*******************************************************************************
* Function Name: void show_data_current( void )
* Description  : This function is used to return the array of LineEdits
* Parameter    : None
* Return       : None
******************************************************************************/
QVector<QLineEdit*> currentDialog::show_data_current(void)
{
    return lineedits_data_currentdata;
}




