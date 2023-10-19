#ifndef MAINWINDOW_H
#define MAINWINDOW_H

/***********************initialization of Qwidgets library and communication library**************/
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QMainWindow>
#include <QString>
#include <QDebug>
#include <iostream>
#include <QMap>
#include <QList>
#include <QtWidgets>
#include <QThread>
#include <QApplication>
#include <QComboBox>
#include <QStatusBar>
#include <QSpinBox>
#include <QValidator>
#include "ui_mainwindow.h"
#include "crcdata.h"
#include "writedatadailog.h"
#include "3rdparty/libmodbus/src/modbus.h"
#include "3rdparty/libmodbus/src/modbus-rtu.h"
#include "modbus-interface.h"
#include "currentdialog.h"
#include "qaction.h"
#include <QMessageBox>
#include <QTimer>

/*******************************************************************************/
#define SERIALERROR         1
#define MODBUSERROR         2
#define BOOTLOADERERROR     3
#define APPLICATIONERROR    4
#define CHECKBOXERROR       5
#define LINEEDITERROR       6
#define INVALID_S_ID_ERROR  7
#define ILLEGAL_ADDR_ERROR  8
#define MODBUS_BUSY_ERROR   9
#define STARTADDRERROR      10
#define TOOMANYDATAERROR    11

#define MB_ADDRESS_EXCEPTION                    12
#define MB_QTY_REGS_EXCEPTION                   13
#define MB_DATA_OUT_OF_RANGE_EXCEPTION          14
#define BL_WRITE_ERROR                          15
#define BL_READ_ERROR                           16
#define BL_ADDR_ERROR                           17
#define BL_LEN_ERROR                            18
#define BL_WRITE_LEN_ADDR_ERROR                 19
#define BL_READ_LEN_ADDR_ERROR                  20

#define MB_READ_HR_ERROR_CODE                       0x83
#define MB_WRITE_HR_ERROR_CODE                      0x86
#define MB_WRITE_MULTIPLE_HR_ERROR_CODE             0x90

#define MB_HR_ADDRESS_EXCEPTION_CODE                0x02
#define MB_HR_QTY_REGS_EXCEPTION_CODE               0x03
#define MB_HR_DATA_OUT_OF_RANGE_EXCEPTION_CODE      0x04

/****************error code when firmware in bootloder******************/
#define BL_WRITE_ERROR_CODE                         0xE0
#define BL_READ_ERROR_CODE                          0xE1
#define BL_ADDR_ERROR_CODE                          0xE2
#define BL_LEN_ERROR_CODE                           0xE3
#define BL_WRITE_LEN_ADDR_ERROR_CODE                0xE6
#define BL_READ_LEN_ADDR_ERROR_CODE                 0xE7

/*********************initialization of macro***********************************/
#define CONFIG_START_ADDR           1001
#define CONFIG_PRESET_START_ADDR    2001
#define SENT                        0
#define MAXNUMOFREGISTER            125
#define UPGRADE_PAGE_SIZE           98300
#define APP_FLASH_START_RANGE_2    0x9D000004
/*******************************************************************************/
//#define QDEBUG
/*******************************************************************************/
#define STATUS_DISP_TIME    5000
#define READ_WRITE_LENGTH   123
#define HEX_BASE_VALUE      16
#define TX_RX_BUF           128
/*******************************************************************************/
#define SET                 1
#define CLEAR               0
#define SINGLE_RW_LENGTH    1
#define MULTI_WR_LENGTH     32
#define MIN_SLAVE_ADDRESS   0
#define MAX_SLAVE_ADDRESS   199
#define INITIAL_SLAVE_ADDRESS   1
/*******************************************************************************/
#define MB_STATE            0
#define MB_VERSION          1
#define MB_DEVICE_ID        2
#define MB_SOFT_REQ         4
#define MB_VERSION_1        9
/*******************************************************************************/
#define FLASH_ERASE_CMD           1001
#define FLASH_WRITE_CMD            1002
#define WRITE_DATA_ADDRESS         2001
#define WRITE_DATA_ADDRESS_MSB     2033
#define WRITE_DATA_ADDRESS_LSB     2034
#define WRITE_LENGTH_ADDRESS_MSB   2035
#define WRITE_LENGTH_ADDRESS_LSB   2036
#define APP_EXPECTED_CRC_MSB       3001
#define APP_EXPECTED_CRC_LSB       3002

/*******************************************************************************/
#define MB_MicroCycleLedConfig          1004
#define MB_FanTempLedMin                1132
#define MB_Preset_Valid                 2000
#define MB_MicroCycleLedConfig_Preset   2004
#define MB_FanTempLedMin_Preset         2132
#define MB_LedCurrentSetpoint           1036
#define MB_LedCurrentSetpoint_Preset    2036
#define MB_LedMaxCurrentPulse           1068
#define MB_LedMaxCurrentPulse_Preset    2068
#define MB_LedMaxCurrentContinuous      1100
#define MB_LedMaxCurrentContinuous_Preset 2100
#define MB_FanMode                      3000
#define MB_LightAsked                   3001
#define MB_Configuration                3002
#define MB_SoftResetReq                 3003
#define MB_SoftResetKey                 3004
#define MB_TempLed100_1                 4000
#define MB_Faults                       5000
#define MB_FaultFIFO_Erase              6000
#define MB_FaultFIFO_WR_Pointer         6001
#define MB_FaultFIFO                    6003
/*******************************************************************************/
//Modbus error code
#define MB_READ_HR_ERROR_CODE               0x83
#define MB_WRITE_HR_ERROR_CODE              0x86
#define MB_WRITE_MULTIPLE_HR_ERROR_CODE     0x90
/*******************************************************************************/
//RTC address
#define RTC_TIMESTAMP                  1138
#define BROADCAST_ADDRESS              0
#define ERROR_CODE                     -1




class currentDialog;
class writedataDialog;


 class MainWindow : public QMainWindow
 {
     Q_OBJECT


 public:
     explicit MainWindow(QWidget *parent = nullptr);
     ~MainWindow();
     uint16_t adresses_config[9];
     uint16_t adresses_preset_config[9];
     void UpdateConfigWindow ( uint16_t startAddress, uint16_t uLength, QVector<quint16> readData  );
     void Mytimer(void);
     void Mytimer_stop(void);
     writedataDialog* dataReadWrite;
     QVector<QComboBox*> serial_communication_combo(void);
     QComboBox* config_preset_return() const;
     uint16_t findIndex(uint16_t arr[], uint16_t size, uint16_t target);
     QVector<QListWidget*> listForRawData;
     void update_progress(void);
     void stBusMonitorRawData( modbus_t * modbus, uint8_t * data, uint8_t dataLen, uint8_t addNewline , uint8_t direction);
     void RawDataPrint(QString data);
     uint16_t connect_disconnect_flag(void);
     QString serial_flag(void);
     QPlainTextEdit& getSharedWidget(void);
     int ActiveSlaveId();
     void ErrorExpected (void);
     void errorMessage(uint8_t warningType);
     bool isActiveCommunication(void);
     void isResponseError(int responseError, int exceptionError);
     void isExceptionError(int exceptionErrorNum);
     void checkException(void);
     void State_version(void);
     void updateDateTime(void);
     void delay(int milliseconds);

 private:
     void on_writeButton_clicked(void);
     void on_connectType_currentIndexChanged(int);
     QString RawData;
     QPlainTextEdit* mywidget;

 private slots:
     void on_connect_btn_clicked(void);

     void on_MicroCycleLedConfig_readButton_clicked(void);

     void on_LedCurrentSetpoint_readButton_clicked(void);

     void on_LedMaxCurrentPulse_readButton_clicked(void);

     void on_LedMaxCurrentContinuous_readButton_clicked(void);

     void on_pushButton_WriteData_clicked(void);

     void on_pushButton_ReadData_clicked(void);

     void on_pushButton_Write_Command_clicked(void);

     void on_pushButton_Read_Command_clicked(void);

     void on_pushButton_RamDiagnosis_clicked(void);

     void on_pushButton_Read_RamFault_clicked(void);

     void on_pushButton_FlashFault_clicked(void);

     void MySlot(void);

     void on_update_read_faults_clicked(void);

     void on_Reset_timestamp_clicked(void);

     void on_pushButton_eventReadIndex_5_clicked(void);

     void on_RawDataCLear_clicked(void);

     void on_BrowseUpgrade_clicked(void);

     void on_startBrowse_clicked(void);

     void on_jump_to_app_btn_clicked(void);

     void customlineedit_enable(int nb);

     void statusTabUpdate(void);

     uint32_t addUInt16(uint16_t a, uint16_t b);

     void on_Fault_warning_clicked(void);

     void Preset_valid(void);

     void on_custom_data_clear_clicked(void);

     void on_state_version_2_clicked(void);

     void Fault_warning_clear(void);

     void clear_all_lineedit(void);

     void disable_read_lineedits(void);

     void update_fault_status(uint16_t fault_warning);

     void on_single_multi_write_currentIndexChanged(int index);

     void on_SendCustomFrame_clicked(void);

     int on_databits_currentIndexChanged(int data);

     int on_stopbits_currentIndexChanged(int data);

     int on_baud_currentIndexChanged(int data);

     QString on_parity_currentTextChanged(const QString &arg1);

     void start_updating_progress(uint8_t count);

     void on_single_multi_write_activated(int index);

     void on_nSize_currentIndexChanged(int index);

     void on_stop_progressbar_clicked(void);

     void on_lineEdit_SyncMode_write_textEdited(const QString &arg1);

     void on_lineEdit_DeglitchingEnable_write_textEdited(const QString &arg1);

     int on_SlaveAddress_editingFinished(void);

     void on_Fault_fifo_reset_btn_clicked(void);

     void on_Light_on_cmd_button_clicked();

     void on_Light_off_cmd_button_clicked();

     void on_config_cmd_button_clicked();

     QString Conversion_UInt_ASCII( uint16_t value);


 private:
     Ui::MainWindow  *ui;
     writedataDialog *read_MB_LedMicroCycleTime_Preset;
     currentDialog *read_MB_LedCycleTime_Preset;
     currentDialog *read_MB_LedMaxCurrentPulse_Preset;
     currentDialog *read_MB_LedMaxCurrentContinuous_Preset;

     QVector<QLineEdit*> value_of_config_write_lineedit;
     QVector<QLineEdit*> value_of_config_read_lineedit;

     QVector<QCheckBox*> value_of_config_checkbox;

     QVector<QLineEdit*> lineEdit_of_mainwindow_upper;
     QVector<QLineEdit*> lineEdit_of_mainwindow_lower;

     QVector<QLineEdit*> write_lineEdit_of_mainwindow_upper;
     QVector<QLineEdit*> write_lineEdit_of_mainwindow_lower;

     QTimer *timer;
     QSerialPortInfo info;
     QVector<QComboBox*> combo_value;
     QVector<QLineEdit*> custom_lineEdit;
     QComboBox* m_comboBox;

     modbus_t * m_serialModbus_value = NULL;
     QVector <QLineEdit*> statusValues;

     QVector<QCheckBox*> checkboxCommandRead;
     QVector<QLineEdit*> lineeditCommandRead;
     QVector<QComboBox*> lineeditCommandWrite;
     QVector<QLineEdit*> Lineedit_RamDiagnosis;
     QVector<QLineEdit*> LineEditRamFault;
     QVector<QLineEdit*> LineditFlashFault;
     QVector<QLineEdit*> Lineditfaulfifo;
     QVector<QLineEdit*> Lineditfaulfifo_time;
     QVector<QCheckBox*> fault_status;
     QVector<QCheckBox*> warning_status;
 };

#endif // MAINWINDOW_H
