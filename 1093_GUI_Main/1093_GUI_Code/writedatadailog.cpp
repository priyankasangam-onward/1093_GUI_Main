/*******************************************************************************
  Microcycle Config Data

  Company:
    Onward Technologies.

  File Name:
    writedatadailog.c

  Summary:
    Data to be read and write  LED current,maximum current,maximum current pulse

  Description:
    The file provides a simple modbus communication to manage read and write
    operation.

 * Date of creation:
 * version:0.1
*******************************************************************************/

#include <QCoreApplication>
#include "writedatadailog.h"
#include "ui_writedatadailog.h"
#include "mainwindow.h"
#include <QEvent>
#include <QEventLoop>




class MainWindow;


writedataDialog::writedataDialog(QWidget *parent,MainWindow *dataptr, uint8_t differentiator) :
    QDialog(parent)
    , ui(new Ui::writedataDailog)
    ,writedataMain(dataptr)
    ,Differentiator(differentiator)
{
    ui->setupUi(this);
    this->setWindowTitle("MicroCycle LED Configuration");
    Onchecked_microcycle.resize(16);

    lineedits_data_microcycle.resize(32);

    Onchecked_microcycle = {ui->checkBox_write1,ui->checkBox_write2,ui->checkBox_write3,ui->checkBox_write4,ui->checkBox_write5,ui->checkBox_write6,ui->checkBox_write7,ui->checkBox_write8,ui->checkBox_write9,
                                        ui->checkBox_write10,ui->checkBox_write11,ui->checkBox_write12,ui->checkBox_write13,ui->checkBox_write14,ui->checkBox_write15,ui->checkBox_write16};

    lineedits_data_microcycle= {ui->lineEdit_write9,ui->lineEdit_write1,ui->lineEdit_write10,ui->lineEdit_write2,ui->lineEdit_write11,
                                      ui->lineEdit_write3,ui->lineEdit_write12,ui->lineEdit_write4,ui->lineEdit_write13,ui->lineEdit_write5,
                                      ui->lineEdit_write14,ui->lineEdit_write6,ui->lineEdit_write15,ui->lineEdit_write7,ui->lineEdit_write16,
                                      ui->lineEdit_write8,ui->lineEdit_write25,ui->lineEdit_write17,ui->lineEdit_write26,ui->lineEdit_write18,
                                      ui->lineEdit_write27,ui->lineEdit_write19,ui->lineEdit_write28,ui->lineEdit_write20,ui->lineEdit_write29,
                                      ui->lineEdit_write21,ui->lineEdit_write30,ui->lineEdit_write22,ui->lineEdit_write31,ui->lineEdit_write23,
                                      ui->lineEdit_write32,ui->lineEdit_write24};

    for (uint8_t count=0; count<128 ;count++ )
    {
        adresses_config_dialog[count]= MB_MicroCycleLedConfig + count;
        adresses_preset_config_dialog[count] = MB_MicroCycleLedConfig_Preset + count;
    }
}


writedataDialog::~writedataDialog()
{
    delete ui;
}


/*******************************************************************************
* Function Name: void on_micro_select_all_clicked( void )
* Description  : This function is used to select checkbox
* Parameter    : None
* Return       : None
******************************************************************************/
void writedataDialog::on_micro_select_all_clicked(void)
{
    if(ui->micro_select_all->text()=="Diselect All")
    {
        for(int count=0;count<16;count++)
        {
            Onchecked_microcycle[count]->setChecked(false);
            ui->micro_select_all->setText("select All");
        }
    }
    else {
        for(int count=0;count<16;count++)
        {
            Onchecked_microcycle[count]->setChecked(true);
            ui->micro_select_all->setText("Diselect All");
        }
    }
}


/*******************************************************************************
* Function Name: void on_writeConfigBtn_clicked( void )
* Description  : This function is used to write data of config/preset data to address 1004
* Parameter    : None
* Return       : None
******************************************************************************/
void writedataDialog::on_writeConfigBtn_clicked(void)
{
    bool connect_flag = writedataMain->isActiveCommunication();
    QString serial_flag_write =writedataMain->serial_flag();
    uint16_t check_count_writedailog = 0;
    uint16_t write_tx_buff[125] = {0};
    int index_two=0;
    int retur_value=0;
    int index_value = writedataMain->config_preset_return()->currentIndex();

    if(connect_flag == 1)
    {
        if (index_value == 0)
        {
           if (Differentiator == 1)
           {
               for (int count =0;count < Onchecked_microcycle.size(); count ++ )
                  {
                   if (Onchecked_microcycle[count]->isChecked()) {
                       check_count_writedailog++;
                   }
               }
               if(check_count_writedailog == 0)
               {
                   writedataMain->errorMessage(CHECKBOXERROR);
               }
                else
                {
                   for (int count =0; count < Onchecked_microcycle.size(); count ++ )
                      {
                       if (Onchecked_microcycle[count]->isChecked())
                       {
                           if ((lineedits_data_microcycle[count*2]->text().isEmpty()) || (lineedits_data_microcycle[(count*2)+1]->text().isEmpty()))
                           {
                               writedataMain->errorMessage(LINEEDITERROR);
                               break;
                           }
#ifdef  QDEBUG
                           qDebug()<<"value_of_LedMicroCycleTime_checkbox "<<adresses_config_dialog[index_two]<<index_two;
#endif
                           write_tx_buff[0] =  static_cast<uint16_t>(lineedits_data_microcycle[count*2]->text().toInt());
                           write_tx_buff[1] = static_cast<uint16_t>(lineedits_data_microcycle[(count*2)+1]->text().toInt());
                          retur_value= WriteMultipleModbusData(adresses_config_dialog[index_two], DATA_LENGTH_MICROCYCLE, write_tx_buff);
                          if(retur_value == ERROR_CODE)
                          {
                             writedataMain->checkException();
                             break;
                          }
                       }
                       index_two +=2;
                   }
                }
        }
     }
    else if(index_value == 1)
       {
           if (Differentiator == 1)
           {
               for (int count =0;count < Onchecked_microcycle.size()  ;count ++ )
                  {
                   if (Onchecked_microcycle[count]->isChecked()) {
                       check_count_writedailog++;
                   }
               }
               if(check_count_writedailog==0)
               {
                  writedataMain->errorMessage(CHECKBOXERROR);
               }
                else
                {
                   for (int count =0;count < Onchecked_microcycle.size()  ;count ++ )
                      {
                       if (Onchecked_microcycle[count]->isChecked())
                       {
                           if ((lineedits_data_microcycle[count*2]->text().isEmpty()) || (lineedits_data_microcycle[(count*2)+1]->text().isEmpty()))
                           {
                               writedataMain->errorMessage(LINEEDITERROR);
                               break;
                           }
#ifdef  QDEBUG
                           qDebug()<<"value_of_LedMicroCycleTime_checkbox "<<adresses_preset_config_dialog[index_two]<<index_two;
#endif
                           write_tx_buff[0] =  static_cast<uint16_t>(lineedits_data_microcycle[count*2]->text().toInt());
                           write_tx_buff[1] = static_cast<uint16_t>(lineedits_data_microcycle[(count*2)+1]->text().toInt());
                          retur_value= WriteMultipleModbusData(adresses_preset_config_dialog[index_two], DATA_LENGTH_MICROCYCLE, write_tx_buff);
                          if(retur_value==ERROR_CODE)
                          {
                             writedataMain->checkException();
                             break;
                          }
                       }
                       index_two +=2;
                   }

                }
           }
        }
    }
}


/*******************************************************************************
* Function Name: void on_readConfigBtn_clicked( void )
* Description  : This function is used to read data of config/preset data to address 1004
* Parameter    : None
* Return       : None
******************************************************************************/
void writedataDialog::on_readConfigBtn_clicked(void)
{
    bool connect_flag = writedataMain->isActiveCommunication();
    QString serial_flag_write =writedataMain->serial_flag();
    uint16_t read_rx_buff[32] = {0};
    int index_value = writedataMain->config_preset_return()->currentIndex();
    int retur_value=0;


    if(connect_flag == 1)
    {
        if(writedataMain->ActiveSlaveId() == 0)
        {
           QMessageBox::warning(this, "Warning", "Modbus is in broadcast mode!");
        }
        else
        {
            if (index_value == 0)
            {
                retur_value= ReadModbusData(MB_MicroCycleLedConfig, MULTI_WR_LENGTH, read_rx_buff );
                if(retur_value == ERROR_CODE)
                {
                   writedataMain->checkException();
                   return;
                }
                for(uint8_t indexVal = 0; indexVal < 32; indexVal++)
                {
                    if(indexVal%2 == 0)
                    {
                        lineedits_data_microcycle[indexVal]->setText(QString::number(read_rx_buff[indexVal]));
                    }
                    else
                    {
                        lineedits_data_microcycle[indexVal]->setText(QString::number(read_rx_buff[indexVal]));
                    }
                }
            }
            else
            {
                retur_value= ReadModbusData(MB_MicroCycleLedConfig_Preset, MULTI_WR_LENGTH, read_rx_buff );
                if(retur_value == ERROR_CODE)
                {
                   writedataMain->checkException();
                   return;
                }
                for(uint8_t indexVal = 0; indexVal < 32; indexVal++)
                {
                    if(indexVal % 2 == 0)
                    {
                        lineedits_data_microcycle[indexVal]->setText(QString::number(read_rx_buff[indexVal]));
                    }
                    else
                    {
                        lineedits_data_microcycle[indexVal]->setText(QString::number(read_rx_buff[indexVal]));
                    }
                }
            }
        }

    }
}


/*******************************************************************************
* Function Name: void on_clear_Button_clicked( void )
* Description  : This function is used to clear data of lineEdits
* Parameter    : None
* Return       : None
******************************************************************************/
void writedataDialog::on_clear_Button_clicked(void)
{
    for(int i=0;i<lineedits_data_microcycle.size();i++)
    {
        this->lineedits_data_microcycle[i]->clear();
    }
}


/*******************************************************************************
* Function Name: void on_writedialog_ok_clicked( void )
* Description  : This function is used to hide the dailogbox
* Parameter    : None
* Return       : None
******************************************************************************/
void writedataDialog::on_writedialog_ok_clicked(void)
{
    this->hide();
}


/*******************************************************************************
* Function Name: void show_intial_microcycleled_data( void )
* Description  : This function is used to return the array of LineEdits
* Parameter    : None
* Return       : None
******************************************************************************/
QVector<QLineEdit*> writedataDialog::show_intial_microcycleled_data(void)
{
    return lineedits_data_microcycle;
}





