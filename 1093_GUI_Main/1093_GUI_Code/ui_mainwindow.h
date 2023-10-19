/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QComboBox *stopbits;
    QLabel *label_5;
    QComboBox *parity;
    QLabel *label_3;
    QComboBox *serialPortSelect_comboBox;
    QPushButton *connect_btn;
    QComboBox *baud;
    QComboBox *databits;
    QLabel *label_4;
    QLabel *label;
    QCheckBox *connect_disconnect_status;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QGridLayout *gridLayout_7;
    QFrame *frame_4;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_8;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_10;
    QFrame *frame_10;
    QGridLayout *gridLayout_22;
    QGridLayout *gridLayout_21;
    QCheckBox *checkBox_FanMode;
    QPushButton *pushButton_Read_Command;
    QPushButton *Light_on_cmd_button;
    QLineEdit *lineEdit_FanMode_read;
    QLabel *label_69;
    QLabel *label_68;
    QPushButton *pushButton_Write_Command;
    QComboBox *Combo_FanMode_write;
    QPushButton *Light_off_cmd_button;
    QPushButton *config_cmd_button;
    QSpacerItem *verticalSpacer;
    QFrame *frame_7;
    QGridLayout *gridLayout_15;
    QGridLayout *gridLayout_14;
    QLineEdit *lineEdit_FanDuty;
    QLabel *label_32;
    QLineEdit *lineEdit_TempDriver100;
    QLabel *label_29;
    QLineEdit *lineEdit_TempLed100_1;
    QLabel *label_30;
    QLineEdit *lineEdit_Vin;
    QLabel *label_27;
    QLabel *label_28;
    QLineEdit *lineEdit_FanRPM;
    QPushButton *pushButton_RamDiagnosis;
    QLabel *label_33;
    QLabel *label_31;
    QLineEdit *lineEdit_TempLed100_2;
    QLineEdit *lineEdit_HumidityDriver100;
    QLabel *label_57;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame_5;
    QGridLayout *gridLayout_24;
    QGridLayout *gridLayout_23;
    QLabel *label_81;
    QCheckBox *warning_1;
    QLabel *label_86;
    QCheckBox *fault_2;
    QLabel *label_77;
    QCheckBox *warning_4;
    QLabel *label_84;
    QLabel *label_80;
    QLabel *label_73;
    QCheckBox *fault_4;
    QLabel *label_75;
    QLabel *label_79;
    QCheckBox *fault_3;
    QCheckBox *warning_3;
    QCheckBox *fault_7;
    QCheckBox *fault_6;
    QLabel *label_83;
    QCheckBox *warning_2;
    QLabel *label_76;
    QCheckBox *warning_5;
    QLabel *label_85;
    QCheckBox *warning_6;
    QCheckBox *fault_1;
    QLabel *label_74;
    QLabel *label_82;
    QCheckBox *fault_5;
    QLabel *label_78;
    QLabel *label_72;
    QLabel *label_87;
    QPushButton *Fault_warning;
    QPushButton *update_read_faults;
    QFrame *frame_8;
    QGridLayout *gridLayout_13;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout_12;
    QLineEdit *lineEdit_LedTempWar_write;
    QLineEdit *lineEdit_DeadTime10_read;
    QLineEdit *lineEdit_LedCycleTime_write;
    QCheckBox *checkBox_LedCycleTime;
    QLineEdit *LedMicroCycleTimeLineEdit_write;
    QLineEdit *LedMicroCycleTimeLineEdit_read;
    QLineEdit *lineEdit_LedCycleTime_read;
    QCheckBox *checkBox_LedTempWar;
    QLineEdit *lineEdit_SyncMode_write;
    QLabel *fantempmax_lable;
    QLabel *cycletime_lable;
    QLabel *suncmode_lable;
    QLabel *microCycle_lable;
    QPushButton *LedCurrentSetpoint_readButton;
    QPushButton *MicroCycleLedConfig_readButton;
    QLabel *deglitching_lable;
    QLineEdit *lineEdit_LedTempWar_read;
    QLineEdit *lineEdit_DeglitchingEnable_read;
    QPushButton *pushButton_WriteData;
    QLabel *fantempled_led;
    QLineEdit *lineEdit_FanTempLedMax_write;
    QCheckBox *checkBox_FanTempLedMin;
    QLineEdit *lineEdit_DeglitchingEnable_write;
    QLabel *label_24;
    QLineEdit *lineEdit_NumMicroCycles_read;
    QLineEdit *lineEdit_DeadTime10_write;
    QLineEdit *lineEdit_NumMicroCycles_write;
    QLineEdit *lineEdit_SyncMode_read;
    QLabel *label_26;
    QPushButton *LedMaxCurrentPulse_readButton;
    QLabel *noofMicrocycle_label;
    QLineEdit *lineEdit_FanTempLedMin_write;
    QLabel *label_25;
    QLabel *deadtime_label;
    QComboBox *comboBox_configuration;
    QPushButton *LedMaxCurrentContinuous_readButton;
    QLabel *label_12;
    QCheckBox *checkBox_NumMicroCycles;
    QLineEdit *lineEdit_FanTempLedMin_read;
    QPushButton *pushButton_ReadData;
    QLineEdit *lineEdit_FanTempLedMax_read;
    QCheckBox *checkBox_DeglitchingEnable;
    QLabel *label_23;
    QCheckBox *checkBox_FanTempLedMax;
    QCheckBox *checkBox_LedMicroCycleTime;
    QLabel *ledwarning_lable;
    QCheckBox *checkBox_SyncMode;
    QCheckBox *checkBox_DeadTime10;
    QFrame *frame_6;
    QGridLayout *gridLayout_19;
    QGridLayout *gridLayout_18;
    QLabel *label_42;
    QLabel *label_48;
    QLineEdit *FaultTempled100_4;
    QPushButton *pushButton_FlashFault;
    QLabel *label_53;
    QLabel *label_45;
    QLabel *label_54;
    QLineEdit *FaultVin_2;
    QLineEdit *lineEdit_FaultFIFO_WR_Pointer;
    QLabel *label_47;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_50;
    QLineEdit *FaultHumidityDriver100_2;
    QLabel *label_58;
    QLineEdit *faultcurrent_read_2;
    QLineEdit *lineEdit_FaultFifoNumEvents;
    QLineEdit *fifo_numevent_Enter;
    QLabel *label_46;
    QLabel *label_51;
    QLineEdit *TimeStamp_2;
    QLabel *label_49;
    QPushButton *pushButton_eventReadIndex_5;
    QLineEdit *fault_Id_2;
    QLineEdit *fault_fifo_2;
    QLineEdit *FaultTempDriver100_2;
    QLineEdit *FaultTempled100_3;
    QLabel *label_52;
    QPushButton *Fault_fifo_reset_btn;
    QFrame *frame_11;
    QGridLayout *gridLayout_27;
    QGridLayout *gridLayout_26;
    QPushButton *RawDataCLear;
    QPlainTextEdit *rawData;
    QLabel *label_104;
    QSpacerItem *verticalSpacer_6;
    QFrame *frame_9;
    QGridLayout *gridLayout_17;
    QGridLayout *gridLayout_16;
    QLabel *label_41;
    QLabel *label_39;
    QLabel *label_38;
    QLineEdit *lineEdit_Faults;
    QLineEdit *lineEdit_FaultTempLed100_2;
    QLineEdit *lineEdit_FaultLedID;
    QLabel *label_37;
    QLabel *label_35;
    QLabel *label_40;
    QLabel *label_36;
    QLineEdit *lineEdit_FaultTempLed100_1;
    QLineEdit *lineEdit_FaultCurrentSetPoint;
    QPushButton *pushButton_Read_RamFault;
    QLineEdit *lineEdit_TempDriver100_2;
    QLabel *label_34;
    QLineEdit *lineEdit_FaultVin;
    QLineEdit *lineEdit_HumidityDriver100_2;
    QLabel *label_61;
    QSpacerItem *verticalSpacer_5;
    QWidget *tab_4;
    QGridLayout *gridLayout_29;
    QFrame *frame_14;
    QGridLayout *gridLayout_33;
    QFrame *frame_16;
    QGridLayout *gridLayout_35;
    QGridLayout *gridLayout_32;
    QLineEdit *customLineEdit60;
    QLineEdit *customLineEdit100;
    QLineEdit *customLineEdit120;
    QLineEdit *customLineEdit107;
    QLineEdit *customLineEdit29;
    QLineEdit *customLineEdit113;
    QLineEdit *customLineEdit74;
    QLineEdit *customLineEdit25;
    QLineEdit *customLineEdit63;
    QLineEdit *customLineEdit75;
    QLineEdit *customLineEdit20;
    QLineEdit *customLineEdit77;
    QLineEdit *customLineEdit21;
    QLineEdit *customLineEdit44;
    QLineEdit *customLineEdit6;
    QLineEdit *customLineEdit2;
    QLineEdit *customLineEdit66;
    QLineEdit *customLineEdit41;
    QLineEdit *customLineEdit72;
    QLineEdit *customLineEdit48;
    QLineEdit *customLineEdit108;
    QLineEdit *customLineEdit93;
    QLineEdit *customLineEdit111;
    QLineEdit *customLineEdit40;
    QLineEdit *customLineEdit51;
    QLineEdit *customLineEdit13;
    QLineEdit *customLineEdit35;
    QLineEdit *customLineEdit87;
    QLineEdit *customLineEdit38;
    QLineEdit *customLineEdit73;
    QLineEdit *customLineEdit92;
    QLineEdit *customLineEdit17;
    QLineEdit *customLineEdit47;
    QLineEdit *customLineEdit95;
    QLineEdit *customLineEdit26;
    QLineEdit *customLineEdit86;
    QLineEdit *customLineEdit16;
    QLineEdit *customLineEdit117;
    QLineEdit *customLineEdit4;
    QLineEdit *customLineEdit11;
    QLineEdit *customLineEdit103;
    QLineEdit *customLineEdit121;
    QLineEdit *customLineEdit125;
    QLineEdit *customLineEdit12;
    QLineEdit *customLineEdit96;
    QLineEdit *customLineEdit45;
    QLineEdit *customLineEdit58;
    QLineEdit *customLineEdit88;
    QLineEdit *customLineEdit76;
    QLineEdit *customLineEdit124;
    QLineEdit *customLineEdit5;
    QLineEdit *customLineEdit122;
    QLineEdit *customLineEdit112;
    QLineEdit *customLineEdit81;
    QLineEdit *customLineEdit10;
    QLineEdit *customLineEdit36;
    QLineEdit *customLineEdit54;
    QLineEdit *customLineEdit62;
    QLineEdit *customLineEdit19;
    QLineEdit *customLineEdit116;
    QLineEdit *customLineEdit99;
    QLineEdit *customLineEdit90;
    QLineEdit *customLineEdit32;
    QLineEdit *customLineEdit30;
    QLineEdit *customLineEdit14;
    QLineEdit *customLineEdit123;
    QLineEdit *customLineEdit56;
    QLineEdit *customLineEdit105;
    QLineEdit *customLineEdit101;
    QLineEdit *customLineEdit1;
    QLineEdit *customLineEdit52;
    QLineEdit *customLineEdit79;
    QLineEdit *customLineEdit27;
    QLineEdit *customLineEdit104;
    QLineEdit *customLineEdit109;
    QLineEdit *customLineEdit55;
    QLineEdit *customLineEdit8;
    QLineEdit *customLineEdit37;
    QLineEdit *customLineEdit80;
    QLineEdit *customLineEdit49;
    QLineEdit *customLineEdit84;
    QLineEdit *customLineEdit57;
    QLineEdit *customLineEdit42;
    QLineEdit *customLineEdit24;
    QLineEdit *customLineEdit110;
    QLineEdit *customLineEdit18;
    QLineEdit *customLineEdit50;
    QLineEdit *customLineEdit7;
    QLineEdit *customLineEdit64;
    QLineEdit *customLineEdit118;
    QLineEdit *customLineEdit69;
    QLineEdit *customLineEdit70;
    QLineEdit *customLineEdit46;
    QLineEdit *customLineEdit59;
    QLineEdit *customLineEdit102;
    QLineEdit *customLineEdit31;
    QLineEdit *customLineEdit98;
    QLineEdit *customLineEdit114;
    QLineEdit *customLineEdit53;
    QLineEdit *customLineEdit34;
    QLineEdit *customLineEdit39;
    QLineEdit *customLineEdit33;
    QLineEdit *customLineEdit91;
    QLineEdit *customLineEdit119;
    QLineEdit *customLineEdit83;
    QLineEdit *customLineEdit71;
    QLineEdit *customLineEdit9;
    QLineEdit *customLineEdit89;
    QLineEdit *customLineEdit115;
    QLineEdit *customLineEdit67;
    QLineEdit *customLineEdit61;
    QLineEdit *customLineEdit82;
    QLineEdit *customLineEdit3;
    QLineEdit *customLineEdit23;
    QLineEdit *customLineEdit15;
    QLineEdit *customLineEdit28;
    QLineEdit *customLineEdit85;
    QLineEdit *customLineEdit22;
    QLineEdit *customLineEdit65;
    QLineEdit *customLineEdit78;
    QLineEdit *customLineEdit94;
    QLineEdit *customLineEdit97;
    QLineEdit *customLineEdit43;
    QLineEdit *customLineEdit68;
    QLineEdit *customLineEdit106;
    QFrame *frame_13;
    QGridLayout *gridLayout_31;
    QFrame *frame_15;
    QGridLayout *gridLayout_34;
    QGridLayout *gridLayout_30;
    QLineEdit *StartAddress;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_59;
    QComboBox *single_multi_write;
    QComboBox *nSize;
    QCheckBox *hex_check;
    QPushButton *SendCustomFrame;
    QPushButton *custom_data_clear;
    QLabel *label_56;
    QLabel *label_60;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_12;
    QGridLayout *gridLayout_28;
    QGridLayout *gridLayout_25;
    QPushButton *BrowseUpgrade;
    QLabel *label_14;
    QProgressBar *upgrade_progress;
    QPushButton *startBrowse;
    QLabel *label_55;
    QLabel *label_62;
    QPushButton *Reset_timestamp;
    QLineEdit *browseLineEdit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *jump_to_app_btn;
    QPushButton *stop_progressbar;
    QHBoxLayout *horizontalLayout_5;
    QFrame *frame_3;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QLineEdit *Device_Id_Read;
    QPushButton *state_version_2;
    QLineEdit *Hw_Version_Read;
    QLineEdit *sw_Version_Read;
    QLineEdit *State_Version_Read;
    QLineEdit *preset_Read;
    QSpinBox *SlaveAddress;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_13;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1404, 1040);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setStyleSheet(QString::fromUtf8("\n"
"QFrame{\n"
"background-color: rgb(139, 219, 229);\n"
"border-radius: 5px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame);
        gridLayout_4->setSpacing(5);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(15, 5, 15, 5);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(139, 219, 229, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(0, 0, 0, 128));
        brush2.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush3(QColor(0, 0, 0, 128));
        brush3.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush4(QColor(0, 0, 0, 128));
        brush4.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
        label_2->setPalette(palette);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_2, 0, 1, 1, 1);

        stopbits = new QComboBox(frame);
        stopbits->setObjectName(QString::fromUtf8("stopbits"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stopbits->sizePolicy().hasHeightForWidth());
        stopbits->setSizePolicy(sizePolicy2);
        stopbits->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(stopbits, 1, 3, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush6(QColor(0, 0, 0, 128));
        brush6.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush7(QColor(0, 0, 0, 128));
        brush7.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
        label_5->setPalette(palette1);
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_5, 0, 4, 1, 1);

        parity = new QComboBox(frame);
        parity->setObjectName(QString::fromUtf8("parity"));
        sizePolicy2.setHeightForWidth(parity->sizePolicy().hasHeightForWidth());
        parity->setSizePolicy(sizePolicy2);
        parity->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(parity, 1, 4, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush8(QColor(0, 0, 0, 128));
        brush8.setStyle(Qt::NoBrush);
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::NoBrush);
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush10(QColor(0, 0, 0, 128));
        brush10.setStyle(Qt::NoBrush);
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
        label_3->setPalette(palette2);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_3, 0, 2, 1, 1);

        serialPortSelect_comboBox = new QComboBox(frame);
        serialPortSelect_comboBox->setObjectName(QString::fromUtf8("serialPortSelect_comboBox"));
        sizePolicy2.setHeightForWidth(serialPortSelect_comboBox->sizePolicy().hasHeightForWidth());
        serialPortSelect_comboBox->setSizePolicy(sizePolicy2);
        serialPortSelect_comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(serialPortSelect_comboBox, 1, 0, 1, 1);

        connect_btn = new QPushButton(frame);
        connect_btn->setObjectName(QString::fromUtf8("connect_btn"));
        sizePolicy2.setHeightForWidth(connect_btn->sizePolicy().hasHeightForWidth());
        connect_btn->setSizePolicy(sizePolicy2);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush11(QColor(255, 255, 255, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush11);
        QBrush brush12(QColor(0, 0, 0, 128));
        brush12.setStyle(Qt::NoBrush);
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        QBrush brush13(QColor(0, 0, 0, 128));
        brush13.setStyle(Qt::NoBrush);
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        QBrush brush14(QColor(0, 0, 0, 128));
        brush14.setStyle(Qt::NoBrush);
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
        connect_btn->setPalette(palette3);
        connect_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_3->addWidget(connect_btn, 1, 5, 1, 1);

        baud = new QComboBox(frame);
        baud->setObjectName(QString::fromUtf8("baud"));
        sizePolicy2.setHeightForWidth(baud->sizePolicy().hasHeightForWidth());
        baud->setSizePolicy(sizePolicy2);
        baud->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(baud, 1, 1, 1, 1);

        databits = new QComboBox(frame);
        databits->setObjectName(QString::fromUtf8("databits"));
        sizePolicy2.setHeightForWidth(databits->sizePolicy().hasHeightForWidth());
        databits->setSizePolicy(sizePolicy2);
        databits->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(databits, 1, 2, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush15(QColor(0, 0, 0, 128));
        brush15.setStyle(Qt::NoBrush);
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush16(QColor(0, 0, 0, 128));
        brush16.setStyle(Qt::NoBrush);
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush17(QColor(0, 0, 0, 128));
        brush17.setStyle(Qt::NoBrush);
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush17);
        label_4->setPalette(palette4);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_4, 0, 3, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush18(QColor(0, 0, 0, 128));
        brush18.setStyle(Qt::NoBrush);
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush18);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush19(QColor(0, 0, 0, 128));
        brush19.setStyle(Qt::NoBrush);
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush19);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush20(QColor(0, 0, 0, 128));
        brush20.setStyle(Qt::NoBrush);
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush20);
        label->setPalette(palette5);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(frame);

        connect_disconnect_status = new QCheckBox(centralwidget);
        connect_disconnect_status->setObjectName(QString::fromUtf8("connect_disconnect_status"));
        sizePolicy2.setHeightForWidth(connect_disconnect_status->sizePolicy().hasHeightForWidth());
        connect_disconnect_status->setSizePolicy(sizePolicy2);
        connect_disconnect_status->setStyleSheet(QString::fromUtf8("color: rgb(230, 230, 230);"));
        connect_disconnect_status->setCheckable(false);

        horizontalLayout_2->addWidget(connect_disconnect_status);

        horizontalSpacer = new QSpacerItem(661, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy3);
        frame_2->setMinimumSize(QSize(250, 50));
        frame_2->setMaximumSize(QSize(300, 50));
        frame_2->setStyleSheet(QString::fromUtf8("\n"
"QFrame{\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 2px;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_2);
        horizontalLayout_4->setSpacing(3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy4);
        label_6->setMaximumSize(QSize(16777215, 16777215));
        label_6->setPixmap(QPixmap(QString::fromUtf8("Raytech.png")));
        label_6->setScaledContents(true);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_6);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout_2->addWidget(frame_2);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(3);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_9 = new QGridLayout(frame_4);
        gridLayout_9->setSpacing(3);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(3, 3, 3, 3);
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        tabWidget = new QTabWidget(frame_4);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        sizePolicy2.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy2);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);\n"
""));
        tabWidget->setIconSize(QSize(10, 10));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_11 = new QGridLayout(tab_3);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(3);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(-1, 0, -1, -1);
        frame_10 = new QFrame(tab_3);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        sizePolicy2.setHeightForWidth(frame_10->sizePolicy().hasHeightForWidth());
        frame_10->setSizePolicy(sizePolicy2);
        frame_10->setBaseSize(QSize(0, 0));
        frame_10->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
""));
        frame_10->setFrameShape(QFrame::WinPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        gridLayout_22 = new QGridLayout(frame_10);
        gridLayout_22->setSpacing(3);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        gridLayout_22->setContentsMargins(3, 3, 3, 3);
        gridLayout_21 = new QGridLayout();
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        checkBox_FanMode = new QCheckBox(frame_10);
        checkBox_FanMode->setObjectName(QString::fromUtf8("checkBox_FanMode"));
        sizePolicy2.setHeightForWidth(checkBox_FanMode->sizePolicy().hasHeightForWidth());
        checkBox_FanMode->setSizePolicy(sizePolicy2);

        gridLayout_21->addWidget(checkBox_FanMode, 1, 1, 1, 1);

        pushButton_Read_Command = new QPushButton(frame_10);
        pushButton_Read_Command->setObjectName(QString::fromUtf8("pushButton_Read_Command"));
        sizePolicy2.setHeightForWidth(pushButton_Read_Command->sizePolicy().hasHeightForWidth());
        pushButton_Read_Command->setSizePolicy(sizePolicy2);
        pushButton_Read_Command->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_21->addWidget(pushButton_Read_Command, 2, 3, 1, 1);

        Light_on_cmd_button = new QPushButton(frame_10);
        Light_on_cmd_button->setObjectName(QString::fromUtf8("Light_on_cmd_button"));
        sizePolicy2.setHeightForWidth(Light_on_cmd_button->sizePolicy().hasHeightForWidth());
        Light_on_cmd_button->setSizePolicy(sizePolicy2);
        Light_on_cmd_button->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_21->addWidget(Light_on_cmd_button, 3, 2, 1, 1);

        lineEdit_FanMode_read = new QLineEdit(frame_10);
        lineEdit_FanMode_read->setObjectName(QString::fromUtf8("lineEdit_FanMode_read"));
        sizePolicy2.setHeightForWidth(lineEdit_FanMode_read->sizePolicy().hasHeightForWidth());
        lineEdit_FanMode_read->setSizePolicy(sizePolicy2);
        lineEdit_FanMode_read->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_21->addWidget(lineEdit_FanMode_read, 1, 3, 1, 1);

        label_69 = new QLabel(frame_10);
        label_69->setObjectName(QString::fromUtf8("label_69"));

        gridLayout_21->addWidget(label_69, 1, 0, 1, 1);

        label_68 = new QLabel(frame_10);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        label_68->setFont(font);
        label_68->setAlignment(Qt::AlignCenter);

        gridLayout_21->addWidget(label_68, 0, 0, 1, 4);

        pushButton_Write_Command = new QPushButton(frame_10);
        pushButton_Write_Command->setObjectName(QString::fromUtf8("pushButton_Write_Command"));
        sizePolicy2.setHeightForWidth(pushButton_Write_Command->sizePolicy().hasHeightForWidth());
        pushButton_Write_Command->setSizePolicy(sizePolicy2);
        pushButton_Write_Command->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_21->addWidget(pushButton_Write_Command, 2, 2, 1, 1);

        Combo_FanMode_write = new QComboBox(frame_10);
        Combo_FanMode_write->addItem(QString());
        Combo_FanMode_write->addItem(QString());
        Combo_FanMode_write->addItem(QString());
        Combo_FanMode_write->setObjectName(QString::fromUtf8("Combo_FanMode_write"));
        sizePolicy2.setHeightForWidth(Combo_FanMode_write->sizePolicy().hasHeightForWidth());
        Combo_FanMode_write->setSizePolicy(sizePolicy2);

        gridLayout_21->addWidget(Combo_FanMode_write, 1, 2, 1, 1);

        Light_off_cmd_button = new QPushButton(frame_10);
        Light_off_cmd_button->setObjectName(QString::fromUtf8("Light_off_cmd_button"));
        sizePolicy2.setHeightForWidth(Light_off_cmd_button->sizePolicy().hasHeightForWidth());
        Light_off_cmd_button->setSizePolicy(sizePolicy2);
        Light_off_cmd_button->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_21->addWidget(Light_off_cmd_button, 3, 3, 1, 1);

        config_cmd_button = new QPushButton(frame_10);
        config_cmd_button->setObjectName(QString::fromUtf8("config_cmd_button"));
        sizePolicy2.setHeightForWidth(config_cmd_button->sizePolicy().hasHeightForWidth());
        config_cmd_button->setSizePolicy(sizePolicy2);
        config_cmd_button->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_21->addWidget(config_cmd_button, 4, 2, 1, 1);


        gridLayout_22->addLayout(gridLayout_21, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_22->addItem(verticalSpacer, 1, 0, 1, 1);


        gridLayout_10->addWidget(frame_10, 3, 2, 1, 1);

        frame_7 = new QFrame(tab_3);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
""));
        frame_7->setFrameShape(QFrame::WinPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        gridLayout_15 = new QGridLayout(frame_7);
        gridLayout_15->setSpacing(3);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setContentsMargins(3, 3, 3, 3);
        gridLayout_14 = new QGridLayout();
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        lineEdit_FanDuty = new QLineEdit(frame_7);
        lineEdit_FanDuty->setObjectName(QString::fromUtf8("lineEdit_FanDuty"));
        sizePolicy2.setHeightForWidth(lineEdit_FanDuty->sizePolicy().hasHeightForWidth());
        lineEdit_FanDuty->setSizePolicy(sizePolicy2);
        lineEdit_FanDuty->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_14->addWidget(lineEdit_FanDuty, 4, 1, 1, 1);

        label_32 = new QLabel(frame_7);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_14->addWidget(label_32, 5, 0, 1, 1);

        lineEdit_TempDriver100 = new QLineEdit(frame_7);
        lineEdit_TempDriver100->setObjectName(QString::fromUtf8("lineEdit_TempDriver100"));
        sizePolicy2.setHeightForWidth(lineEdit_TempDriver100->sizePolicy().hasHeightForWidth());
        lineEdit_TempDriver100->setSizePolicy(sizePolicy2);
        lineEdit_TempDriver100->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_14->addWidget(lineEdit_TempDriver100, 6, 1, 1, 1);

        label_29 = new QLabel(frame_7);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_14->addWidget(label_29, 2, 0, 1, 1);

        lineEdit_TempLed100_1 = new QLineEdit(frame_7);
        lineEdit_TempLed100_1->setObjectName(QString::fromUtf8("lineEdit_TempLed100_1"));
        sizePolicy2.setHeightForWidth(lineEdit_TempLed100_1->sizePolicy().hasHeightForWidth());
        lineEdit_TempLed100_1->setSizePolicy(sizePolicy2);
        lineEdit_TempLed100_1->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_14->addWidget(lineEdit_TempLed100_1, 1, 1, 1, 1);

        label_30 = new QLabel(frame_7);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_14->addWidget(label_30, 3, 0, 1, 1);

        lineEdit_Vin = new QLineEdit(frame_7);
        lineEdit_Vin->setObjectName(QString::fromUtf8("lineEdit_Vin"));
        sizePolicy2.setHeightForWidth(lineEdit_Vin->sizePolicy().hasHeightForWidth());
        lineEdit_Vin->setSizePolicy(sizePolicy2);
        lineEdit_Vin->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_14->addWidget(lineEdit_Vin, 3, 1, 1, 1);

        label_27 = new QLabel(frame_7);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setFont(font);
        label_27->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(label_27, 0, 0, 1, 2);

        label_28 = new QLabel(frame_7);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_14->addWidget(label_28, 1, 0, 1, 1);

        lineEdit_FanRPM = new QLineEdit(frame_7);
        lineEdit_FanRPM->setObjectName(QString::fromUtf8("lineEdit_FanRPM"));
        sizePolicy2.setHeightForWidth(lineEdit_FanRPM->sizePolicy().hasHeightForWidth());
        lineEdit_FanRPM->setSizePolicy(sizePolicy2);
        lineEdit_FanRPM->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_14->addWidget(lineEdit_FanRPM, 5, 1, 1, 1);

        pushButton_RamDiagnosis = new QPushButton(frame_7);
        pushButton_RamDiagnosis->setObjectName(QString::fromUtf8("pushButton_RamDiagnosis"));
        sizePolicy2.setHeightForWidth(pushButton_RamDiagnosis->sizePolicy().hasHeightForWidth());
        pushButton_RamDiagnosis->setSizePolicy(sizePolicy2);
        pushButton_RamDiagnosis->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_14->addWidget(pushButton_RamDiagnosis, 8, 1, 1, 1);

        label_33 = new QLabel(frame_7);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout_14->addWidget(label_33, 6, 0, 1, 1);

        label_31 = new QLabel(frame_7);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_14->addWidget(label_31, 4, 0, 1, 1);

        lineEdit_TempLed100_2 = new QLineEdit(frame_7);
        lineEdit_TempLed100_2->setObjectName(QString::fromUtf8("lineEdit_TempLed100_2"));
        sizePolicy2.setHeightForWidth(lineEdit_TempLed100_2->sizePolicy().hasHeightForWidth());
        lineEdit_TempLed100_2->setSizePolicy(sizePolicy2);
        lineEdit_TempLed100_2->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_14->addWidget(lineEdit_TempLed100_2, 2, 1, 1, 1);

        lineEdit_HumidityDriver100 = new QLineEdit(frame_7);
        lineEdit_HumidityDriver100->setObjectName(QString::fromUtf8("lineEdit_HumidityDriver100"));
        sizePolicy2.setHeightForWidth(lineEdit_HumidityDriver100->sizePolicy().hasHeightForWidth());
        lineEdit_HumidityDriver100->setSizePolicy(sizePolicy2);
        lineEdit_HumidityDriver100->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_14->addWidget(lineEdit_HumidityDriver100, 7, 1, 1, 1);

        label_57 = new QLabel(frame_7);
        label_57->setObjectName(QString::fromUtf8("label_57"));

        gridLayout_14->addWidget(label_57, 7, 0, 1, 1);


        gridLayout_15->addLayout(gridLayout_14, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_15->addItem(verticalSpacer_3, 1, 0, 1, 1);


        gridLayout_10->addWidget(frame_7, 0, 1, 2, 1);

        frame_5 = new QFrame(tab_3);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
""));
        frame_5->setFrameShape(QFrame::WinPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout_24 = new QGridLayout(frame_5);
        gridLayout_24->setSpacing(3);
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        gridLayout_24->setContentsMargins(3, 3, 3, 3);
        gridLayout_23 = new QGridLayout();
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        label_81 = new QLabel(frame_5);
        label_81->setObjectName(QString::fromUtf8("label_81"));

        gridLayout_23->addWidget(label_81, 8, 0, 1, 1);

        warning_1 = new QCheckBox(frame_5);
        warning_1->setObjectName(QString::fromUtf8("warning_1"));
        sizePolicy2.setHeightForWidth(warning_1->sizePolicy().hasHeightForWidth());
        warning_1->setSizePolicy(sizePolicy2);
        warning_1->setCheckable(false);

        gridLayout_23->addWidget(warning_1, 1, 3, 1, 1);

        label_86 = new QLabel(frame_5);
        label_86->setObjectName(QString::fromUtf8("label_86"));

        gridLayout_23->addWidget(label_86, 3, 2, 1, 1);

        fault_2 = new QCheckBox(frame_5);
        fault_2->setObjectName(QString::fromUtf8("fault_2"));
        sizePolicy2.setHeightForWidth(fault_2->sizePolicy().hasHeightForWidth());
        fault_2->setSizePolicy(sizePolicy2);
        fault_2->setCheckable(false);

        gridLayout_23->addWidget(fault_2, 2, 1, 1, 1);

        label_77 = new QLabel(frame_5);
        label_77->setObjectName(QString::fromUtf8("label_77"));

        gridLayout_23->addWidget(label_77, 3, 0, 1, 1);

        warning_4 = new QCheckBox(frame_5);
        warning_4->setObjectName(QString::fromUtf8("warning_4"));
        sizePolicy2.setHeightForWidth(warning_4->sizePolicy().hasHeightForWidth());
        warning_4->setSizePolicy(sizePolicy2);
        warning_4->setCheckable(false);

        gridLayout_23->addWidget(warning_4, 4, 3, 1, 1);

        label_84 = new QLabel(frame_5);
        label_84->setObjectName(QString::fromUtf8("label_84"));

        gridLayout_23->addWidget(label_84, 5, 2, 1, 1);

        label_80 = new QLabel(frame_5);
        label_80->setObjectName(QString::fromUtf8("label_80"));

        gridLayout_23->addWidget(label_80, 6, 0, 1, 1);

        label_73 = new QLabel(frame_5);
        label_73->setObjectName(QString::fromUtf8("label_73"));
        label_73->setFont(font);
        label_73->setAlignment(Qt::AlignCenter);

        gridLayout_23->addWidget(label_73, 0, 2, 1, 1);

        fault_4 = new QCheckBox(frame_5);
        fault_4->setObjectName(QString::fromUtf8("fault_4"));
        sizePolicy2.setHeightForWidth(fault_4->sizePolicy().hasHeightForWidth());
        fault_4->setSizePolicy(sizePolicy2);
        fault_4->setCheckable(false);

        gridLayout_23->addWidget(fault_4, 4, 1, 1, 1);

        label_75 = new QLabel(frame_5);
        label_75->setObjectName(QString::fromUtf8("label_75"));

        gridLayout_23->addWidget(label_75, 1, 2, 1, 1);

        label_79 = new QLabel(frame_5);
        label_79->setObjectName(QString::fromUtf8("label_79"));

        gridLayout_23->addWidget(label_79, 5, 0, 1, 1);

        fault_3 = new QCheckBox(frame_5);
        fault_3->setObjectName(QString::fromUtf8("fault_3"));
        sizePolicy2.setHeightForWidth(fault_3->sizePolicy().hasHeightForWidth());
        fault_3->setSizePolicy(sizePolicy2);
        fault_3->setCheckable(false);

        gridLayout_23->addWidget(fault_3, 3, 1, 1, 1);

        warning_3 = new QCheckBox(frame_5);
        warning_3->setObjectName(QString::fromUtf8("warning_3"));
        sizePolicy2.setHeightForWidth(warning_3->sizePolicy().hasHeightForWidth());
        warning_3->setSizePolicy(sizePolicy2);
        warning_3->setCheckable(false);

        gridLayout_23->addWidget(warning_3, 3, 3, 1, 1);

        fault_7 = new QCheckBox(frame_5);
        fault_7->setObjectName(QString::fromUtf8("fault_7"));
        sizePolicy2.setHeightForWidth(fault_7->sizePolicy().hasHeightForWidth());
        fault_7->setSizePolicy(sizePolicy2);
        fault_7->setCheckable(false);

        gridLayout_23->addWidget(fault_7, 8, 1, 1, 1);

        fault_6 = new QCheckBox(frame_5);
        fault_6->setObjectName(QString::fromUtf8("fault_6"));
        sizePolicy2.setHeightForWidth(fault_6->sizePolicy().hasHeightForWidth());
        fault_6->setSizePolicy(sizePolicy2);
        fault_6->setCheckable(false);

        gridLayout_23->addWidget(fault_6, 6, 1, 1, 1);

        label_83 = new QLabel(frame_5);
        label_83->setObjectName(QString::fromUtf8("label_83"));

        gridLayout_23->addWidget(label_83, 4, 2, 1, 1);

        warning_2 = new QCheckBox(frame_5);
        warning_2->setObjectName(QString::fromUtf8("warning_2"));
        sizePolicy2.setHeightForWidth(warning_2->sizePolicy().hasHeightForWidth());
        warning_2->setSizePolicy(sizePolicy2);
        warning_2->setCheckable(false);

        gridLayout_23->addWidget(warning_2, 2, 3, 1, 1);

        label_76 = new QLabel(frame_5);
        label_76->setObjectName(QString::fromUtf8("label_76"));

        gridLayout_23->addWidget(label_76, 2, 0, 1, 1);

        warning_5 = new QCheckBox(frame_5);
        warning_5->setObjectName(QString::fromUtf8("warning_5"));
        sizePolicy2.setHeightForWidth(warning_5->sizePolicy().hasHeightForWidth());
        warning_5->setSizePolicy(sizePolicy2);
        warning_5->setCheckable(false);

        gridLayout_23->addWidget(warning_5, 5, 3, 1, 1);

        label_85 = new QLabel(frame_5);
        label_85->setObjectName(QString::fromUtf8("label_85"));

        gridLayout_23->addWidget(label_85, 6, 2, 1, 1);

        warning_6 = new QCheckBox(frame_5);
        warning_6->setObjectName(QString::fromUtf8("warning_6"));
        sizePolicy2.setHeightForWidth(warning_6->sizePolicy().hasHeightForWidth());
        warning_6->setSizePolicy(sizePolicy2);
        warning_6->setCheckable(false);

        gridLayout_23->addWidget(warning_6, 6, 3, 1, 1);

        fault_1 = new QCheckBox(frame_5);
        fault_1->setObjectName(QString::fromUtf8("fault_1"));
        sizePolicy2.setHeightForWidth(fault_1->sizePolicy().hasHeightForWidth());
        fault_1->setSizePolicy(sizePolicy2);
        fault_1->setCheckable(false);

        gridLayout_23->addWidget(fault_1, 1, 1, 1, 1);

        label_74 = new QLabel(frame_5);
        label_74->setObjectName(QString::fromUtf8("label_74"));

        gridLayout_23->addWidget(label_74, 1, 0, 1, 1);

        label_82 = new QLabel(frame_5);
        label_82->setObjectName(QString::fromUtf8("label_82"));

        gridLayout_23->addWidget(label_82, 2, 2, 1, 1);

        fault_5 = new QCheckBox(frame_5);
        fault_5->setObjectName(QString::fromUtf8("fault_5"));
        sizePolicy2.setHeightForWidth(fault_5->sizePolicy().hasHeightForWidth());
        fault_5->setSizePolicy(sizePolicy2);
        fault_5->setCheckable(false);

        gridLayout_23->addWidget(fault_5, 5, 1, 1, 1);

        label_78 = new QLabel(frame_5);
        label_78->setObjectName(QString::fromUtf8("label_78"));

        gridLayout_23->addWidget(label_78, 4, 0, 1, 1);

        label_72 = new QLabel(frame_5);
        label_72->setObjectName(QString::fromUtf8("label_72"));
        label_72->setFont(font);
        label_72->setAlignment(Qt::AlignCenter);

        gridLayout_23->addWidget(label_72, 0, 0, 1, 1);

        label_87 = new QLabel(frame_5);
        label_87->setObjectName(QString::fromUtf8("label_87"));

        gridLayout_23->addWidget(label_87, 9, 0, 1, 2);

        Fault_warning = new QPushButton(frame_5);
        Fault_warning->setObjectName(QString::fromUtf8("Fault_warning"));
        sizePolicy2.setHeightForWidth(Fault_warning->sizePolicy().hasHeightForWidth());
        Fault_warning->setSizePolicy(sizePolicy2);
        Fault_warning->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_23->addWidget(Fault_warning, 8, 2, 1, 2);

        update_read_faults = new QPushButton(frame_5);
        update_read_faults->setObjectName(QString::fromUtf8("update_read_faults"));
        sizePolicy2.setHeightForWidth(update_read_faults->sizePolicy().hasHeightForWidth());
        update_read_faults->setSizePolicy(sizePolicy2);
        update_read_faults->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_23->addWidget(update_read_faults, 9, 2, 1, 2);


        gridLayout_24->addLayout(gridLayout_23, 0, 0, 1, 1);


        gridLayout_10->addWidget(frame_5, 0, 3, 2, 1);

        frame_8 = new QFrame(tab_3);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
""));
        frame_8->setFrameShape(QFrame::WinPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        gridLayout_13 = new QGridLayout(frame_8);
        gridLayout_13->setSpacing(3);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(3, 3, 3, 3);
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(verticalSpacer_4, 1, 0, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        lineEdit_LedTempWar_write = new QLineEdit(frame_8);
        lineEdit_LedTempWar_write->setObjectName(QString::fromUtf8("lineEdit_LedTempWar_write"));
        sizePolicy2.setHeightForWidth(lineEdit_LedTempWar_write->sizePolicy().hasHeightForWidth());
        lineEdit_LedTempWar_write->setSizePolicy(sizePolicy2);
        lineEdit_LedTempWar_write->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayout_12->addWidget(lineEdit_LedTempWar_write, 7, 2, 1, 1);

        lineEdit_DeadTime10_read = new QLineEdit(frame_8);
        lineEdit_DeadTime10_read->setObjectName(QString::fromUtf8("lineEdit_DeadTime10_read"));
        sizePolicy2.setHeightForWidth(lineEdit_DeadTime10_read->sizePolicy().hasHeightForWidth());
        lineEdit_DeadTime10_read->setSizePolicy(sizePolicy2);
        lineEdit_DeadTime10_read->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_12->addWidget(lineEdit_DeadTime10_read, 12, 3, 1, 1);

        lineEdit_LedCycleTime_write = new QLineEdit(frame_8);
        lineEdit_LedCycleTime_write->setObjectName(QString::fromUtf8("lineEdit_LedCycleTime_write"));
        sizePolicy2.setHeightForWidth(lineEdit_LedCycleTime_write->sizePolicy().hasHeightForWidth());
        lineEdit_LedCycleTime_write->setSizePolicy(sizePolicy2);
        lineEdit_LedCycleTime_write->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayout_12->addWidget(lineEdit_LedCycleTime_write, 3, 2, 1, 1);

        checkBox_LedCycleTime = new QCheckBox(frame_8);
        checkBox_LedCycleTime->setObjectName(QString::fromUtf8("checkBox_LedCycleTime"));
        sizePolicy2.setHeightForWidth(checkBox_LedCycleTime->sizePolicy().hasHeightForWidth());
        checkBox_LedCycleTime->setSizePolicy(sizePolicy2);

        gridLayout_12->addWidget(checkBox_LedCycleTime, 3, 1, 1, 1);

        LedMicroCycleTimeLineEdit_write = new QLineEdit(frame_8);
        LedMicroCycleTimeLineEdit_write->setObjectName(QString::fromUtf8("LedMicroCycleTimeLineEdit_write"));
        sizePolicy2.setHeightForWidth(LedMicroCycleTimeLineEdit_write->sizePolicy().hasHeightForWidth());
        LedMicroCycleTimeLineEdit_write->setSizePolicy(sizePolicy2);
        LedMicroCycleTimeLineEdit_write->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayout_12->addWidget(LedMicroCycleTimeLineEdit_write, 2, 2, 1, 1);

        LedMicroCycleTimeLineEdit_read = new QLineEdit(frame_8);
        LedMicroCycleTimeLineEdit_read->setObjectName(QString::fromUtf8("LedMicroCycleTimeLineEdit_read"));
        sizePolicy2.setHeightForWidth(LedMicroCycleTimeLineEdit_read->sizePolicy().hasHeightForWidth());
        LedMicroCycleTimeLineEdit_read->setSizePolicy(sizePolicy2);
        LedMicroCycleTimeLineEdit_read->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_12->addWidget(LedMicroCycleTimeLineEdit_read, 2, 3, 1, 1);

        lineEdit_LedCycleTime_read = new QLineEdit(frame_8);
        lineEdit_LedCycleTime_read->setObjectName(QString::fromUtf8("lineEdit_LedCycleTime_read"));
        sizePolicy2.setHeightForWidth(lineEdit_LedCycleTime_read->sizePolicy().hasHeightForWidth());
        lineEdit_LedCycleTime_read->setSizePolicy(sizePolicy2);
        lineEdit_LedCycleTime_read->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_12->addWidget(lineEdit_LedCycleTime_read, 3, 3, 1, 1);

        checkBox_LedTempWar = new QCheckBox(frame_8);
        checkBox_LedTempWar->setObjectName(QString::fromUtf8("checkBox_LedTempWar"));
        sizePolicy2.setHeightForWidth(checkBox_LedTempWar->sizePolicy().hasHeightForWidth());
        checkBox_LedTempWar->setSizePolicy(sizePolicy2);

        gridLayout_12->addWidget(checkBox_LedTempWar, 7, 1, 1, 1);

        lineEdit_SyncMode_write = new QLineEdit(frame_8);
        lineEdit_SyncMode_write->setObjectName(QString::fromUtf8("lineEdit_SyncMode_write"));
        sizePolicy2.setHeightForWidth(lineEdit_SyncMode_write->sizePolicy().hasHeightForWidth());
        lineEdit_SyncMode_write->setSizePolicy(sizePolicy2);
        lineEdit_SyncMode_write->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayout_12->addWidget(lineEdit_SyncMode_write, 11, 2, 1, 1);

        fantempmax_lable = new QLabel(frame_8);
        fantempmax_lable->setObjectName(QString::fromUtf8("fantempmax_lable"));

        gridLayout_12->addWidget(fantempmax_lable, 6, 0, 1, 1);

        cycletime_lable = new QLabel(frame_8);
        cycletime_lable->setObjectName(QString::fromUtf8("cycletime_lable"));

        gridLayout_12->addWidget(cycletime_lable, 3, 0, 1, 1);

        suncmode_lable = new QLabel(frame_8);
        suncmode_lable->setObjectName(QString::fromUtf8("suncmode_lable"));

        gridLayout_12->addWidget(suncmode_lable, 11, 0, 1, 1);

        microCycle_lable = new QLabel(frame_8);
        microCycle_lable->setObjectName(QString::fromUtf8("microCycle_lable"));

        gridLayout_12->addWidget(microCycle_lable, 2, 0, 1, 1);

        LedCurrentSetpoint_readButton = new QPushButton(frame_8);
        LedCurrentSetpoint_readButton->setObjectName(QString::fromUtf8("LedCurrentSetpoint_readButton"));
        sizePolicy2.setHeightForWidth(LedCurrentSetpoint_readButton->sizePolicy().hasHeightForWidth());
        LedCurrentSetpoint_readButton->setSizePolicy(sizePolicy2);
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush21(QColor(0, 0, 0, 128));
        brush21.setStyle(Qt::NoBrush);
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush21);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush22(QColor(0, 0, 0, 128));
        brush22.setStyle(Qt::NoBrush);
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush22);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush23(QColor(0, 0, 0, 128));
        brush23.setStyle(Qt::NoBrush);
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush23);
        LedCurrentSetpoint_readButton->setPalette(palette6);
        LedCurrentSetpoint_readButton->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_12->addWidget(LedCurrentSetpoint_readButton, 17, 2, 1, 1);

        MicroCycleLedConfig_readButton = new QPushButton(frame_8);
        MicroCycleLedConfig_readButton->setObjectName(QString::fromUtf8("MicroCycleLedConfig_readButton"));
        sizePolicy2.setHeightForWidth(MicroCycleLedConfig_readButton->sizePolicy().hasHeightForWidth());
        MicroCycleLedConfig_readButton->setSizePolicy(sizePolicy2);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush24(QColor(0, 0, 0, 128));
        brush24.setStyle(Qt::NoBrush);
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush24);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush25(QColor(0, 0, 0, 128));
        brush25.setStyle(Qt::NoBrush);
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush25);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush26(QColor(0, 0, 0, 128));
        brush26.setStyle(Qt::NoBrush);
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush26);
        MicroCycleLedConfig_readButton->setPalette(palette7);
        MicroCycleLedConfig_readButton->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_12->addWidget(MicroCycleLedConfig_readButton, 16, 2, 1, 1);

        deglitching_lable = new QLabel(frame_8);
        deglitching_lable->setObjectName(QString::fromUtf8("deglitching_lable"));

        gridLayout_12->addWidget(deglitching_lable, 14, 0, 1, 1);

        lineEdit_LedTempWar_read = new QLineEdit(frame_8);
        lineEdit_LedTempWar_read->setObjectName(QString::fromUtf8("lineEdit_LedTempWar_read"));
        sizePolicy2.setHeightForWidth(lineEdit_LedTempWar_read->sizePolicy().hasHeightForWidth());
        lineEdit_LedTempWar_read->setSizePolicy(sizePolicy2);
        lineEdit_LedTempWar_read->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_12->addWidget(lineEdit_LedTempWar_read, 7, 3, 1, 1);

        lineEdit_DeglitchingEnable_read = new QLineEdit(frame_8);
        lineEdit_DeglitchingEnable_read->setObjectName(QString::fromUtf8("lineEdit_DeglitchingEnable_read"));
        sizePolicy2.setHeightForWidth(lineEdit_DeglitchingEnable_read->sizePolicy().hasHeightForWidth());
        lineEdit_DeglitchingEnable_read->setSizePolicy(sizePolicy2);
        lineEdit_DeglitchingEnable_read->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_12->addWidget(lineEdit_DeglitchingEnable_read, 14, 3, 1, 1);

        pushButton_WriteData = new QPushButton(frame_8);
        pushButton_WriteData->setObjectName(QString::fromUtf8("pushButton_WriteData"));
        sizePolicy2.setHeightForWidth(pushButton_WriteData->sizePolicy().hasHeightForWidth());
        pushButton_WriteData->setSizePolicy(sizePolicy2);
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush27(QColor(0, 0, 0, 128));
        brush27.setStyle(Qt::NoBrush);
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush27);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush28(QColor(0, 0, 0, 128));
        brush28.setStyle(Qt::NoBrush);
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush28);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush29(QColor(0, 0, 0, 128));
        brush29.setStyle(Qt::NoBrush);
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush29);
        pushButton_WriteData->setPalette(palette8);
        pushButton_WriteData->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_12->addWidget(pushButton_WriteData, 15, 2, 1, 1);

        fantempled_led = new QLabel(frame_8);
        fantempled_led->setObjectName(QString::fromUtf8("fantempled_led"));

        gridLayout_12->addWidget(fantempled_led, 5, 0, 1, 1);

        lineEdit_FanTempLedMax_write = new QLineEdit(frame_8);
        lineEdit_FanTempLedMax_write->setObjectName(QString::fromUtf8("lineEdit_FanTempLedMax_write"));
        sizePolicy2.setHeightForWidth(lineEdit_FanTempLedMax_write->sizePolicy().hasHeightForWidth());
        lineEdit_FanTempLedMax_write->setSizePolicy(sizePolicy2);
        lineEdit_FanTempLedMax_write->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayout_12->addWidget(lineEdit_FanTempLedMax_write, 6, 2, 1, 1);

        checkBox_FanTempLedMin = new QCheckBox(frame_8);
        checkBox_FanTempLedMin->setObjectName(QString::fromUtf8("checkBox_FanTempLedMin"));
        sizePolicy2.setHeightForWidth(checkBox_FanTempLedMin->sizePolicy().hasHeightForWidth());
        checkBox_FanTempLedMin->setSizePolicy(sizePolicy2);

        gridLayout_12->addWidget(checkBox_FanTempLedMin, 5, 1, 1, 1);

        lineEdit_DeglitchingEnable_write = new QLineEdit(frame_8);
        lineEdit_DeglitchingEnable_write->setObjectName(QString::fromUtf8("lineEdit_DeglitchingEnable_write"));
        sizePolicy2.setHeightForWidth(lineEdit_DeglitchingEnable_write->sizePolicy().hasHeightForWidth());
        lineEdit_DeglitchingEnable_write->setSizePolicy(sizePolicy2);
        lineEdit_DeglitchingEnable_write->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayout_12->addWidget(lineEdit_DeglitchingEnable_write, 14, 2, 1, 1);

        label_24 = new QLabel(frame_8);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_12->addWidget(label_24, 17, 0, 1, 1);

        lineEdit_NumMicroCycles_read = new QLineEdit(frame_8);
        lineEdit_NumMicroCycles_read->setObjectName(QString::fromUtf8("lineEdit_NumMicroCycles_read"));
        sizePolicy2.setHeightForWidth(lineEdit_NumMicroCycles_read->sizePolicy().hasHeightForWidth());
        lineEdit_NumMicroCycles_read->setSizePolicy(sizePolicy2);
        lineEdit_NumMicroCycles_read->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_12->addWidget(lineEdit_NumMicroCycles_read, 4, 3, 1, 1);

        lineEdit_DeadTime10_write = new QLineEdit(frame_8);
        lineEdit_DeadTime10_write->setObjectName(QString::fromUtf8("lineEdit_DeadTime10_write"));
        sizePolicy2.setHeightForWidth(lineEdit_DeadTime10_write->sizePolicy().hasHeightForWidth());
        lineEdit_DeadTime10_write->setSizePolicy(sizePolicy2);
        lineEdit_DeadTime10_write->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayout_12->addWidget(lineEdit_DeadTime10_write, 12, 2, 1, 1);

        lineEdit_NumMicroCycles_write = new QLineEdit(frame_8);
        lineEdit_NumMicroCycles_write->setObjectName(QString::fromUtf8("lineEdit_NumMicroCycles_write"));
        sizePolicy2.setHeightForWidth(lineEdit_NumMicroCycles_write->sizePolicy().hasHeightForWidth());
        lineEdit_NumMicroCycles_write->setSizePolicy(sizePolicy2);
        lineEdit_NumMicroCycles_write->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayout_12->addWidget(lineEdit_NumMicroCycles_write, 4, 2, 1, 1);

        lineEdit_SyncMode_read = new QLineEdit(frame_8);
        lineEdit_SyncMode_read->setObjectName(QString::fromUtf8("lineEdit_SyncMode_read"));
        sizePolicy2.setHeightForWidth(lineEdit_SyncMode_read->sizePolicy().hasHeightForWidth());
        lineEdit_SyncMode_read->setSizePolicy(sizePolicy2);
        lineEdit_SyncMode_read->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_12->addWidget(lineEdit_SyncMode_read, 11, 3, 1, 1);

        label_26 = new QLabel(frame_8);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_12->addWidget(label_26, 19, 0, 1, 1);

        LedMaxCurrentPulse_readButton = new QPushButton(frame_8);
        LedMaxCurrentPulse_readButton->setObjectName(QString::fromUtf8("LedMaxCurrentPulse_readButton"));
        sizePolicy2.setHeightForWidth(LedMaxCurrentPulse_readButton->sizePolicy().hasHeightForWidth());
        LedMaxCurrentPulse_readButton->setSizePolicy(sizePolicy2);
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush30(QColor(0, 0, 0, 128));
        brush30.setStyle(Qt::NoBrush);
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush30);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush31(QColor(0, 0, 0, 128));
        brush31.setStyle(Qt::NoBrush);
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush32(QColor(0, 0, 0, 128));
        brush32.setStyle(Qt::NoBrush);
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush32);
        LedMaxCurrentPulse_readButton->setPalette(palette9);
        LedMaxCurrentPulse_readButton->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_12->addWidget(LedMaxCurrentPulse_readButton, 18, 2, 1, 1);

        noofMicrocycle_label = new QLabel(frame_8);
        noofMicrocycle_label->setObjectName(QString::fromUtf8("noofMicrocycle_label"));

        gridLayout_12->addWidget(noofMicrocycle_label, 4, 0, 1, 1);

        lineEdit_FanTempLedMin_write = new QLineEdit(frame_8);
        lineEdit_FanTempLedMin_write->setObjectName(QString::fromUtf8("lineEdit_FanTempLedMin_write"));
        sizePolicy2.setHeightForWidth(lineEdit_FanTempLedMin_write->sizePolicy().hasHeightForWidth());
        lineEdit_FanTempLedMin_write->setSizePolicy(sizePolicy2);
        lineEdit_FanTempLedMin_write->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayout_12->addWidget(lineEdit_FanTempLedMin_write, 5, 2, 1, 1);

        label_25 = new QLabel(frame_8);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_12->addWidget(label_25, 18, 0, 1, 1);

        deadtime_label = new QLabel(frame_8);
        deadtime_label->setObjectName(QString::fromUtf8("deadtime_label"));

        gridLayout_12->addWidget(deadtime_label, 12, 0, 1, 1);

        comboBox_configuration = new QComboBox(frame_8);
        comboBox_configuration->addItem(QString());
        comboBox_configuration->addItem(QString());
        comboBox_configuration->setObjectName(QString::fromUtf8("comboBox_configuration"));
        sizePolicy2.setHeightForWidth(comboBox_configuration->sizePolicy().hasHeightForWidth());
        comboBox_configuration->setSizePolicy(sizePolicy2);
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush33(QColor(0, 0, 0, 128));
        brush33.setStyle(Qt::NoBrush);
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush33);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush34(QColor(0, 0, 0, 128));
        brush34.setStyle(Qt::NoBrush);
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush34);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush35(QColor(0, 0, 0, 128));
        brush35.setStyle(Qt::NoBrush);
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush35);
        comboBox_configuration->setPalette(palette10);
        comboBox_configuration->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_12->addWidget(comboBox_configuration, 1, 0, 1, 1);

        LedMaxCurrentContinuous_readButton = new QPushButton(frame_8);
        LedMaxCurrentContinuous_readButton->setObjectName(QString::fromUtf8("LedMaxCurrentContinuous_readButton"));
        sizePolicy2.setHeightForWidth(LedMaxCurrentContinuous_readButton->sizePolicy().hasHeightForWidth());
        LedMaxCurrentContinuous_readButton->setSizePolicy(sizePolicy2);
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush36(QColor(0, 0, 0, 128));
        brush36.setStyle(Qt::NoBrush);
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush36);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush37(QColor(0, 0, 0, 128));
        brush37.setStyle(Qt::NoBrush);
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush37);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush38(QColor(0, 0, 0, 128));
        brush38.setStyle(Qt::NoBrush);
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush38);
        LedMaxCurrentContinuous_readButton->setPalette(palette11);
        LedMaxCurrentContinuous_readButton->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_12->addWidget(LedMaxCurrentContinuous_readButton, 19, 2, 1, 1);

        label_12 = new QLabel(frame_8);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);
        label_12->setLayoutDirection(Qt::LeftToRight);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_12, 0, 0, 1, 4);

        checkBox_NumMicroCycles = new QCheckBox(frame_8);
        checkBox_NumMicroCycles->setObjectName(QString::fromUtf8("checkBox_NumMicroCycles"));
        sizePolicy2.setHeightForWidth(checkBox_NumMicroCycles->sizePolicy().hasHeightForWidth());
        checkBox_NumMicroCycles->setSizePolicy(sizePolicy2);

        gridLayout_12->addWidget(checkBox_NumMicroCycles, 4, 1, 1, 1);

        lineEdit_FanTempLedMin_read = new QLineEdit(frame_8);
        lineEdit_FanTempLedMin_read->setObjectName(QString::fromUtf8("lineEdit_FanTempLedMin_read"));
        sizePolicy2.setHeightForWidth(lineEdit_FanTempLedMin_read->sizePolicy().hasHeightForWidth());
        lineEdit_FanTempLedMin_read->setSizePolicy(sizePolicy2);
        lineEdit_FanTempLedMin_read->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_12->addWidget(lineEdit_FanTempLedMin_read, 5, 3, 1, 1);

        pushButton_ReadData = new QPushButton(frame_8);
        pushButton_ReadData->setObjectName(QString::fromUtf8("pushButton_ReadData"));
        sizePolicy2.setHeightForWidth(pushButton_ReadData->sizePolicy().hasHeightForWidth());
        pushButton_ReadData->setSizePolicy(sizePolicy2);
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush39(QColor(0, 0, 0, 128));
        brush39.setStyle(Qt::NoBrush);
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush39);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush40(QColor(0, 0, 0, 128));
        brush40.setStyle(Qt::NoBrush);
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush40);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush41(QColor(0, 0, 0, 128));
        brush41.setStyle(Qt::NoBrush);
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush41);
        pushButton_ReadData->setPalette(palette12);
        pushButton_ReadData->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_12->addWidget(pushButton_ReadData, 15, 3, 1, 1);

        lineEdit_FanTempLedMax_read = new QLineEdit(frame_8);
        lineEdit_FanTempLedMax_read->setObjectName(QString::fromUtf8("lineEdit_FanTempLedMax_read"));
        sizePolicy2.setHeightForWidth(lineEdit_FanTempLedMax_read->sizePolicy().hasHeightForWidth());
        lineEdit_FanTempLedMax_read->setSizePolicy(sizePolicy2);
        lineEdit_FanTempLedMax_read->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_12->addWidget(lineEdit_FanTempLedMax_read, 6, 3, 1, 1);

        checkBox_DeglitchingEnable = new QCheckBox(frame_8);
        checkBox_DeglitchingEnable->setObjectName(QString::fromUtf8("checkBox_DeglitchingEnable"));
        sizePolicy2.setHeightForWidth(checkBox_DeglitchingEnable->sizePolicy().hasHeightForWidth());
        checkBox_DeglitchingEnable->setSizePolicy(sizePolicy2);

        gridLayout_12->addWidget(checkBox_DeglitchingEnable, 14, 1, 1, 1);

        label_23 = new QLabel(frame_8);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_12->addWidget(label_23, 16, 0, 1, 1);

        checkBox_FanTempLedMax = new QCheckBox(frame_8);
        checkBox_FanTempLedMax->setObjectName(QString::fromUtf8("checkBox_FanTempLedMax"));
        sizePolicy2.setHeightForWidth(checkBox_FanTempLedMax->sizePolicy().hasHeightForWidth());
        checkBox_FanTempLedMax->setSizePolicy(sizePolicy2);

        gridLayout_12->addWidget(checkBox_FanTempLedMax, 6, 1, 1, 1);

        checkBox_LedMicroCycleTime = new QCheckBox(frame_8);
        checkBox_LedMicroCycleTime->setObjectName(QString::fromUtf8("checkBox_LedMicroCycleTime"));
        sizePolicy2.setHeightForWidth(checkBox_LedMicroCycleTime->sizePolicy().hasHeightForWidth());
        checkBox_LedMicroCycleTime->setSizePolicy(sizePolicy2);

        gridLayout_12->addWidget(checkBox_LedMicroCycleTime, 2, 1, 1, 1);

        ledwarning_lable = new QLabel(frame_8);
        ledwarning_lable->setObjectName(QString::fromUtf8("ledwarning_lable"));

        gridLayout_12->addWidget(ledwarning_lable, 7, 0, 1, 1);

        checkBox_SyncMode = new QCheckBox(frame_8);
        checkBox_SyncMode->setObjectName(QString::fromUtf8("checkBox_SyncMode"));
        sizePolicy2.setHeightForWidth(checkBox_SyncMode->sizePolicy().hasHeightForWidth());
        checkBox_SyncMode->setSizePolicy(sizePolicy2);

        gridLayout_12->addWidget(checkBox_SyncMode, 11, 1, 1, 1);

        checkBox_DeadTime10 = new QCheckBox(frame_8);
        checkBox_DeadTime10->setObjectName(QString::fromUtf8("checkBox_DeadTime10"));
        sizePolicy2.setHeightForWidth(checkBox_DeadTime10->sizePolicy().hasHeightForWidth());
        checkBox_DeadTime10->setSizePolicy(sizePolicy2);

        gridLayout_12->addWidget(checkBox_DeadTime10, 12, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_12, 0, 0, 1, 1);


        gridLayout_10->addWidget(frame_8, 0, 0, 4, 1);

        frame_6 = new QFrame(tab_3);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
""));
        frame_6->setFrameShape(QFrame::WinPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        gridLayout_19 = new QGridLayout(frame_6);
        gridLayout_19->setSpacing(3);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        gridLayout_19->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_19->setContentsMargins(3, 3, 3, 3);
        gridLayout_18 = new QGridLayout();
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        gridLayout_18->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_42 = new QLabel(frame_6);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setFont(font);
        label_42->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(label_42, 0, 0, 1, 2);

        label_48 = new QLabel(frame_6);
        label_48->setObjectName(QString::fromUtf8("label_48"));

        gridLayout_18->addWidget(label_48, 7, 0, 1, 1);

        FaultTempled100_4 = new QLineEdit(frame_6);
        FaultTempled100_4->setObjectName(QString::fromUtf8("FaultTempled100_4"));
        sizePolicy2.setHeightForWidth(FaultTempled100_4->sizePolicy().hasHeightForWidth());
        FaultTempled100_4->setSizePolicy(sizePolicy2);
        FaultTempled100_4->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_18->addWidget(FaultTempled100_4, 11, 1, 1, 1);

        pushButton_FlashFault = new QPushButton(frame_6);
        pushButton_FlashFault->setObjectName(QString::fromUtf8("pushButton_FlashFault"));
        sizePolicy2.setHeightForWidth(pushButton_FlashFault->sizePolicy().hasHeightForWidth());
        pushButton_FlashFault->setSizePolicy(sizePolicy2);
        pushButton_FlashFault->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_18->addWidget(pushButton_FlashFault, 4, 1, 1, 1);

        label_53 = new QLabel(frame_6);
        label_53->setObjectName(QString::fromUtf8("label_53"));

        gridLayout_18->addWidget(label_53, 12, 0, 1, 1);

        label_45 = new QLabel(frame_6);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        gridLayout_18->addWidget(label_45, 3, 0, 1, 1);

        label_54 = new QLabel(frame_6);
        label_54->setObjectName(QString::fromUtf8("label_54"));

        gridLayout_18->addWidget(label_54, 13, 0, 1, 1);

        FaultVin_2 = new QLineEdit(frame_6);
        FaultVin_2->setObjectName(QString::fromUtf8("FaultVin_2"));
        sizePolicy2.setHeightForWidth(FaultVin_2->sizePolicy().hasHeightForWidth());
        FaultVin_2->setSizePolicy(sizePolicy2);
        FaultVin_2->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_18->addWidget(FaultVin_2, 9, 1, 1, 1);

        lineEdit_FaultFIFO_WR_Pointer = new QLineEdit(frame_6);
        lineEdit_FaultFIFO_WR_Pointer->setObjectName(QString::fromUtf8("lineEdit_FaultFIFO_WR_Pointer"));
        sizePolicy2.setHeightForWidth(lineEdit_FaultFIFO_WR_Pointer->sizePolicy().hasHeightForWidth());
        lineEdit_FaultFIFO_WR_Pointer->setSizePolicy(sizePolicy2);
        lineEdit_FaultFIFO_WR_Pointer->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_18->addWidget(lineEdit_FaultFIFO_WR_Pointer, 2, 1, 1, 1);

        label_47 = new QLabel(frame_6);
        label_47->setObjectName(QString::fromUtf8("label_47"));

        gridLayout_18->addWidget(label_47, 6, 0, 1, 1);

        label_43 = new QLabel(frame_6);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        gridLayout_18->addWidget(label_43, 1, 0, 1, 1);

        label_44 = new QLabel(frame_6);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        gridLayout_18->addWidget(label_44, 2, 0, 1, 1);

        label_50 = new QLabel(frame_6);
        label_50->setObjectName(QString::fromUtf8("label_50"));

        gridLayout_18->addWidget(label_50, 9, 0, 1, 1);

        FaultHumidityDriver100_2 = new QLineEdit(frame_6);
        FaultHumidityDriver100_2->setObjectName(QString::fromUtf8("FaultHumidityDriver100_2"));
        sizePolicy2.setHeightForWidth(FaultHumidityDriver100_2->sizePolicy().hasHeightForWidth());
        FaultHumidityDriver100_2->setSizePolicy(sizePolicy2);
        FaultHumidityDriver100_2->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_18->addWidget(FaultHumidityDriver100_2, 13, 1, 1, 1);

        label_58 = new QLabel(frame_6);
        label_58->setObjectName(QString::fromUtf8("label_58"));

        gridLayout_18->addWidget(label_58, 14, 0, 1, 1);

        faultcurrent_read_2 = new QLineEdit(frame_6);
        faultcurrent_read_2->setObjectName(QString::fromUtf8("faultcurrent_read_2"));
        sizePolicy2.setHeightForWidth(faultcurrent_read_2->sizePolicy().hasHeightForWidth());
        faultcurrent_read_2->setSizePolicy(sizePolicy2);
        faultcurrent_read_2->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_18->addWidget(faultcurrent_read_2, 8, 1, 1, 1);

        lineEdit_FaultFifoNumEvents = new QLineEdit(frame_6);
        lineEdit_FaultFifoNumEvents->setObjectName(QString::fromUtf8("lineEdit_FaultFifoNumEvents"));
        sizePolicy2.setHeightForWidth(lineEdit_FaultFifoNumEvents->sizePolicy().hasHeightForWidth());
        lineEdit_FaultFifoNumEvents->setSizePolicy(sizePolicy2);
        lineEdit_FaultFifoNumEvents->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_18->addWidget(lineEdit_FaultFifoNumEvents, 3, 1, 1, 1);

        fifo_numevent_Enter = new QLineEdit(frame_6);
        fifo_numevent_Enter->setObjectName(QString::fromUtf8("fifo_numevent_Enter"));
        sizePolicy2.setHeightForWidth(fifo_numevent_Enter->sizePolicy().hasHeightForWidth());
        fifo_numevent_Enter->setSizePolicy(sizePolicy2);
        fifo_numevent_Enter->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
""));

        gridLayout_18->addWidget(fifo_numevent_Enter, 5, 1, 1, 1);

        label_46 = new QLabel(frame_6);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        gridLayout_18->addWidget(label_46, 5, 0, 1, 1);

        label_51 = new QLabel(frame_6);
        label_51->setObjectName(QString::fromUtf8("label_51"));

        gridLayout_18->addWidget(label_51, 10, 0, 1, 1);

        TimeStamp_2 = new QLineEdit(frame_6);
        TimeStamp_2->setObjectName(QString::fromUtf8("TimeStamp_2"));
        sizePolicy2.setHeightForWidth(TimeStamp_2->sizePolicy().hasHeightForWidth());
        TimeStamp_2->setSizePolicy(sizePolicy2);
        TimeStamp_2->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_18->addWidget(TimeStamp_2, 14, 1, 1, 1);

        label_49 = new QLabel(frame_6);
        label_49->setObjectName(QString::fromUtf8("label_49"));

        gridLayout_18->addWidget(label_49, 8, 0, 1, 1);

        pushButton_eventReadIndex_5 = new QPushButton(frame_6);
        pushButton_eventReadIndex_5->setObjectName(QString::fromUtf8("pushButton_eventReadIndex_5"));
        sizePolicy2.setHeightForWidth(pushButton_eventReadIndex_5->sizePolicy().hasHeightForWidth());
        pushButton_eventReadIndex_5->setSizePolicy(sizePolicy2);
        pushButton_eventReadIndex_5->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_18->addWidget(pushButton_eventReadIndex_5, 15, 1, 1, 1);

        fault_Id_2 = new QLineEdit(frame_6);
        fault_Id_2->setObjectName(QString::fromUtf8("fault_Id_2"));
        sizePolicy2.setHeightForWidth(fault_Id_2->sizePolicy().hasHeightForWidth());
        fault_Id_2->setSizePolicy(sizePolicy2);
        fault_Id_2->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_18->addWidget(fault_Id_2, 7, 1, 1, 1);

        fault_fifo_2 = new QLineEdit(frame_6);
        fault_fifo_2->setObjectName(QString::fromUtf8("fault_fifo_2"));
        sizePolicy2.setHeightForWidth(fault_fifo_2->sizePolicy().hasHeightForWidth());
        fault_fifo_2->setSizePolicy(sizePolicy2);
        fault_fifo_2->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_18->addWidget(fault_fifo_2, 6, 1, 1, 1);

        FaultTempDriver100_2 = new QLineEdit(frame_6);
        FaultTempDriver100_2->setObjectName(QString::fromUtf8("FaultTempDriver100_2"));
        sizePolicy2.setHeightForWidth(FaultTempDriver100_2->sizePolicy().hasHeightForWidth());
        FaultTempDriver100_2->setSizePolicy(sizePolicy2);
        FaultTempDriver100_2->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_18->addWidget(FaultTempDriver100_2, 12, 1, 1, 1);

        FaultTempled100_3 = new QLineEdit(frame_6);
        FaultTempled100_3->setObjectName(QString::fromUtf8("FaultTempled100_3"));
        sizePolicy2.setHeightForWidth(FaultTempled100_3->sizePolicy().hasHeightForWidth());
        FaultTempled100_3->setSizePolicy(sizePolicy2);
        FaultTempled100_3->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_18->addWidget(FaultTempled100_3, 10, 1, 1, 1);

        label_52 = new QLabel(frame_6);
        label_52->setObjectName(QString::fromUtf8("label_52"));

        gridLayout_18->addWidget(label_52, 11, 0, 1, 1);

        Fault_fifo_reset_btn = new QPushButton(frame_6);
        Fault_fifo_reset_btn->setObjectName(QString::fromUtf8("Fault_fifo_reset_btn"));
        sizePolicy2.setHeightForWidth(Fault_fifo_reset_btn->sizePolicy().hasHeightForWidth());
        Fault_fifo_reset_btn->setSizePolicy(sizePolicy2);
        Fault_fifo_reset_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_18->addWidget(Fault_fifo_reset_btn, 15, 0, 1, 1);


        gridLayout_19->addLayout(gridLayout_18, 0, 0, 1, 1);


        gridLayout_10->addWidget(frame_6, 0, 2, 3, 1);

        frame_11 = new QFrame(tab_3);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
""));
        frame_11->setFrameShape(QFrame::WinPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        gridLayout_27 = new QGridLayout(frame_11);
        gridLayout_27->setSpacing(3);
        gridLayout_27->setObjectName(QString::fromUtf8("gridLayout_27"));
        gridLayout_27->setContentsMargins(3, 3, 3, 3);
        gridLayout_26 = new QGridLayout();
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        RawDataCLear = new QPushButton(frame_11);
        RawDataCLear->setObjectName(QString::fromUtf8("RawDataCLear"));
        sizePolicy2.setHeightForWidth(RawDataCLear->sizePolicy().hasHeightForWidth());
        RawDataCLear->setSizePolicy(sizePolicy2);
        RawDataCLear->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_26->addWidget(RawDataCLear, 1, 1, 1, 1);

        rawData = new QPlainTextEdit(frame_11);
        rawData->setObjectName(QString::fromUtf8("rawData"));
        sizePolicy2.setHeightForWidth(rawData->sizePolicy().hasHeightForWidth());
        rawData->setSizePolicy(sizePolicy2);
        rawData->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));

        gridLayout_26->addWidget(rawData, 2, 0, 1, 2);

        label_104 = new QLabel(frame_11);
        label_104->setObjectName(QString::fromUtf8("label_104"));
        label_104->setFont(font);
        label_104->setAlignment(Qt::AlignCenter);

        gridLayout_26->addWidget(label_104, 0, 0, 1, 2);


        gridLayout_27->addLayout(gridLayout_26, 0, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_27->addItem(verticalSpacer_6, 1, 0, 1, 1);


        gridLayout_10->addWidget(frame_11, 2, 3, 2, 1);

        frame_9 = new QFrame(tab_3);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
""));
        frame_9->setFrameShape(QFrame::WinPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        gridLayout_17 = new QGridLayout(frame_9);
        gridLayout_17->setSpacing(3);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        gridLayout_17->setContentsMargins(3, 3, 3, 3);
        gridLayout_16 = new QGridLayout();
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        label_41 = new QLabel(frame_9);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        gridLayout_16->addWidget(label_41, 7, 0, 1, 1);

        label_39 = new QLabel(frame_9);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        gridLayout_16->addWidget(label_39, 5, 0, 1, 1);

        label_38 = new QLabel(frame_9);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        gridLayout_16->addWidget(label_38, 4, 0, 1, 1);

        lineEdit_Faults = new QLineEdit(frame_9);
        lineEdit_Faults->setObjectName(QString::fromUtf8("lineEdit_Faults"));
        sizePolicy2.setHeightForWidth(lineEdit_Faults->sizePolicy().hasHeightForWidth());
        lineEdit_Faults->setSizePolicy(sizePolicy2);
        lineEdit_Faults->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_16->addWidget(lineEdit_Faults, 1, 1, 1, 1);

        lineEdit_FaultTempLed100_2 = new QLineEdit(frame_9);
        lineEdit_FaultTempLed100_2->setObjectName(QString::fromUtf8("lineEdit_FaultTempLed100_2"));
        sizePolicy2.setHeightForWidth(lineEdit_FaultTempLed100_2->sizePolicy().hasHeightForWidth());
        lineEdit_FaultTempLed100_2->setSizePolicy(sizePolicy2);
        lineEdit_FaultTempLed100_2->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_16->addWidget(lineEdit_FaultTempLed100_2, 6, 1, 1, 1);

        lineEdit_FaultLedID = new QLineEdit(frame_9);
        lineEdit_FaultLedID->setObjectName(QString::fromUtf8("lineEdit_FaultLedID"));
        sizePolicy2.setHeightForWidth(lineEdit_FaultLedID->sizePolicy().hasHeightForWidth());
        lineEdit_FaultLedID->setSizePolicy(sizePolicy2);
        lineEdit_FaultLedID->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_16->addWidget(lineEdit_FaultLedID, 2, 1, 1, 1);

        label_37 = new QLabel(frame_9);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        gridLayout_16->addWidget(label_37, 3, 0, 1, 1);

        label_35 = new QLabel(frame_9);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        gridLayout_16->addWidget(label_35, 1, 0, 1, 1);

        label_40 = new QLabel(frame_9);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        gridLayout_16->addWidget(label_40, 6, 0, 1, 1);

        label_36 = new QLabel(frame_9);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        gridLayout_16->addWidget(label_36, 2, 0, 1, 1);

        lineEdit_FaultTempLed100_1 = new QLineEdit(frame_9);
        lineEdit_FaultTempLed100_1->setObjectName(QString::fromUtf8("lineEdit_FaultTempLed100_1"));
        sizePolicy2.setHeightForWidth(lineEdit_FaultTempLed100_1->sizePolicy().hasHeightForWidth());
        lineEdit_FaultTempLed100_1->setSizePolicy(sizePolicy2);
        lineEdit_FaultTempLed100_1->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_16->addWidget(lineEdit_FaultTempLed100_1, 5, 1, 1, 1);

        lineEdit_FaultCurrentSetPoint = new QLineEdit(frame_9);
        lineEdit_FaultCurrentSetPoint->setObjectName(QString::fromUtf8("lineEdit_FaultCurrentSetPoint"));
        sizePolicy2.setHeightForWidth(lineEdit_FaultCurrentSetPoint->sizePolicy().hasHeightForWidth());
        lineEdit_FaultCurrentSetPoint->setSizePolicy(sizePolicy2);
        lineEdit_FaultCurrentSetPoint->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_16->addWidget(lineEdit_FaultCurrentSetPoint, 3, 1, 1, 1);

        pushButton_Read_RamFault = new QPushButton(frame_9);
        pushButton_Read_RamFault->setObjectName(QString::fromUtf8("pushButton_Read_RamFault"));
        sizePolicy2.setHeightForWidth(pushButton_Read_RamFault->sizePolicy().hasHeightForWidth());
        pushButton_Read_RamFault->setSizePolicy(sizePolicy2);
        pushButton_Read_RamFault->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_16->addWidget(pushButton_Read_RamFault, 9, 1, 1, 1);

        lineEdit_TempDriver100_2 = new QLineEdit(frame_9);
        lineEdit_TempDriver100_2->setObjectName(QString::fromUtf8("lineEdit_TempDriver100_2"));
        sizePolicy2.setHeightForWidth(lineEdit_TempDriver100_2->sizePolicy().hasHeightForWidth());
        lineEdit_TempDriver100_2->setSizePolicy(sizePolicy2);
        lineEdit_TempDriver100_2->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_16->addWidget(lineEdit_TempDriver100_2, 7, 1, 1, 1);

        label_34 = new QLabel(frame_9);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setFont(font);
        label_34->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_34, 0, 0, 1, 2);

        lineEdit_FaultVin = new QLineEdit(frame_9);
        lineEdit_FaultVin->setObjectName(QString::fromUtf8("lineEdit_FaultVin"));
        sizePolicy2.setHeightForWidth(lineEdit_FaultVin->sizePolicy().hasHeightForWidth());
        lineEdit_FaultVin->setSizePolicy(sizePolicy2);
        lineEdit_FaultVin->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_16->addWidget(lineEdit_FaultVin, 4, 1, 1, 1);

        lineEdit_HumidityDriver100_2 = new QLineEdit(frame_9);
        lineEdit_HumidityDriver100_2->setObjectName(QString::fromUtf8("lineEdit_HumidityDriver100_2"));
        sizePolicy2.setHeightForWidth(lineEdit_HumidityDriver100_2->sizePolicy().hasHeightForWidth());
        lineEdit_HumidityDriver100_2->setSizePolicy(sizePolicy2);
        lineEdit_HumidityDriver100_2->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        gridLayout_16->addWidget(lineEdit_HumidityDriver100_2, 8, 1, 1, 1);

        label_61 = new QLabel(frame_9);
        label_61->setObjectName(QString::fromUtf8("label_61"));

        gridLayout_16->addWidget(label_61, 8, 0, 1, 1);


        gridLayout_17->addLayout(gridLayout_16, 0, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_17->addItem(verticalSpacer_5, 1, 0, 1, 1);


        gridLayout_10->addWidget(frame_9, 2, 1, 2, 1);


        gridLayout_11->addLayout(gridLayout_10, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_29 = new QGridLayout(tab_4);
        gridLayout_29->setObjectName(QString::fromUtf8("gridLayout_29"));
        frame_14 = new QFrame(tab_4);
        frame_14->setObjectName(QString::fromUtf8("frame_14"));
        frame_14->setStyleSheet(QString::fromUtf8("background-color: rgb(230,230,230);"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        gridLayout_33 = new QGridLayout(frame_14);
        gridLayout_33->setObjectName(QString::fromUtf8("gridLayout_33"));
        frame_16 = new QFrame(frame_14);
        frame_16->setObjectName(QString::fromUtf8("frame_16"));
        frame_16->setStyleSheet(QString::fromUtf8("background-color: rgb(230,230,230);"));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        gridLayout_35 = new QGridLayout(frame_16);
        gridLayout_35->setObjectName(QString::fromUtf8("gridLayout_35"));
        gridLayout_32 = new QGridLayout();
        gridLayout_32->setObjectName(QString::fromUtf8("gridLayout_32"));
        customLineEdit60 = new QLineEdit(frame_16);
        customLineEdit60->setObjectName(QString::fromUtf8("customLineEdit60"));
        sizePolicy2.setHeightForWidth(customLineEdit60->sizePolicy().hasHeightForWidth());
        customLineEdit60->setSizePolicy(sizePolicy2);
        customLineEdit60->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit60, 7, 4, 1, 1);

        customLineEdit100 = new QLineEdit(frame_16);
        customLineEdit100->setObjectName(QString::fromUtf8("customLineEdit100"));
        sizePolicy2.setHeightForWidth(customLineEdit100->sizePolicy().hasHeightForWidth());
        customLineEdit100->setSizePolicy(sizePolicy2);
        customLineEdit100->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit100, 8, 7, 1, 1);

        customLineEdit120 = new QLineEdit(frame_16);
        customLineEdit120->setObjectName(QString::fromUtf8("customLineEdit120"));
        sizePolicy2.setHeightForWidth(customLineEdit120->sizePolicy().hasHeightForWidth());
        customLineEdit120->setSizePolicy(sizePolicy2);
        customLineEdit120->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit120, 2, 9, 1, 1);

        customLineEdit107 = new QLineEdit(frame_16);
        customLineEdit107->setObjectName(QString::fromUtf8("customLineEdit107"));
        sizePolicy2.setHeightForWidth(customLineEdit107->sizePolicy().hasHeightForWidth());
        customLineEdit107->setSizePolicy(sizePolicy2);
        customLineEdit107->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit107, 2, 8, 1, 1);

        customLineEdit29 = new QLineEdit(frame_16);
        customLineEdit29->setObjectName(QString::fromUtf8("customLineEdit29"));
        sizePolicy2.setHeightForWidth(customLineEdit29->sizePolicy().hasHeightForWidth());
        customLineEdit29->setSizePolicy(sizePolicy2);
        customLineEdit29->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit29, 2, 2, 1, 1);

        customLineEdit113 = new QLineEdit(frame_16);
        customLineEdit113->setObjectName(QString::fromUtf8("customLineEdit113"));
        sizePolicy2.setHeightForWidth(customLineEdit113->sizePolicy().hasHeightForWidth());
        customLineEdit113->setSizePolicy(sizePolicy2);
        customLineEdit113->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit113, 8, 8, 1, 1);

        customLineEdit74 = new QLineEdit(frame_16);
        customLineEdit74->setObjectName(QString::fromUtf8("customLineEdit74"));
        sizePolicy2.setHeightForWidth(customLineEdit74->sizePolicy().hasHeightForWidth());
        customLineEdit74->setSizePolicy(sizePolicy2);
        customLineEdit74->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit74, 8, 5, 1, 1);

        customLineEdit25 = new QLineEdit(frame_16);
        customLineEdit25->setObjectName(QString::fromUtf8("customLineEdit25"));
        sizePolicy2.setHeightForWidth(customLineEdit25->sizePolicy().hasHeightForWidth());
        customLineEdit25->setSizePolicy(sizePolicy2);
        customLineEdit25->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit25, 11, 1, 1, 1);

        customLineEdit63 = new QLineEdit(frame_16);
        customLineEdit63->setObjectName(QString::fromUtf8("customLineEdit63"));
        sizePolicy2.setHeightForWidth(customLineEdit63->sizePolicy().hasHeightForWidth());
        customLineEdit63->setSizePolicy(sizePolicy2);
        customLineEdit63->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit63, 10, 4, 1, 1);

        customLineEdit75 = new QLineEdit(frame_16);
        customLineEdit75->setObjectName(QString::fromUtf8("customLineEdit75"));
        sizePolicy2.setHeightForWidth(customLineEdit75->sizePolicy().hasHeightForWidth());
        customLineEdit75->setSizePolicy(sizePolicy2);
        customLineEdit75->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit75, 9, 5, 1, 1);

        customLineEdit20 = new QLineEdit(frame_16);
        customLineEdit20->setObjectName(QString::fromUtf8("customLineEdit20"));
        sizePolicy2.setHeightForWidth(customLineEdit20->sizePolicy().hasHeightForWidth());
        customLineEdit20->setSizePolicy(sizePolicy2);
        customLineEdit20->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit20, 6, 1, 1, 1);

        customLineEdit77 = new QLineEdit(frame_16);
        customLineEdit77->setObjectName(QString::fromUtf8("customLineEdit77"));
        sizePolicy2.setHeightForWidth(customLineEdit77->sizePolicy().hasHeightForWidth());
        customLineEdit77->setSizePolicy(sizePolicy2);
        customLineEdit77->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit77, 11, 5, 1, 1);

        customLineEdit21 = new QLineEdit(frame_16);
        customLineEdit21->setObjectName(QString::fromUtf8("customLineEdit21"));
        sizePolicy2.setHeightForWidth(customLineEdit21->sizePolicy().hasHeightForWidth());
        customLineEdit21->setSizePolicy(sizePolicy2);
        customLineEdit21->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit21, 7, 1, 1, 1);

        customLineEdit44 = new QLineEdit(frame_16);
        customLineEdit44->setObjectName(QString::fromUtf8("customLineEdit44"));
        sizePolicy2.setHeightForWidth(customLineEdit44->sizePolicy().hasHeightForWidth());
        customLineEdit44->setSizePolicy(sizePolicy2);
        customLineEdit44->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit44, 4, 3, 1, 1);

        customLineEdit6 = new QLineEdit(frame_16);
        customLineEdit6->setObjectName(QString::fromUtf8("customLineEdit6"));
        sizePolicy2.setHeightForWidth(customLineEdit6->sizePolicy().hasHeightForWidth());
        customLineEdit6->setSizePolicy(sizePolicy2);
        customLineEdit6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit6, 5, 0, 1, 1);

        customLineEdit2 = new QLineEdit(frame_16);
        customLineEdit2->setObjectName(QString::fromUtf8("customLineEdit2"));
        sizePolicy2.setHeightForWidth(customLineEdit2->sizePolicy().hasHeightForWidth());
        customLineEdit2->setSizePolicy(sizePolicy2);
        customLineEdit2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit2, 1, 0, 1, 1);

        customLineEdit66 = new QLineEdit(frame_16);
        customLineEdit66->setObjectName(QString::fromUtf8("customLineEdit66"));
        sizePolicy2.setHeightForWidth(customLineEdit66->sizePolicy().hasHeightForWidth());
        customLineEdit66->setSizePolicy(sizePolicy2);
        customLineEdit66->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit66, 0, 5, 1, 1);

        customLineEdit41 = new QLineEdit(frame_16);
        customLineEdit41->setObjectName(QString::fromUtf8("customLineEdit41"));
        sizePolicy2.setHeightForWidth(customLineEdit41->sizePolicy().hasHeightForWidth());
        customLineEdit41->setSizePolicy(sizePolicy2);
        customLineEdit41->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit41, 1, 3, 1, 1);

        customLineEdit72 = new QLineEdit(frame_16);
        customLineEdit72->setObjectName(QString::fromUtf8("customLineEdit72"));
        sizePolicy2.setHeightForWidth(customLineEdit72->sizePolicy().hasHeightForWidth());
        customLineEdit72->setSizePolicy(sizePolicy2);
        customLineEdit72->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit72, 6, 5, 1, 1);

        customLineEdit48 = new QLineEdit(frame_16);
        customLineEdit48->setObjectName(QString::fromUtf8("customLineEdit48"));
        sizePolicy2.setHeightForWidth(customLineEdit48->sizePolicy().hasHeightForWidth());
        customLineEdit48->setSizePolicy(sizePolicy2);
        customLineEdit48->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit48, 8, 3, 1, 1);

        customLineEdit108 = new QLineEdit(frame_16);
        customLineEdit108->setObjectName(QString::fromUtf8("customLineEdit108"));
        sizePolicy2.setHeightForWidth(customLineEdit108->sizePolicy().hasHeightForWidth());
        customLineEdit108->setSizePolicy(sizePolicy2);
        customLineEdit108->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit108, 3, 8, 1, 1);

        customLineEdit93 = new QLineEdit(frame_16);
        customLineEdit93->setObjectName(QString::fromUtf8("customLineEdit93"));
        sizePolicy2.setHeightForWidth(customLineEdit93->sizePolicy().hasHeightForWidth());
        customLineEdit93->setSizePolicy(sizePolicy2);
        customLineEdit93->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit93, 1, 7, 1, 1);

        customLineEdit111 = new QLineEdit(frame_16);
        customLineEdit111->setObjectName(QString::fromUtf8("customLineEdit111"));
        sizePolicy2.setHeightForWidth(customLineEdit111->sizePolicy().hasHeightForWidth());
        customLineEdit111->setSizePolicy(sizePolicy2);
        customLineEdit111->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit111, 6, 8, 1, 1);

        customLineEdit40 = new QLineEdit(frame_16);
        customLineEdit40->setObjectName(QString::fromUtf8("customLineEdit40"));
        sizePolicy2.setHeightForWidth(customLineEdit40->sizePolicy().hasHeightForWidth());
        customLineEdit40->setSizePolicy(sizePolicy2);
        customLineEdit40->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit40, 0, 3, 1, 1);

        customLineEdit51 = new QLineEdit(frame_16);
        customLineEdit51->setObjectName(QString::fromUtf8("customLineEdit51"));
        sizePolicy2.setHeightForWidth(customLineEdit51->sizePolicy().hasHeightForWidth());
        customLineEdit51->setSizePolicy(sizePolicy2);
        customLineEdit51->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit51, 11, 3, 1, 1);

        customLineEdit13 = new QLineEdit(frame_16);
        customLineEdit13->setObjectName(QString::fromUtf8("customLineEdit13"));
        sizePolicy1.setHeightForWidth(customLineEdit13->sizePolicy().hasHeightForWidth());
        customLineEdit13->setSizePolicy(sizePolicy1);
        customLineEdit13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit13, 12, 0, 1, 1);

        customLineEdit35 = new QLineEdit(frame_16);
        customLineEdit35->setObjectName(QString::fromUtf8("customLineEdit35"));
        sizePolicy2.setHeightForWidth(customLineEdit35->sizePolicy().hasHeightForWidth());
        customLineEdit35->setSizePolicy(sizePolicy2);
        customLineEdit35->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit35, 8, 2, 1, 1);

        customLineEdit87 = new QLineEdit(frame_16);
        customLineEdit87->setObjectName(QString::fromUtf8("customLineEdit87"));
        sizePolicy2.setHeightForWidth(customLineEdit87->sizePolicy().hasHeightForWidth());
        customLineEdit87->setSizePolicy(sizePolicy2);
        customLineEdit87->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit87, 8, 6, 1, 1);

        customLineEdit38 = new QLineEdit(frame_16);
        customLineEdit38->setObjectName(QString::fromUtf8("customLineEdit38"));
        sizePolicy2.setHeightForWidth(customLineEdit38->sizePolicy().hasHeightForWidth());
        customLineEdit38->setSizePolicy(sizePolicy2);
        customLineEdit38->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit38, 11, 2, 1, 1);

        customLineEdit73 = new QLineEdit(frame_16);
        customLineEdit73->setObjectName(QString::fromUtf8("customLineEdit73"));
        sizePolicy2.setHeightForWidth(customLineEdit73->sizePolicy().hasHeightForWidth());
        customLineEdit73->setSizePolicy(sizePolicy2);
        customLineEdit73->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit73, 7, 5, 1, 1);

        customLineEdit92 = new QLineEdit(frame_16);
        customLineEdit92->setObjectName(QString::fromUtf8("customLineEdit92"));
        sizePolicy2.setHeightForWidth(customLineEdit92->sizePolicy().hasHeightForWidth());
        customLineEdit92->setSizePolicy(sizePolicy2);
        customLineEdit92->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit92, 0, 7, 1, 1);

        customLineEdit17 = new QLineEdit(frame_16);
        customLineEdit17->setObjectName(QString::fromUtf8("customLineEdit17"));
        sizePolicy2.setHeightForWidth(customLineEdit17->sizePolicy().hasHeightForWidth());
        customLineEdit17->setSizePolicy(sizePolicy2);
        customLineEdit17->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit17, 3, 1, 1, 1);

        customLineEdit47 = new QLineEdit(frame_16);
        customLineEdit47->setObjectName(QString::fromUtf8("customLineEdit47"));
        sizePolicy2.setHeightForWidth(customLineEdit47->sizePolicy().hasHeightForWidth());
        customLineEdit47->setSizePolicy(sizePolicy2);
        customLineEdit47->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit47, 7, 3, 1, 1);

        customLineEdit95 = new QLineEdit(frame_16);
        customLineEdit95->setObjectName(QString::fromUtf8("customLineEdit95"));
        sizePolicy2.setHeightForWidth(customLineEdit95->sizePolicy().hasHeightForWidth());
        customLineEdit95->setSizePolicy(sizePolicy2);
        customLineEdit95->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit95, 3, 7, 1, 1);

        customLineEdit26 = new QLineEdit(frame_16);
        customLineEdit26->setObjectName(QString::fromUtf8("customLineEdit26"));
        sizePolicy2.setHeightForWidth(customLineEdit26->sizePolicy().hasHeightForWidth());
        customLineEdit26->setSizePolicy(sizePolicy2);
        customLineEdit26->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit26, 12, 1, 1, 1);

        customLineEdit86 = new QLineEdit(frame_16);
        customLineEdit86->setObjectName(QString::fromUtf8("customLineEdit86"));
        sizePolicy2.setHeightForWidth(customLineEdit86->sizePolicy().hasHeightForWidth());
        customLineEdit86->setSizePolicy(sizePolicy2);
        customLineEdit86->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit86, 7, 6, 1, 1);

        customLineEdit16 = new QLineEdit(frame_16);
        customLineEdit16->setObjectName(QString::fromUtf8("customLineEdit16"));
        sizePolicy2.setHeightForWidth(customLineEdit16->sizePolicy().hasHeightForWidth());
        customLineEdit16->setSizePolicy(sizePolicy2);
        customLineEdit16->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit16, 2, 1, 1, 1);

        customLineEdit117 = new QLineEdit(frame_16);
        customLineEdit117->setObjectName(QString::fromUtf8("customLineEdit117"));
        sizePolicy2.setHeightForWidth(customLineEdit117->sizePolicy().hasHeightForWidth());
        customLineEdit117->setSizePolicy(sizePolicy2);
        customLineEdit117->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit117, 12, 8, 1, 1);

        customLineEdit4 = new QLineEdit(frame_16);
        customLineEdit4->setObjectName(QString::fromUtf8("customLineEdit4"));
        sizePolicy2.setHeightForWidth(customLineEdit4->sizePolicy().hasHeightForWidth());
        customLineEdit4->setSizePolicy(sizePolicy2);
        customLineEdit4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit4, 3, 0, 1, 1);

        customLineEdit11 = new QLineEdit(frame_16);
        customLineEdit11->setObjectName(QString::fromUtf8("customLineEdit11"));
        sizePolicy2.setHeightForWidth(customLineEdit11->sizePolicy().hasHeightForWidth());
        customLineEdit11->setSizePolicy(sizePolicy2);
        customLineEdit11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit11, 10, 0, 1, 1);

        customLineEdit103 = new QLineEdit(frame_16);
        customLineEdit103->setObjectName(QString::fromUtf8("customLineEdit103"));
        sizePolicy2.setHeightForWidth(customLineEdit103->sizePolicy().hasHeightForWidth());
        customLineEdit103->setSizePolicy(sizePolicy2);
        customLineEdit103->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit103, 11, 7, 1, 1);

        customLineEdit121 = new QLineEdit(frame_16);
        customLineEdit121->setObjectName(QString::fromUtf8("customLineEdit121"));
        sizePolicy2.setHeightForWidth(customLineEdit121->sizePolicy().hasHeightForWidth());
        customLineEdit121->setSizePolicy(sizePolicy2);
        customLineEdit121->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit121, 3, 9, 1, 1);

        customLineEdit125 = new QLineEdit(frame_16);
        customLineEdit125->setObjectName(QString::fromUtf8("customLineEdit125"));
        sizePolicy2.setHeightForWidth(customLineEdit125->sizePolicy().hasHeightForWidth());
        customLineEdit125->setSizePolicy(sizePolicy2);
        customLineEdit125->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit125, 7, 9, 1, 1);

        customLineEdit12 = new QLineEdit(frame_16);
        customLineEdit12->setObjectName(QString::fromUtf8("customLineEdit12"));
        sizePolicy2.setHeightForWidth(customLineEdit12->sizePolicy().hasHeightForWidth());
        customLineEdit12->setSizePolicy(sizePolicy2);
        customLineEdit12->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit12, 11, 0, 1, 1);

        customLineEdit96 = new QLineEdit(frame_16);
        customLineEdit96->setObjectName(QString::fromUtf8("customLineEdit96"));
        sizePolicy2.setHeightForWidth(customLineEdit96->sizePolicy().hasHeightForWidth());
        customLineEdit96->setSizePolicy(sizePolicy2);
        customLineEdit96->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit96, 4, 7, 1, 1);

        customLineEdit45 = new QLineEdit(frame_16);
        customLineEdit45->setObjectName(QString::fromUtf8("customLineEdit45"));
        sizePolicy2.setHeightForWidth(customLineEdit45->sizePolicy().hasHeightForWidth());
        customLineEdit45->setSizePolicy(sizePolicy2);
        customLineEdit45->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit45, 5, 3, 1, 1);

        customLineEdit58 = new QLineEdit(frame_16);
        customLineEdit58->setObjectName(QString::fromUtf8("customLineEdit58"));
        sizePolicy2.setHeightForWidth(customLineEdit58->sizePolicy().hasHeightForWidth());
        customLineEdit58->setSizePolicy(sizePolicy2);
        customLineEdit58->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit58, 5, 4, 1, 1);

        customLineEdit88 = new QLineEdit(frame_16);
        customLineEdit88->setObjectName(QString::fromUtf8("customLineEdit88"));
        sizePolicy2.setHeightForWidth(customLineEdit88->sizePolicy().hasHeightForWidth());
        customLineEdit88->setSizePolicy(sizePolicy2);
        customLineEdit88->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit88, 9, 6, 1, 1);

        customLineEdit76 = new QLineEdit(frame_16);
        customLineEdit76->setObjectName(QString::fromUtf8("customLineEdit76"));
        sizePolicy2.setHeightForWidth(customLineEdit76->sizePolicy().hasHeightForWidth());
        customLineEdit76->setSizePolicy(sizePolicy2);
        customLineEdit76->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit76, 10, 5, 1, 1);

        customLineEdit124 = new QLineEdit(frame_16);
        customLineEdit124->setObjectName(QString::fromUtf8("customLineEdit124"));
        sizePolicy2.setHeightForWidth(customLineEdit124->sizePolicy().hasHeightForWidth());
        customLineEdit124->setSizePolicy(sizePolicy2);
        customLineEdit124->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit124, 6, 9, 1, 1);

        customLineEdit5 = new QLineEdit(frame_16);
        customLineEdit5->setObjectName(QString::fromUtf8("customLineEdit5"));
        sizePolicy2.setHeightForWidth(customLineEdit5->sizePolicy().hasHeightForWidth());
        customLineEdit5->setSizePolicy(sizePolicy2);
        customLineEdit5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit5, 4, 0, 1, 1);

        customLineEdit122 = new QLineEdit(frame_16);
        customLineEdit122->setObjectName(QString::fromUtf8("customLineEdit122"));
        sizePolicy2.setHeightForWidth(customLineEdit122->sizePolicy().hasHeightForWidth());
        customLineEdit122->setSizePolicy(sizePolicy2);
        customLineEdit122->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit122, 4, 9, 1, 1);

        customLineEdit112 = new QLineEdit(frame_16);
        customLineEdit112->setObjectName(QString::fromUtf8("customLineEdit112"));
        sizePolicy2.setHeightForWidth(customLineEdit112->sizePolicy().hasHeightForWidth());
        customLineEdit112->setSizePolicy(sizePolicy2);
        customLineEdit112->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit112, 7, 8, 1, 1);

        customLineEdit81 = new QLineEdit(frame_16);
        customLineEdit81->setObjectName(QString::fromUtf8("customLineEdit81"));
        sizePolicy2.setHeightForWidth(customLineEdit81->sizePolicy().hasHeightForWidth());
        customLineEdit81->setSizePolicy(sizePolicy2);
        customLineEdit81->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit81, 2, 6, 1, 1);

        customLineEdit10 = new QLineEdit(frame_16);
        customLineEdit10->setObjectName(QString::fromUtf8("customLineEdit10"));
        sizePolicy2.setHeightForWidth(customLineEdit10->sizePolicy().hasHeightForWidth());
        customLineEdit10->setSizePolicy(sizePolicy2);
        customLineEdit10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit10, 9, 0, 1, 1);

        customLineEdit36 = new QLineEdit(frame_16);
        customLineEdit36->setObjectName(QString::fromUtf8("customLineEdit36"));
        sizePolicy2.setHeightForWidth(customLineEdit36->sizePolicy().hasHeightForWidth());
        customLineEdit36->setSizePolicy(sizePolicy2);
        customLineEdit36->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit36, 9, 2, 1, 1);

        customLineEdit54 = new QLineEdit(frame_16);
        customLineEdit54->setObjectName(QString::fromUtf8("customLineEdit54"));
        sizePolicy2.setHeightForWidth(customLineEdit54->sizePolicy().hasHeightForWidth());
        customLineEdit54->setSizePolicy(sizePolicy2);
        customLineEdit54->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit54, 1, 4, 1, 1);

        customLineEdit62 = new QLineEdit(frame_16);
        customLineEdit62->setObjectName(QString::fromUtf8("customLineEdit62"));
        sizePolicy2.setHeightForWidth(customLineEdit62->sizePolicy().hasHeightForWidth());
        customLineEdit62->setSizePolicy(sizePolicy2);
        customLineEdit62->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit62, 9, 4, 1, 1);

        customLineEdit19 = new QLineEdit(frame_16);
        customLineEdit19->setObjectName(QString::fromUtf8("customLineEdit19"));
        sizePolicy2.setHeightForWidth(customLineEdit19->sizePolicy().hasHeightForWidth());
        customLineEdit19->setSizePolicy(sizePolicy2);
        customLineEdit19->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit19, 5, 1, 1, 1);

        customLineEdit116 = new QLineEdit(frame_16);
        customLineEdit116->setObjectName(QString::fromUtf8("customLineEdit116"));
        sizePolicy2.setHeightForWidth(customLineEdit116->sizePolicy().hasHeightForWidth());
        customLineEdit116->setSizePolicy(sizePolicy2);
        customLineEdit116->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit116, 11, 8, 1, 1);

        customLineEdit99 = new QLineEdit(frame_16);
        customLineEdit99->setObjectName(QString::fromUtf8("customLineEdit99"));
        sizePolicy2.setHeightForWidth(customLineEdit99->sizePolicy().hasHeightForWidth());
        customLineEdit99->setSizePolicy(sizePolicy2);
        customLineEdit99->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit99, 7, 7, 1, 1);

        customLineEdit90 = new QLineEdit(frame_16);
        customLineEdit90->setObjectName(QString::fromUtf8("customLineEdit90"));
        sizePolicy2.setHeightForWidth(customLineEdit90->sizePolicy().hasHeightForWidth());
        customLineEdit90->setSizePolicy(sizePolicy2);
        customLineEdit90->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit90, 11, 6, 1, 1);

        customLineEdit32 = new QLineEdit(frame_16);
        customLineEdit32->setObjectName(QString::fromUtf8("customLineEdit32"));
        sizePolicy2.setHeightForWidth(customLineEdit32->sizePolicy().hasHeightForWidth());
        customLineEdit32->setSizePolicy(sizePolicy2);
        customLineEdit32->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit32, 5, 2, 1, 1);

        customLineEdit30 = new QLineEdit(frame_16);
        customLineEdit30->setObjectName(QString::fromUtf8("customLineEdit30"));
        sizePolicy2.setHeightForWidth(customLineEdit30->sizePolicy().hasHeightForWidth());
        customLineEdit30->setSizePolicy(sizePolicy2);
        customLineEdit30->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit30, 3, 2, 1, 1);

        customLineEdit14 = new QLineEdit(frame_16);
        customLineEdit14->setObjectName(QString::fromUtf8("customLineEdit14"));
        sizePolicy2.setHeightForWidth(customLineEdit14->sizePolicy().hasHeightForWidth());
        customLineEdit14->setSizePolicy(sizePolicy2);
        customLineEdit14->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit14, 0, 1, 1, 1);

        customLineEdit123 = new QLineEdit(frame_16);
        customLineEdit123->setObjectName(QString::fromUtf8("customLineEdit123"));
        sizePolicy2.setHeightForWidth(customLineEdit123->sizePolicy().hasHeightForWidth());
        customLineEdit123->setSizePolicy(sizePolicy2);
        customLineEdit123->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit123, 5, 9, 1, 1);

        customLineEdit56 = new QLineEdit(frame_16);
        customLineEdit56->setObjectName(QString::fromUtf8("customLineEdit56"));
        sizePolicy2.setHeightForWidth(customLineEdit56->sizePolicy().hasHeightForWidth());
        customLineEdit56->setSizePolicy(sizePolicy2);
        customLineEdit56->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit56, 3, 4, 1, 1);

        customLineEdit105 = new QLineEdit(frame_16);
        customLineEdit105->setObjectName(QString::fromUtf8("customLineEdit105"));
        sizePolicy2.setHeightForWidth(customLineEdit105->sizePolicy().hasHeightForWidth());
        customLineEdit105->setSizePolicy(sizePolicy2);
        customLineEdit105->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit105, 0, 8, 1, 1);

        customLineEdit101 = new QLineEdit(frame_16);
        customLineEdit101->setObjectName(QString::fromUtf8("customLineEdit101"));
        sizePolicy2.setHeightForWidth(customLineEdit101->sizePolicy().hasHeightForWidth());
        customLineEdit101->setSizePolicy(sizePolicy2);
        customLineEdit101->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit101, 9, 7, 1, 1);

        customLineEdit1 = new QLineEdit(frame_16);
        customLineEdit1->setObjectName(QString::fromUtf8("customLineEdit1"));
        sizePolicy2.setHeightForWidth(customLineEdit1->sizePolicy().hasHeightForWidth());
        customLineEdit1->setSizePolicy(sizePolicy2);
        customLineEdit1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"QLineEdit{                                          \n"
" border: 2px solid black;}\n"
""));

        gridLayout_32->addWidget(customLineEdit1, 0, 0, 1, 1);

        customLineEdit52 = new QLineEdit(frame_16);
        customLineEdit52->setObjectName(QString::fromUtf8("customLineEdit52"));
        sizePolicy2.setHeightForWidth(customLineEdit52->sizePolicy().hasHeightForWidth());
        customLineEdit52->setSizePolicy(sizePolicy2);
        customLineEdit52->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit52, 12, 3, 1, 1);

        customLineEdit79 = new QLineEdit(frame_16);
        customLineEdit79->setObjectName(QString::fromUtf8("customLineEdit79"));
        sizePolicy2.setHeightForWidth(customLineEdit79->sizePolicy().hasHeightForWidth());
        customLineEdit79->setSizePolicy(sizePolicy2);
        customLineEdit79->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit79, 0, 6, 1, 1);

        customLineEdit27 = new QLineEdit(frame_16);
        customLineEdit27->setObjectName(QString::fromUtf8("customLineEdit27"));
        sizePolicy2.setHeightForWidth(customLineEdit27->sizePolicy().hasHeightForWidth());
        customLineEdit27->setSizePolicy(sizePolicy2);
        customLineEdit27->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit27, 0, 2, 1, 1);

        customLineEdit104 = new QLineEdit(frame_16);
        customLineEdit104->setObjectName(QString::fromUtf8("customLineEdit104"));
        sizePolicy2.setHeightForWidth(customLineEdit104->sizePolicy().hasHeightForWidth());
        customLineEdit104->setSizePolicy(sizePolicy2);
        customLineEdit104->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit104, 12, 7, 1, 1);

        customLineEdit109 = new QLineEdit(frame_16);
        customLineEdit109->setObjectName(QString::fromUtf8("customLineEdit109"));
        sizePolicy2.setHeightForWidth(customLineEdit109->sizePolicy().hasHeightForWidth());
        customLineEdit109->setSizePolicy(sizePolicy2);
        customLineEdit109->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit109, 4, 8, 1, 1);

        customLineEdit55 = new QLineEdit(frame_16);
        customLineEdit55->setObjectName(QString::fromUtf8("customLineEdit55"));
        sizePolicy2.setHeightForWidth(customLineEdit55->sizePolicy().hasHeightForWidth());
        customLineEdit55->setSizePolicy(sizePolicy2);
        customLineEdit55->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit55, 2, 4, 1, 1);

        customLineEdit8 = new QLineEdit(frame_16);
        customLineEdit8->setObjectName(QString::fromUtf8("customLineEdit8"));
        sizePolicy2.setHeightForWidth(customLineEdit8->sizePolicy().hasHeightForWidth());
        customLineEdit8->setSizePolicy(sizePolicy2);
        customLineEdit8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit8, 7, 0, 1, 1);

        customLineEdit37 = new QLineEdit(frame_16);
        customLineEdit37->setObjectName(QString::fromUtf8("customLineEdit37"));
        sizePolicy2.setHeightForWidth(customLineEdit37->sizePolicy().hasHeightForWidth());
        customLineEdit37->setSizePolicy(sizePolicy2);
        customLineEdit37->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit37, 10, 2, 1, 1);

        customLineEdit80 = new QLineEdit(frame_16);
        customLineEdit80->setObjectName(QString::fromUtf8("customLineEdit80"));
        sizePolicy2.setHeightForWidth(customLineEdit80->sizePolicy().hasHeightForWidth());
        customLineEdit80->setSizePolicy(sizePolicy2);
        customLineEdit80->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit80, 1, 6, 1, 1);

        customLineEdit49 = new QLineEdit(frame_16);
        customLineEdit49->setObjectName(QString::fromUtf8("customLineEdit49"));
        sizePolicy2.setHeightForWidth(customLineEdit49->sizePolicy().hasHeightForWidth());
        customLineEdit49->setSizePolicy(sizePolicy2);
        customLineEdit49->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit49, 9, 3, 1, 1);

        customLineEdit84 = new QLineEdit(frame_16);
        customLineEdit84->setObjectName(QString::fromUtf8("customLineEdit84"));
        sizePolicy2.setHeightForWidth(customLineEdit84->sizePolicy().hasHeightForWidth());
        customLineEdit84->setSizePolicy(sizePolicy2);
        customLineEdit84->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit84, 5, 6, 1, 1);

        customLineEdit57 = new QLineEdit(frame_16);
        customLineEdit57->setObjectName(QString::fromUtf8("customLineEdit57"));
        sizePolicy2.setHeightForWidth(customLineEdit57->sizePolicy().hasHeightForWidth());
        customLineEdit57->setSizePolicy(sizePolicy2);
        customLineEdit57->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit57, 4, 4, 1, 1);

        customLineEdit42 = new QLineEdit(frame_16);
        customLineEdit42->setObjectName(QString::fromUtf8("customLineEdit42"));
        sizePolicy2.setHeightForWidth(customLineEdit42->sizePolicy().hasHeightForWidth());
        customLineEdit42->setSizePolicy(sizePolicy2);
        customLineEdit42->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit42, 2, 3, 1, 1);

        customLineEdit24 = new QLineEdit(frame_16);
        customLineEdit24->setObjectName(QString::fromUtf8("customLineEdit24"));
        sizePolicy2.setHeightForWidth(customLineEdit24->sizePolicy().hasHeightForWidth());
        customLineEdit24->setSizePolicy(sizePolicy2);
        customLineEdit24->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit24, 10, 1, 1, 1);

        customLineEdit110 = new QLineEdit(frame_16);
        customLineEdit110->setObjectName(QString::fromUtf8("customLineEdit110"));
        sizePolicy2.setHeightForWidth(customLineEdit110->sizePolicy().hasHeightForWidth());
        customLineEdit110->setSizePolicy(sizePolicy2);
        customLineEdit110->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit110, 5, 8, 1, 1);

        customLineEdit18 = new QLineEdit(frame_16);
        customLineEdit18->setObjectName(QString::fromUtf8("customLineEdit18"));
        sizePolicy2.setHeightForWidth(customLineEdit18->sizePolicy().hasHeightForWidth());
        customLineEdit18->setSizePolicy(sizePolicy2);
        customLineEdit18->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit18, 4, 1, 1, 1);

        customLineEdit50 = new QLineEdit(frame_16);
        customLineEdit50->setObjectName(QString::fromUtf8("customLineEdit50"));
        sizePolicy2.setHeightForWidth(customLineEdit50->sizePolicy().hasHeightForWidth());
        customLineEdit50->setSizePolicy(sizePolicy2);
        customLineEdit50->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit50, 10, 3, 1, 1);

        customLineEdit7 = new QLineEdit(frame_16);
        customLineEdit7->setObjectName(QString::fromUtf8("customLineEdit7"));
        sizePolicy2.setHeightForWidth(customLineEdit7->sizePolicy().hasHeightForWidth());
        customLineEdit7->setSizePolicy(sizePolicy2);
        customLineEdit7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit7, 6, 0, 1, 1);

        customLineEdit64 = new QLineEdit(frame_16);
        customLineEdit64->setObjectName(QString::fromUtf8("customLineEdit64"));
        sizePolicy2.setHeightForWidth(customLineEdit64->sizePolicy().hasHeightForWidth());
        customLineEdit64->setSizePolicy(sizePolicy2);
        customLineEdit64->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit64, 11, 4, 1, 1);

        customLineEdit118 = new QLineEdit(frame_16);
        customLineEdit118->setObjectName(QString::fromUtf8("customLineEdit118"));
        sizePolicy2.setHeightForWidth(customLineEdit118->sizePolicy().hasHeightForWidth());
        customLineEdit118->setSizePolicy(sizePolicy2);
        customLineEdit118->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit118, 0, 9, 1, 1);

        customLineEdit69 = new QLineEdit(frame_16);
        customLineEdit69->setObjectName(QString::fromUtf8("customLineEdit69"));
        sizePolicy2.setHeightForWidth(customLineEdit69->sizePolicy().hasHeightForWidth());
        customLineEdit69->setSizePolicy(sizePolicy2);
        customLineEdit69->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit69, 3, 5, 1, 1);

        customLineEdit70 = new QLineEdit(frame_16);
        customLineEdit70->setObjectName(QString::fromUtf8("customLineEdit70"));
        sizePolicy2.setHeightForWidth(customLineEdit70->sizePolicy().hasHeightForWidth());
        customLineEdit70->setSizePolicy(sizePolicy2);
        customLineEdit70->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit70, 4, 5, 1, 1);

        customLineEdit46 = new QLineEdit(frame_16);
        customLineEdit46->setObjectName(QString::fromUtf8("customLineEdit46"));
        sizePolicy2.setHeightForWidth(customLineEdit46->sizePolicy().hasHeightForWidth());
        customLineEdit46->setSizePolicy(sizePolicy2);
        customLineEdit46->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit46, 6, 3, 1, 1);

        customLineEdit59 = new QLineEdit(frame_16);
        customLineEdit59->setObjectName(QString::fromUtf8("customLineEdit59"));
        sizePolicy2.setHeightForWidth(customLineEdit59->sizePolicy().hasHeightForWidth());
        customLineEdit59->setSizePolicy(sizePolicy2);
        customLineEdit59->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit59, 6, 4, 1, 1);

        customLineEdit102 = new QLineEdit(frame_16);
        customLineEdit102->setObjectName(QString::fromUtf8("customLineEdit102"));
        sizePolicy2.setHeightForWidth(customLineEdit102->sizePolicy().hasHeightForWidth());
        customLineEdit102->setSizePolicy(sizePolicy2);
        customLineEdit102->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit102, 10, 7, 1, 1);

        customLineEdit31 = new QLineEdit(frame_16);
        customLineEdit31->setObjectName(QString::fromUtf8("customLineEdit31"));
        sizePolicy2.setHeightForWidth(customLineEdit31->sizePolicy().hasHeightForWidth());
        customLineEdit31->setSizePolicy(sizePolicy2);
        customLineEdit31->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit31, 4, 2, 1, 1);

        customLineEdit98 = new QLineEdit(frame_16);
        customLineEdit98->setObjectName(QString::fromUtf8("customLineEdit98"));
        sizePolicy2.setHeightForWidth(customLineEdit98->sizePolicy().hasHeightForWidth());
        customLineEdit98->setSizePolicy(sizePolicy2);
        customLineEdit98->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit98, 6, 7, 1, 1);

        customLineEdit114 = new QLineEdit(frame_16);
        customLineEdit114->setObjectName(QString::fromUtf8("customLineEdit114"));
        sizePolicy2.setHeightForWidth(customLineEdit114->sizePolicy().hasHeightForWidth());
        customLineEdit114->setSizePolicy(sizePolicy2);
        customLineEdit114->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit114, 9, 8, 1, 1);

        customLineEdit53 = new QLineEdit(frame_16);
        customLineEdit53->setObjectName(QString::fromUtf8("customLineEdit53"));
        sizePolicy2.setHeightForWidth(customLineEdit53->sizePolicy().hasHeightForWidth());
        customLineEdit53->setSizePolicy(sizePolicy2);
        customLineEdit53->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit53, 0, 4, 1, 1);

        customLineEdit34 = new QLineEdit(frame_16);
        customLineEdit34->setObjectName(QString::fromUtf8("customLineEdit34"));
        sizePolicy2.setHeightForWidth(customLineEdit34->sizePolicy().hasHeightForWidth());
        customLineEdit34->setSizePolicy(sizePolicy2);
        customLineEdit34->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit34, 7, 2, 1, 1);

        customLineEdit39 = new QLineEdit(frame_16);
        customLineEdit39->setObjectName(QString::fromUtf8("customLineEdit39"));
        sizePolicy2.setHeightForWidth(customLineEdit39->sizePolicy().hasHeightForWidth());
        customLineEdit39->setSizePolicy(sizePolicy2);
        customLineEdit39->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit39, 12, 2, 1, 1);

        customLineEdit33 = new QLineEdit(frame_16);
        customLineEdit33->setObjectName(QString::fromUtf8("customLineEdit33"));
        sizePolicy2.setHeightForWidth(customLineEdit33->sizePolicy().hasHeightForWidth());
        customLineEdit33->setSizePolicy(sizePolicy2);
        customLineEdit33->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit33, 6, 2, 1, 1);

        customLineEdit91 = new QLineEdit(frame_16);
        customLineEdit91->setObjectName(QString::fromUtf8("customLineEdit91"));
        sizePolicy2.setHeightForWidth(customLineEdit91->sizePolicy().hasHeightForWidth());
        customLineEdit91->setSizePolicy(sizePolicy2);
        customLineEdit91->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit91, 12, 6, 1, 1);

        customLineEdit119 = new QLineEdit(frame_16);
        customLineEdit119->setObjectName(QString::fromUtf8("customLineEdit119"));
        sizePolicy2.setHeightForWidth(customLineEdit119->sizePolicy().hasHeightForWidth());
        customLineEdit119->setSizePolicy(sizePolicy2);
        customLineEdit119->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit119, 1, 9, 1, 1);

        customLineEdit83 = new QLineEdit(frame_16);
        customLineEdit83->setObjectName(QString::fromUtf8("customLineEdit83"));
        sizePolicy2.setHeightForWidth(customLineEdit83->sizePolicy().hasHeightForWidth());
        customLineEdit83->setSizePolicy(sizePolicy2);
        customLineEdit83->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit83, 4, 6, 1, 1);

        customLineEdit71 = new QLineEdit(frame_16);
        customLineEdit71->setObjectName(QString::fromUtf8("customLineEdit71"));
        sizePolicy2.setHeightForWidth(customLineEdit71->sizePolicy().hasHeightForWidth());
        customLineEdit71->setSizePolicy(sizePolicy2);
        customLineEdit71->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit71, 5, 5, 1, 1);

        customLineEdit9 = new QLineEdit(frame_16);
        customLineEdit9->setObjectName(QString::fromUtf8("customLineEdit9"));
        sizePolicy2.setHeightForWidth(customLineEdit9->sizePolicy().hasHeightForWidth());
        customLineEdit9->setSizePolicy(sizePolicy2);
        customLineEdit9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit9, 8, 0, 1, 1);

        customLineEdit89 = new QLineEdit(frame_16);
        customLineEdit89->setObjectName(QString::fromUtf8("customLineEdit89"));
        sizePolicy2.setHeightForWidth(customLineEdit89->sizePolicy().hasHeightForWidth());
        customLineEdit89->setSizePolicy(sizePolicy2);
        customLineEdit89->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit89, 10, 6, 1, 1);

        customLineEdit115 = new QLineEdit(frame_16);
        customLineEdit115->setObjectName(QString::fromUtf8("customLineEdit115"));
        sizePolicy2.setHeightForWidth(customLineEdit115->sizePolicy().hasHeightForWidth());
        customLineEdit115->setSizePolicy(sizePolicy2);
        customLineEdit115->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit115, 10, 8, 1, 1);

        customLineEdit67 = new QLineEdit(frame_16);
        customLineEdit67->setObjectName(QString::fromUtf8("customLineEdit67"));
        sizePolicy2.setHeightForWidth(customLineEdit67->sizePolicy().hasHeightForWidth());
        customLineEdit67->setSizePolicy(sizePolicy2);
        customLineEdit67->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit67, 1, 5, 1, 1);

        customLineEdit61 = new QLineEdit(frame_16);
        customLineEdit61->setObjectName(QString::fromUtf8("customLineEdit61"));
        sizePolicy2.setHeightForWidth(customLineEdit61->sizePolicy().hasHeightForWidth());
        customLineEdit61->setSizePolicy(sizePolicy2);
        customLineEdit61->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit61, 8, 4, 1, 1);

        customLineEdit82 = new QLineEdit(frame_16);
        customLineEdit82->setObjectName(QString::fromUtf8("customLineEdit82"));
        sizePolicy2.setHeightForWidth(customLineEdit82->sizePolicy().hasHeightForWidth());
        customLineEdit82->setSizePolicy(sizePolicy2);
        customLineEdit82->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit82, 3, 6, 1, 1);

        customLineEdit3 = new QLineEdit(frame_16);
        customLineEdit3->setObjectName(QString::fromUtf8("customLineEdit3"));
        sizePolicy2.setHeightForWidth(customLineEdit3->sizePolicy().hasHeightForWidth());
        customLineEdit3->setSizePolicy(sizePolicy2);
        customLineEdit3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit3, 2, 0, 1, 1);

        customLineEdit23 = new QLineEdit(frame_16);
        customLineEdit23->setObjectName(QString::fromUtf8("customLineEdit23"));
        sizePolicy2.setHeightForWidth(customLineEdit23->sizePolicy().hasHeightForWidth());
        customLineEdit23->setSizePolicy(sizePolicy2);
        customLineEdit23->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit23, 9, 1, 1, 1);

        customLineEdit15 = new QLineEdit(frame_16);
        customLineEdit15->setObjectName(QString::fromUtf8("customLineEdit15"));
        sizePolicy2.setHeightForWidth(customLineEdit15->sizePolicy().hasHeightForWidth());
        customLineEdit15->setSizePolicy(sizePolicy2);
        customLineEdit15->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit15, 1, 1, 1, 1);

        customLineEdit28 = new QLineEdit(frame_16);
        customLineEdit28->setObjectName(QString::fromUtf8("customLineEdit28"));
        sizePolicy2.setHeightForWidth(customLineEdit28->sizePolicy().hasHeightForWidth());
        customLineEdit28->setSizePolicy(sizePolicy2);
        customLineEdit28->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit28, 1, 2, 1, 1);

        customLineEdit85 = new QLineEdit(frame_16);
        customLineEdit85->setObjectName(QString::fromUtf8("customLineEdit85"));
        sizePolicy2.setHeightForWidth(customLineEdit85->sizePolicy().hasHeightForWidth());
        customLineEdit85->setSizePolicy(sizePolicy2);
        customLineEdit85->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit85, 6, 6, 1, 1);

        customLineEdit22 = new QLineEdit(frame_16);
        customLineEdit22->setObjectName(QString::fromUtf8("customLineEdit22"));
        sizePolicy2.setHeightForWidth(customLineEdit22->sizePolicy().hasHeightForWidth());
        customLineEdit22->setSizePolicy(sizePolicy2);
        customLineEdit22->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit22, 8, 1, 1, 1);

        customLineEdit65 = new QLineEdit(frame_16);
        customLineEdit65->setObjectName(QString::fromUtf8("customLineEdit65"));
        sizePolicy2.setHeightForWidth(customLineEdit65->sizePolicy().hasHeightForWidth());
        customLineEdit65->setSizePolicy(sizePolicy2);
        customLineEdit65->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit65, 12, 4, 1, 1);

        customLineEdit78 = new QLineEdit(frame_16);
        customLineEdit78->setObjectName(QString::fromUtf8("customLineEdit78"));
        sizePolicy2.setHeightForWidth(customLineEdit78->sizePolicy().hasHeightForWidth());
        customLineEdit78->setSizePolicy(sizePolicy2);
        customLineEdit78->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit78, 12, 5, 1, 1);

        customLineEdit94 = new QLineEdit(frame_16);
        customLineEdit94->setObjectName(QString::fromUtf8("customLineEdit94"));
        sizePolicy2.setHeightForWidth(customLineEdit94->sizePolicy().hasHeightForWidth());
        customLineEdit94->setSizePolicy(sizePolicy2);
        customLineEdit94->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit94, 2, 7, 1, 1);

        customLineEdit97 = new QLineEdit(frame_16);
        customLineEdit97->setObjectName(QString::fromUtf8("customLineEdit97"));
        sizePolicy2.setHeightForWidth(customLineEdit97->sizePolicy().hasHeightForWidth());
        customLineEdit97->setSizePolicy(sizePolicy2);
        customLineEdit97->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit97, 5, 7, 1, 1);

        customLineEdit43 = new QLineEdit(frame_16);
        customLineEdit43->setObjectName(QString::fromUtf8("customLineEdit43"));
        sizePolicy2.setHeightForWidth(customLineEdit43->sizePolicy().hasHeightForWidth());
        customLineEdit43->setSizePolicy(sizePolicy2);
        customLineEdit43->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit43, 3, 3, 1, 1);

        customLineEdit68 = new QLineEdit(frame_16);
        customLineEdit68->setObjectName(QString::fromUtf8("customLineEdit68"));
        sizePolicy2.setHeightForWidth(customLineEdit68->sizePolicy().hasHeightForWidth());
        customLineEdit68->setSizePolicy(sizePolicy2);
        customLineEdit68->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit68, 2, 5, 1, 1);

        customLineEdit106 = new QLineEdit(frame_16);
        customLineEdit106->setObjectName(QString::fromUtf8("customLineEdit106"));
        sizePolicy2.setHeightForWidth(customLineEdit106->sizePolicy().hasHeightForWidth());
        customLineEdit106->setSizePolicy(sizePolicy2);
        customLineEdit106->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_32->addWidget(customLineEdit106, 1, 8, 1, 1);


        gridLayout_35->addLayout(gridLayout_32, 0, 0, 1, 1);


        gridLayout_33->addWidget(frame_16, 0, 0, 1, 1);


        gridLayout_29->addWidget(frame_14, 1, 0, 1, 1);

        frame_13 = new QFrame(tab_4);
        frame_13->setObjectName(QString::fromUtf8("frame_13"));
        frame_13->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        gridLayout_31 = new QGridLayout(frame_13);
        gridLayout_31->setObjectName(QString::fromUtf8("gridLayout_31"));
        frame_15 = new QFrame(frame_13);
        frame_15->setObjectName(QString::fromUtf8("frame_15"));
        sizePolicy1.setHeightForWidth(frame_15->sizePolicy().hasHeightForWidth());
        frame_15->setSizePolicy(sizePolicy1);
        frame_15->setStyleSheet(QString::fromUtf8("\n"
"QFrame{\n"
"background-color: rgb(255,255,255);\n"
"border-radius: 5px;\n"
"}"));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        gridLayout_34 = new QGridLayout(frame_15);
        gridLayout_34->setObjectName(QString::fromUtf8("gridLayout_34"));
        gridLayout_34->setContentsMargins(15, -1, -1, -1);
        gridLayout_30 = new QGridLayout();
        gridLayout_30->setObjectName(QString::fromUtf8("gridLayout_30"));
        gridLayout_30->setHorizontalSpacing(15);
        gridLayout_30->setVerticalSpacing(7);
        gridLayout_30->setContentsMargins(15, -1, 15, 5);
        StartAddress = new QLineEdit(frame_15);
        StartAddress->setObjectName(QString::fromUtf8("StartAddress"));
        sizePolicy2.setHeightForWidth(StartAddress->sizePolicy().hasHeightForWidth());
        StartAddress->setSizePolicy(sizePolicy2);
        StartAddress->setMinimumSize(QSize(0, 0));
        StartAddress->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
" QLineEdit {\n"
"     border: 20px solid gray;\n"
"     border-radius: 10px;\n"
"     padding: 0 8px;\n"
"     background: yellow;\n"
"     selection-background-color: darkgray;\n"
" }"));

        gridLayout_30->addWidget(StartAddress, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_30->addItem(horizontalSpacer_3, 1, 6, 1, 1);

        label_59 = new QLabel(frame_15);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setFont(font);
        label_59->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);"));
        label_59->setAlignment(Qt::AlignCenter);

        gridLayout_30->addWidget(label_59, 0, 1, 1, 1);

        single_multi_write = new QComboBox(frame_15);
        single_multi_write->addItem(QString());
        single_multi_write->addItem(QString());
        single_multi_write->addItem(QString());
        single_multi_write->setObjectName(QString::fromUtf8("single_multi_write"));

        gridLayout_30->addWidget(single_multi_write, 1, 2, 1, 1);

        nSize = new QComboBox(frame_15);
        nSize->setObjectName(QString::fromUtf8("nSize"));
        sizePolicy2.setHeightForWidth(nSize->sizePolicy().hasHeightForWidth());
        nSize->setSizePolicy(sizePolicy2);
        nSize->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_30->addWidget(nSize, 1, 1, 1, 1);

        hex_check = new QCheckBox(frame_15);
        hex_check->setObjectName(QString::fromUtf8("hex_check"));
        hex_check->setLayoutDirection(Qt::LeftToRight);
        hex_check->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_30->addWidget(hex_check, 1, 3, 1, 1);

        SendCustomFrame = new QPushButton(frame_15);
        SendCustomFrame->setObjectName(QString::fromUtf8("SendCustomFrame"));
        sizePolicy2.setHeightForWidth(SendCustomFrame->sizePolicy().hasHeightForWidth());
        SendCustomFrame->setSizePolicy(sizePolicy2);
        SendCustomFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_30->addWidget(SendCustomFrame, 1, 4, 1, 1);

        custom_data_clear = new QPushButton(frame_15);
        custom_data_clear->setObjectName(QString::fromUtf8("custom_data_clear"));
        sizePolicy2.setHeightForWidth(custom_data_clear->sizePolicy().hasHeightForWidth());
        custom_data_clear->setSizePolicy(sizePolicy2);
        custom_data_clear->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_30->addWidget(custom_data_clear, 1, 5, 1, 1);

        label_56 = new QLabel(frame_15);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setFont(font);
        label_56->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);"));
        label_56->setAlignment(Qt::AlignCenter);

        gridLayout_30->addWidget(label_56, 0, 0, 1, 1);

        label_60 = new QLabel(frame_15);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setFont(font);
        label_60->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);"));
        label_60->setAlignment(Qt::AlignCenter);

        gridLayout_30->addWidget(label_60, 0, 2, 1, 1);


        gridLayout_34->addLayout(gridLayout_30, 0, 0, 1, 1);


        gridLayout_31->addWidget(frame_15, 1, 1, 1, 1);


        gridLayout_29->addWidget(frame_13, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_29->addItem(verticalSpacer_2, 2, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());

        gridLayout_8->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 0, 0, 1, 1);


        gridLayout_7->addWidget(frame_4, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_7, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame_12 = new QFrame(centralwidget);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        sizePolicy1.setHeightForWidth(frame_12->sizePolicy().hasHeightForWidth());
        frame_12->setSizePolicy(sizePolicy1);
        frame_12->setStyleSheet(QString::fromUtf8("\n"
"QFrame{\n"
"background-color: rgb(255,255,255);\n"
"border-radius: 5px;\n"
"}"));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        gridLayout_28 = new QGridLayout(frame_12);
        gridLayout_28->setSpacing(5);
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        gridLayout_28->setContentsMargins(15, 10, 15, 10);
        gridLayout_25 = new QGridLayout();
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        gridLayout_25->setHorizontalSpacing(15);
        gridLayout_25->setVerticalSpacing(7);
        gridLayout_25->setContentsMargins(15, -1, 15, 5);
        BrowseUpgrade = new QPushButton(frame_12);
        BrowseUpgrade->setObjectName(QString::fromUtf8("BrowseUpgrade"));
        sizePolicy2.setHeightForWidth(BrowseUpgrade->sizePolicy().hasHeightForWidth());
        BrowseUpgrade->setSizePolicy(sizePolicy2);
        BrowseUpgrade->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_25->addWidget(BrowseUpgrade, 1, 6, 1, 1);

        label_14 = new QLabel(frame_12);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8(""));

        gridLayout_25->addWidget(label_14, 0, 0, 1, 1);

        upgrade_progress = new QProgressBar(frame_12);
        upgrade_progress->setObjectName(QString::fromUtf8("upgrade_progress"));
        sizePolicy4.setHeightForWidth(upgrade_progress->sizePolicy().hasHeightForWidth());
        upgrade_progress->setSizePolicy(sizePolicy4);
        upgrade_progress->setMinimumSize(QSize(300, 0));
        upgrade_progress->setValue(0);

        gridLayout_25->addWidget(upgrade_progress, 2, 1, 1, 1);

        startBrowse = new QPushButton(frame_12);
        startBrowse->setObjectName(QString::fromUtf8("startBrowse"));
        sizePolicy2.setHeightForWidth(startBrowse->sizePolicy().hasHeightForWidth());
        startBrowse->setSizePolicy(sizePolicy2);
        startBrowse->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_25->addWidget(startBrowse, 2, 3, 1, 1);

        label_55 = new QLabel(frame_12);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush11);
        QBrush brush42(QColor(0, 0, 0, 128));
        brush42.setStyle(Qt::NoBrush);
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush42);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        QBrush brush43(QColor(0, 0, 0, 128));
        brush43.setStyle(Qt::NoBrush);
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush43);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        QBrush brush44(QColor(0, 0, 0, 128));
        brush44.setStyle(Qt::NoBrush);
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush44);
        label_55->setPalette(palette13);
        label_55->setFont(font);
        label_55->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout_25->addWidget(label_55, 1, 0, 1, 1);

        label_62 = new QLabel(frame_12);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush11);
        QBrush brush45(QColor(0, 0, 0, 128));
        brush45.setStyle(Qt::NoBrush);
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush45);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        QBrush brush46(QColor(0, 0, 0, 128));
        brush46.setStyle(Qt::NoBrush);
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush46);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        QBrush brush47(QColor(0, 0, 0, 128));
        brush47.setStyle(Qt::NoBrush);
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush47);
        label_62->setPalette(palette14);
        label_62->setFont(font);
        label_62->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout_25->addWidget(label_62, 2, 0, 1, 1);

        Reset_timestamp = new QPushButton(frame_12);
        Reset_timestamp->setObjectName(QString::fromUtf8("Reset_timestamp"));
        sizePolicy2.setHeightForWidth(Reset_timestamp->sizePolicy().hasHeightForWidth());
        Reset_timestamp->setSizePolicy(sizePolicy2);
        Reset_timestamp->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_25->addWidget(Reset_timestamp, 2, 6, 1, 1);

        browseLineEdit = new QLineEdit(frame_12);
        browseLineEdit->setObjectName(QString::fromUtf8("browseLineEdit"));
        sizePolicy2.setHeightForWidth(browseLineEdit->sizePolicy().hasHeightForWidth());
        browseLineEdit->setSizePolicy(sizePolicy2);
        browseLineEdit->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QLineEdit{\n"
"background-color: rgb(230, 230, 230);\n"
"border: 1px solid gray;\n"
"\n"
"border-radius: 5px;\n"
"\n"
"padding: 0 8px;\n"
"\n"
"selection-background-color: darkgray;\n"
"\n"
"}"));

        gridLayout_25->addWidget(browseLineEdit, 1, 1, 1, 5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_25->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        jump_to_app_btn = new QPushButton(frame_12);
        jump_to_app_btn->setObjectName(QString::fromUtf8("jump_to_app_btn"));
        sizePolicy2.setHeightForWidth(jump_to_app_btn->sizePolicy().hasHeightForWidth());
        jump_to_app_btn->setSizePolicy(sizePolicy2);
        jump_to_app_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_25->addWidget(jump_to_app_btn, 2, 5, 1, 1);

        stop_progressbar = new QPushButton(frame_12);
        stop_progressbar->setObjectName(QString::fromUtf8("stop_progressbar"));
        sizePolicy2.setHeightForWidth(stop_progressbar->sizePolicy().hasHeightForWidth());
        stop_progressbar->setSizePolicy(sizePolicy2);
        stop_progressbar->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_25->addWidget(stop_progressbar, 2, 4, 1, 1);


        gridLayout_28->addLayout(gridLayout_25, 0, 0, 1, 1);


        horizontalLayout->addWidget(frame_12);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 10, 0, 5);
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        sizePolicy1.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy1);
        frame_3->setFont(font);
        frame_3->setStyleSheet(QString::fromUtf8("\n"
"QFrame{\n"
"background-color: rgb(255,255,255);\n"
"border-radius: 5px;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setHorizontalSpacing(15);
        gridLayout_6->setVerticalSpacing(7);
        gridLayout_6->setContentsMargins(15, 5, 15, 5);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(15);
        gridLayout_5->setVerticalSpacing(7);
        gridLayout_5->setContentsMargins(15, -1, 15, 5);
        Device_Id_Read = new QLineEdit(frame_3);
        Device_Id_Read->setObjectName(QString::fromUtf8("Device_Id_Read"));
        sizePolicy2.setHeightForWidth(Device_Id_Read->sizePolicy().hasHeightForWidth());
        Device_Id_Read->setSizePolicy(sizePolicy2);
        Device_Id_Read->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"border: 1px solid gray;\n"
"\n"
"border-radius: 5px;\n"
"\n"
"padding: 0 8px;\n"
"\n"
"background: White;\n"
"\n"
"selection-background-color: darkgray;\n"
"\n"
"}"));

        gridLayout_5->addWidget(Device_Id_Read, 1, 4, 1, 1);

        state_version_2 = new QPushButton(frame_3);
        state_version_2->setObjectName(QString::fromUtf8("state_version_2"));
        sizePolicy2.setHeightForWidth(state_version_2->sizePolicy().hasHeightForWidth());
        state_version_2->setSizePolicy(sizePolicy2);
        state_version_2->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout_5->addWidget(state_version_2, 1, 6, 1, 1);

        Hw_Version_Read = new QLineEdit(frame_3);
        Hw_Version_Read->setObjectName(QString::fromUtf8("Hw_Version_Read"));
        sizePolicy2.setHeightForWidth(Hw_Version_Read->sizePolicy().hasHeightForWidth());
        Hw_Version_Read->setSizePolicy(sizePolicy2);
        Hw_Version_Read->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"border: 1px solid gray;\n"
"\n"
"border-radius: 5px;\n"
"\n"
"padding: 0 8px;\n"
"\n"
"background: White;\n"
"\n"
"selection-background-color: darkgray;\n"
"\n"
"}"));

        gridLayout_5->addWidget(Hw_Version_Read, 1, 1, 1, 1);

        sw_Version_Read = new QLineEdit(frame_3);
        sw_Version_Read->setObjectName(QString::fromUtf8("sw_Version_Read"));
        sizePolicy2.setHeightForWidth(sw_Version_Read->sizePolicy().hasHeightForWidth());
        sw_Version_Read->setSizePolicy(sizePolicy2);
        sw_Version_Read->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"border: 1px solid gray;\n"
"\n"
"border-radius: 5px;\n"
"\n"
"padding: 0 8px;\n"
"\n"
"background: White;\n"
"\n"
"selection-background-color: darkgray;\n"
"\n"
"}"));

        gridLayout_5->addWidget(sw_Version_Read, 1, 2, 1, 1);

        State_Version_Read = new QLineEdit(frame_3);
        State_Version_Read->setObjectName(QString::fromUtf8("State_Version_Read"));
        sizePolicy2.setHeightForWidth(State_Version_Read->sizePolicy().hasHeightForWidth());
        State_Version_Read->setSizePolicy(sizePolicy2);
        State_Version_Read->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"border: 1px solid gray;\n"
"\n"
"border-radius: 5px;\n"
"\n"
"padding: 0 8px;\n"
"\n"
"background: White;\n"
"\n"
"selection-background-color: darkgray;\n"
"\n"
"}"));

        gridLayout_5->addWidget(State_Version_Read, 1, 5, 1, 1);

        preset_Read = new QLineEdit(frame_3);
        preset_Read->setObjectName(QString::fromUtf8("preset_Read"));
        sizePolicy2.setHeightForWidth(preset_Read->sizePolicy().hasHeightForWidth());
        preset_Read->setSizePolicy(sizePolicy2);
        preset_Read->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"\n"
"border: 1px solid gray;\n"
"\n"
"border-radius: 5px;\n"
"\n"
"padding: 0 8px;\n"
"\n"
"background: White;\n"
"\n"
"selection-background-color: darkgray;\n"
"\n"
"}"));

        gridLayout_5->addWidget(preset_Read, 1, 3, 1, 1);

        SlaveAddress = new QSpinBox(frame_3);
        SlaveAddress->setObjectName(QString::fromUtf8("SlaveAddress"));
        sizePolicy2.setHeightForWidth(SlaveAddress->sizePolicy().hasHeightForWidth());
        SlaveAddress->setSizePolicy(sizePolicy2);
        SlaveAddress->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_5->addWidget(SlaveAddress, 1, 0, 1, 1);

        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush11);
        QBrush brush48(QColor(0, 0, 0, 128));
        brush48.setStyle(Qt::NoBrush);
        palette15.setBrush(QPalette::Active, QPalette::PlaceholderText, brush48);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        QBrush brush49(QColor(0, 0, 0, 128));
        brush49.setStyle(Qt::NoBrush);
        palette15.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush49);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        QBrush brush50(QColor(0, 0, 0, 128));
        brush50.setStyle(Qt::NoBrush);
        palette15.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush50);
        label_7->setPalette(palette15);
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_7, 0, 1, 1, 1);

        label_8 = new QLabel(frame_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush11);
        QBrush brush51(QColor(0, 0, 0, 128));
        brush51.setStyle(Qt::NoBrush);
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush51);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        QBrush brush52(QColor(0, 0, 0, 128));
        brush52.setStyle(Qt::NoBrush);
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush52);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        QBrush brush53(QColor(0, 0, 0, 128));
        brush53.setStyle(Qt::NoBrush);
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush53);
        label_8->setPalette(palette16);
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_8, 0, 2, 1, 1);

        label_9 = new QLabel(frame_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush11);
        QBrush brush54(QColor(0, 0, 0, 128));
        brush54.setStyle(Qt::NoBrush);
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush54);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        QBrush brush55(QColor(0, 0, 0, 128));
        brush55.setStyle(Qt::NoBrush);
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush55);
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        QBrush brush56(QColor(0, 0, 0, 128));
        brush56.setStyle(Qt::NoBrush);
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush56);
        label_9->setPalette(palette17);
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_9, 0, 3, 1, 1);

        label_10 = new QLabel(frame_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush11);
        QBrush brush57(QColor(0, 0, 0, 128));
        brush57.setStyle(Qt::NoBrush);
        palette18.setBrush(QPalette::Active, QPalette::PlaceholderText, brush57);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        QBrush brush58(QColor(0, 0, 0, 128));
        brush58.setStyle(Qt::NoBrush);
        palette18.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush58);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        QBrush brush59(QColor(0, 0, 0, 128));
        brush59.setStyle(Qt::NoBrush);
        palette18.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush59);
        label_10->setPalette(palette18);
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_10, 0, 4, 1, 1);

        label_11 = new QLabel(frame_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette19.setBrush(QPalette::Active, QPalette::Text, brush);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush11);
        QBrush brush60(QColor(0, 0, 0, 128));
        brush60.setStyle(Qt::NoBrush);
        palette19.setBrush(QPalette::Active, QPalette::PlaceholderText, brush60);
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        QBrush brush61(QColor(0, 0, 0, 128));
        brush61.setStyle(Qt::NoBrush);
        palette19.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush61);
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        QBrush brush62(QColor(0, 0, 0, 128));
        brush62.setStyle(Qt::NoBrush);
        palette19.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush62);
        label_11->setPalette(palette19);
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_11, 0, 5, 1, 1);

        label_13 = new QLabel(frame_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush11);
        QBrush brush63(QColor(0, 0, 0, 128));
        brush63.setStyle(Qt::NoBrush);
        palette20.setBrush(QPalette::Active, QPalette::PlaceholderText, brush63);
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        QBrush brush64(QColor(0, 0, 0, 128));
        brush64.setStyle(Qt::NoBrush);
        palette20.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush64);
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        QBrush brush65(QColor(0, 0, 0, 128));
        brush65.setStyle(Qt::NoBrush);
        palette20.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush65);
        label_13->setPalette(palette20);
        label_13->setFont(font2);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_13, 0, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);


        horizontalLayout_5->addWidget(frame_3);


        gridLayout->addLayout(horizontalLayout_5, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(browseLineEdit, BrowseUpgrade);
        QWidget::setTabOrder(BrowseUpgrade, startBrowse);
        QWidget::setTabOrder(startBrowse, jump_to_app_btn);
        QWidget::setTabOrder(jump_to_app_btn, Reset_timestamp);
        QWidget::setTabOrder(Reset_timestamp, StartAddress);
        QWidget::setTabOrder(StartAddress, nSize);
        QWidget::setTabOrder(nSize, single_multi_write);
        QWidget::setTabOrder(single_multi_write, hex_check);
        QWidget::setTabOrder(hex_check, SendCustomFrame);
        QWidget::setTabOrder(SendCustomFrame, custom_data_clear);
        QWidget::setTabOrder(custom_data_clear, customLineEdit1);
        QWidget::setTabOrder(customLineEdit1, customLineEdit2);
        QWidget::setTabOrder(customLineEdit2, customLineEdit3);
        QWidget::setTabOrder(customLineEdit3, customLineEdit4);
        QWidget::setTabOrder(customLineEdit4, customLineEdit5);
        QWidget::setTabOrder(customLineEdit5, customLineEdit6);
        QWidget::setTabOrder(customLineEdit6, customLineEdit7);
        QWidget::setTabOrder(customLineEdit7, customLineEdit8);
        QWidget::setTabOrder(customLineEdit8, customLineEdit9);
        QWidget::setTabOrder(customLineEdit9, customLineEdit10);
        QWidget::setTabOrder(customLineEdit10, customLineEdit11);
        QWidget::setTabOrder(customLineEdit11, customLineEdit12);
        QWidget::setTabOrder(customLineEdit12, customLineEdit13);
        QWidget::setTabOrder(customLineEdit13, customLineEdit14);
        QWidget::setTabOrder(customLineEdit14, customLineEdit15);
        QWidget::setTabOrder(customLineEdit15, customLineEdit16);
        QWidget::setTabOrder(customLineEdit16, customLineEdit17);
        QWidget::setTabOrder(customLineEdit17, customLineEdit18);
        QWidget::setTabOrder(customLineEdit18, customLineEdit19);
        QWidget::setTabOrder(customLineEdit19, customLineEdit20);
        QWidget::setTabOrder(customLineEdit20, customLineEdit21);
        QWidget::setTabOrder(customLineEdit21, customLineEdit22);
        QWidget::setTabOrder(customLineEdit22, customLineEdit23);
        QWidget::setTabOrder(customLineEdit23, customLineEdit24);
        QWidget::setTabOrder(customLineEdit24, customLineEdit25);
        QWidget::setTabOrder(customLineEdit25, customLineEdit26);
        QWidget::setTabOrder(customLineEdit26, customLineEdit27);
        QWidget::setTabOrder(customLineEdit27, customLineEdit28);
        QWidget::setTabOrder(customLineEdit28, customLineEdit29);
        QWidget::setTabOrder(customLineEdit29, customLineEdit30);
        QWidget::setTabOrder(customLineEdit30, customLineEdit31);
        QWidget::setTabOrder(customLineEdit31, customLineEdit32);
        QWidget::setTabOrder(customLineEdit32, customLineEdit33);
        QWidget::setTabOrder(customLineEdit33, customLineEdit34);
        QWidget::setTabOrder(customLineEdit34, customLineEdit35);
        QWidget::setTabOrder(customLineEdit35, customLineEdit36);
        QWidget::setTabOrder(customLineEdit36, customLineEdit37);
        QWidget::setTabOrder(customLineEdit37, customLineEdit38);
        QWidget::setTabOrder(customLineEdit38, customLineEdit39);
        QWidget::setTabOrder(customLineEdit39, customLineEdit40);
        QWidget::setTabOrder(customLineEdit40, customLineEdit41);
        QWidget::setTabOrder(customLineEdit41, customLineEdit42);
        QWidget::setTabOrder(customLineEdit42, customLineEdit43);
        QWidget::setTabOrder(customLineEdit43, customLineEdit44);
        QWidget::setTabOrder(customLineEdit44, customLineEdit45);
        QWidget::setTabOrder(customLineEdit45, customLineEdit46);
        QWidget::setTabOrder(customLineEdit46, customLineEdit47);
        QWidget::setTabOrder(customLineEdit47, customLineEdit48);
        QWidget::setTabOrder(customLineEdit48, customLineEdit49);
        QWidget::setTabOrder(customLineEdit49, customLineEdit50);
        QWidget::setTabOrder(customLineEdit50, customLineEdit51);
        QWidget::setTabOrder(customLineEdit51, customLineEdit52);
        QWidget::setTabOrder(customLineEdit52, customLineEdit53);
        QWidget::setTabOrder(customLineEdit53, customLineEdit54);
        QWidget::setTabOrder(customLineEdit54, customLineEdit55);
        QWidget::setTabOrder(customLineEdit55, customLineEdit56);
        QWidget::setTabOrder(customLineEdit56, customLineEdit57);
        QWidget::setTabOrder(customLineEdit57, customLineEdit58);
        QWidget::setTabOrder(customLineEdit58, customLineEdit59);
        QWidget::setTabOrder(customLineEdit59, customLineEdit60);
        QWidget::setTabOrder(customLineEdit60, customLineEdit61);
        QWidget::setTabOrder(customLineEdit61, customLineEdit62);
        QWidget::setTabOrder(customLineEdit62, customLineEdit63);
        QWidget::setTabOrder(customLineEdit63, customLineEdit64);
        QWidget::setTabOrder(customLineEdit64, customLineEdit65);
        QWidget::setTabOrder(customLineEdit65, customLineEdit66);
        QWidget::setTabOrder(customLineEdit66, customLineEdit67);
        QWidget::setTabOrder(customLineEdit67, customLineEdit68);
        QWidget::setTabOrder(customLineEdit68, customLineEdit69);
        QWidget::setTabOrder(customLineEdit69, customLineEdit70);
        QWidget::setTabOrder(customLineEdit70, customLineEdit71);
        QWidget::setTabOrder(customLineEdit71, customLineEdit72);
        QWidget::setTabOrder(customLineEdit72, customLineEdit73);
        QWidget::setTabOrder(customLineEdit73, customLineEdit74);
        QWidget::setTabOrder(customLineEdit74, customLineEdit75);
        QWidget::setTabOrder(customLineEdit75, customLineEdit76);
        QWidget::setTabOrder(customLineEdit76, customLineEdit77);
        QWidget::setTabOrder(customLineEdit77, customLineEdit78);
        QWidget::setTabOrder(customLineEdit78, customLineEdit79);
        QWidget::setTabOrder(customLineEdit79, customLineEdit80);
        QWidget::setTabOrder(customLineEdit80, customLineEdit81);
        QWidget::setTabOrder(customLineEdit81, customLineEdit82);
        QWidget::setTabOrder(customLineEdit82, customLineEdit83);
        QWidget::setTabOrder(customLineEdit83, customLineEdit84);
        QWidget::setTabOrder(customLineEdit84, customLineEdit85);
        QWidget::setTabOrder(customLineEdit85, customLineEdit86);
        QWidget::setTabOrder(customLineEdit86, customLineEdit87);
        QWidget::setTabOrder(customLineEdit87, customLineEdit88);
        QWidget::setTabOrder(customLineEdit88, customLineEdit89);
        QWidget::setTabOrder(customLineEdit89, customLineEdit90);
        QWidget::setTabOrder(customLineEdit90, customLineEdit92);
        QWidget::setTabOrder(customLineEdit92, customLineEdit93);
        QWidget::setTabOrder(customLineEdit93, customLineEdit94);
        QWidget::setTabOrder(customLineEdit94, customLineEdit95);
        QWidget::setTabOrder(customLineEdit95, customLineEdit96);
        QWidget::setTabOrder(customLineEdit96, customLineEdit97);
        QWidget::setTabOrder(customLineEdit97, customLineEdit98);
        QWidget::setTabOrder(customLineEdit98, customLineEdit99);
        QWidget::setTabOrder(customLineEdit99, customLineEdit100);
        QWidget::setTabOrder(customLineEdit100, customLineEdit101);
        QWidget::setTabOrder(customLineEdit101, customLineEdit102);
        QWidget::setTabOrder(customLineEdit102, customLineEdit103);
        QWidget::setTabOrder(customLineEdit103, customLineEdit104);
        QWidget::setTabOrder(customLineEdit104, customLineEdit105);
        QWidget::setTabOrder(customLineEdit105, customLineEdit106);
        QWidget::setTabOrder(customLineEdit106, customLineEdit107);
        QWidget::setTabOrder(customLineEdit107, customLineEdit108);
        QWidget::setTabOrder(customLineEdit108, customLineEdit109);
        QWidget::setTabOrder(customLineEdit109, customLineEdit110);
        QWidget::setTabOrder(customLineEdit110, customLineEdit111);
        QWidget::setTabOrder(customLineEdit111, customLineEdit112);
        QWidget::setTabOrder(customLineEdit112, customLineEdit113);
        QWidget::setTabOrder(customLineEdit113, customLineEdit114);
        QWidget::setTabOrder(customLineEdit114, customLineEdit115);
        QWidget::setTabOrder(customLineEdit115, customLineEdit116);
        QWidget::setTabOrder(customLineEdit116, customLineEdit117);
        QWidget::setTabOrder(customLineEdit117, customLineEdit118);
        QWidget::setTabOrder(customLineEdit118, customLineEdit119);
        QWidget::setTabOrder(customLineEdit119, customLineEdit120);
        QWidget::setTabOrder(customLineEdit120, customLineEdit121);
        QWidget::setTabOrder(customLineEdit121, customLineEdit122);
        QWidget::setTabOrder(customLineEdit122, customLineEdit123);
        QWidget::setTabOrder(customLineEdit123, customLineEdit124);
        QWidget::setTabOrder(customLineEdit124, customLineEdit125);
        QWidget::setTabOrder(customLineEdit125, checkBox_FanMode);
        QWidget::setTabOrder(checkBox_FanMode, lineEdit_FaultCurrentSetPoint);
        QWidget::setTabOrder(lineEdit_FaultCurrentSetPoint, pushButton_ReadData);
        QWidget::setTabOrder(pushButton_ReadData, checkBox_DeglitchingEnable);
        QWidget::setTabOrder(checkBox_DeglitchingEnable, lineEdit_FanTempLedMin_write);
        QWidget::setTabOrder(lineEdit_FanTempLedMin_write, checkBox_DeadTime10);
        QWidget::setTabOrder(checkBox_DeadTime10, fault_fifo_2);
        QWidget::setTabOrder(fault_fifo_2, fault_6);
        QWidget::setTabOrder(fault_6, lineEdit_NumMicroCycles_write);
        QWidget::setTabOrder(lineEdit_NumMicroCycles_write, lineEdit_DeadTime10_write);
        QWidget::setTabOrder(lineEdit_DeadTime10_write, lineEdit_Vin);
        QWidget::setTabOrder(lineEdit_Vin, warning_1);
        QWidget::setTabOrder(warning_1, lineEdit_TempDriver100_2);
        QWidget::setTabOrder(lineEdit_TempDriver100_2, fault_Id_2);
        QWidget::setTabOrder(fault_Id_2, lineEdit_TempDriver100);
        QWidget::setTabOrder(lineEdit_TempDriver100, checkBox_FanTempLedMax);
        QWidget::setTabOrder(checkBox_FanTempLedMax, FaultTempled100_4);
        QWidget::setTabOrder(FaultTempled100_4, rawData);
        QWidget::setTabOrder(rawData, lineEdit_SyncMode_write);
        QWidget::setTabOrder(lineEdit_SyncMode_write, RawDataCLear);
        QWidget::setTabOrder(RawDataCLear, lineEdit_FanMode_read);
        QWidget::setTabOrder(lineEdit_FanMode_read, lineEdit_FanRPM);
        QWidget::setTabOrder(lineEdit_FanRPM, LedMaxCurrentPulse_readButton);
        QWidget::setTabOrder(LedMaxCurrentPulse_readButton, lineEdit_HumidityDriver100);
        QWidget::setTabOrder(lineEdit_HumidityDriver100, pushButton_eventReadIndex_5);
        QWidget::setTabOrder(pushButton_eventReadIndex_5, lineEdit_HumidityDriver100_2);
        QWidget::setTabOrder(lineEdit_HumidityDriver100_2, lineEdit_DeglitchingEnable_write);
        QWidget::setTabOrder(lineEdit_DeglitchingEnable_write, MicroCycleLedConfig_readButton);
        QWidget::setTabOrder(MicroCycleLedConfig_readButton, lineEdit_LedCycleTime_read);
        QWidget::setTabOrder(lineEdit_LedCycleTime_read, lineEdit_FanTempLedMin_read);
        QWidget::setTabOrder(lineEdit_FanTempLedMin_read, warning_2);
        QWidget::setTabOrder(warning_2, checkBox_NumMicroCycles);
        QWidget::setTabOrder(checkBox_NumMicroCycles, tabWidget);
        QWidget::setTabOrder(tabWidget, FaultTempled100_3);
        QWidget::setTabOrder(FaultTempled100_3, Combo_FanMode_write);
        QWidget::setTabOrder(Combo_FanMode_write, pushButton_RamDiagnosis);
        QWidget::setTabOrder(pushButton_RamDiagnosis, lineEdit_LedTempWar_read);
        QWidget::setTabOrder(lineEdit_LedTempWar_read, lineEdit_TempLed100_2);
        QWidget::setTabOrder(lineEdit_TempLed100_2, lineEdit_LedTempWar_write);
        QWidget::setTabOrder(lineEdit_LedTempWar_write, lineEdit_DeglitchingEnable_read);
        QWidget::setTabOrder(lineEdit_DeglitchingEnable_read, warning_5);
        QWidget::setTabOrder(warning_5, fault_1);
        QWidget::setTabOrder(fault_1, lineEdit_FaultLedID);
        QWidget::setTabOrder(lineEdit_FaultLedID, lineEdit_NumMicroCycles_read);
        QWidget::setTabOrder(lineEdit_NumMicroCycles_read, lineEdit_FanDuty);
        QWidget::setTabOrder(lineEdit_FanDuty, fifo_numevent_Enter);
        QWidget::setTabOrder(fifo_numevent_Enter, lineEdit_FaultFifoNumEvents);
        QWidget::setTabOrder(lineEdit_FaultFifoNumEvents, LedCurrentSetpoint_readButton);
        QWidget::setTabOrder(LedCurrentSetpoint_readButton, LedMicroCycleTimeLineEdit_read);
        QWidget::setTabOrder(LedMicroCycleTimeLineEdit_read, checkBox_LedTempWar);
        QWidget::setTabOrder(checkBox_LedTempWar, lineEdit_DeadTime10_read);
        QWidget::setTabOrder(lineEdit_DeadTime10_read, update_read_faults);
        QWidget::setTabOrder(update_read_faults, lineEdit_FaultFIFO_WR_Pointer);
        QWidget::setTabOrder(lineEdit_FaultFIFO_WR_Pointer, FaultHumidityDriver100_2);
        QWidget::setTabOrder(FaultHumidityDriver100_2, warning_6);
        QWidget::setTabOrder(warning_6, lineEdit_FanTempLedMax_read);
        QWidget::setTabOrder(lineEdit_FanTempLedMax_read, LedMaxCurrentContinuous_readButton);
        QWidget::setTabOrder(LedMaxCurrentContinuous_readButton, TimeStamp_2);
        QWidget::setTabOrder(TimeStamp_2, comboBox_configuration);
        QWidget::setTabOrder(comboBox_configuration, lineEdit_TempLed100_1);
        QWidget::setTabOrder(lineEdit_TempLed100_1, Fault_warning);
        QWidget::setTabOrder(Fault_warning, fault_4);
        QWidget::setTabOrder(fault_4, customLineEdit91);
        QWidget::setTabOrder(customLineEdit91, warning_3);
        QWidget::setTabOrder(warning_3, lineEdit_FaultTempLed100_2);
        QWidget::setTabOrder(lineEdit_FaultTempLed100_2, faultcurrent_read_2);
        QWidget::setTabOrder(faultcurrent_read_2, checkBox_SyncMode);
        QWidget::setTabOrder(checkBox_SyncMode, lineEdit_FaultVin);
        QWidget::setTabOrder(lineEdit_FaultVin, fault_2);
        QWidget::setTabOrder(fault_2, fault_7);
        QWidget::setTabOrder(fault_7, fault_5);
        QWidget::setTabOrder(fault_5, lineEdit_Faults);
        QWidget::setTabOrder(lineEdit_Faults, checkBox_FanTempLedMin);
        QWidget::setTabOrder(checkBox_FanTempLedMin, pushButton_FlashFault);
        QWidget::setTabOrder(pushButton_FlashFault, pushButton_WriteData);
        QWidget::setTabOrder(pushButton_WriteData, lineEdit_FaultTempLed100_1);
        QWidget::setTabOrder(lineEdit_FaultTempLed100_1, pushButton_Read_RamFault);
        QWidget::setTabOrder(pushButton_Read_RamFault, lineEdit_SyncMode_read);
        QWidget::setTabOrder(lineEdit_SyncMode_read, FaultTempDriver100_2);
        QWidget::setTabOrder(FaultTempDriver100_2, fault_3);
        QWidget::setTabOrder(fault_3, warning_4);
        QWidget::setTabOrder(warning_4, FaultVin_2);
        QWidget::setTabOrder(FaultVin_2, lineEdit_FanTempLedMax_write);
        QWidget::setTabOrder(lineEdit_FanTempLedMax_write, connect_btn);
        QWidget::setTabOrder(connect_btn, checkBox_LedMicroCycleTime);
        QWidget::setTabOrder(checkBox_LedMicroCycleTime, state_version_2);
        QWidget::setTabOrder(state_version_2, LedMicroCycleTimeLineEdit_write);
        QWidget::setTabOrder(LedMicroCycleTimeLineEdit_write, checkBox_LedCycleTime);
        QWidget::setTabOrder(checkBox_LedCycleTime, lineEdit_LedCycleTime_write);
        QWidget::setTabOrder(lineEdit_LedCycleTime_write, baud);
        QWidget::setTabOrder(baud, parity);
        QWidget::setTabOrder(parity, serialPortSelect_comboBox);
        QWidget::setTabOrder(serialPortSelect_comboBox, databits);
        QWidget::setTabOrder(databits, stopbits);
        QWidget::setTabOrder(stopbits, Device_Id_Read);
        QWidget::setTabOrder(Device_Id_Read, connect_disconnect_status);
        QWidget::setTabOrder(connect_disconnect_status, Hw_Version_Read);
        QWidget::setTabOrder(Hw_Version_Read, sw_Version_Read);
        QWidget::setTabOrder(sw_Version_Read, State_Version_Read);
        QWidget::setTabOrder(State_Version_Read, preset_Read);
        QWidget::setTabOrder(preset_Read, SlaveAddress);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Baud Rate", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Parity", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Data Bits", nullptr));
        connect_btn->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Stop Bits", nullptr));
        label->setText(QApplication::translate("MainWindow", "COM Port", nullptr));
        connect_disconnect_status->setText(QString());
        label_6->setText(QString());
        checkBox_FanMode->setText(QString());
        pushButton_Read_Command->setText(QApplication::translate("MainWindow", "Read", nullptr));
        Light_on_cmd_button->setText(QApplication::translate("MainWindow", "Light On", nullptr));
        label_69->setText(QApplication::translate("MainWindow", "Fan Mode", nullptr));
        label_68->setText(QApplication::translate("MainWindow", "Command", nullptr));
        pushButton_Write_Command->setText(QApplication::translate("MainWindow", "Write", nullptr));
        Combo_FanMode_write->setItemText(0, QApplication::translate("MainWindow", "0", nullptr));
        Combo_FanMode_write->setItemText(1, QApplication::translate("MainWindow", "1", nullptr));
        Combo_FanMode_write->setItemText(2, QApplication::translate("MainWindow", "2", nullptr));

        Light_off_cmd_button->setText(QApplication::translate("MainWindow", "Light Off", nullptr));
        config_cmd_button->setText(QApplication::translate("MainWindow", "Config", nullptr));
        label_32->setText(QApplication::translate("MainWindow", "Fan RPM", nullptr));
        label_29->setText(QApplication::translate("MainWindow", "Board 2 Temp (\302\260C)", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "Supply Voltage", nullptr));
        label_27->setText(QApplication::translate("MainWindow", "Diagnosis", nullptr));
        label_28->setText(QApplication::translate("MainWindow", "Board 1 Temp (\302\260C)", nullptr));
        pushButton_RamDiagnosis->setText(QApplication::translate("MainWindow", "Read", nullptr));
        label_33->setText(QApplication::translate("MainWindow", "Ambient Temp (\302\260C)", nullptr));
        label_31->setText(QApplication::translate("MainWindow", "Fan Duty Cycle", nullptr));
        label_57->setText(QApplication::translate("MainWindow", "Humidity (%)", nullptr));
        label_81->setText(QApplication::translate("MainWindow", "Config.", nullptr));
        warning_1->setText(QString());
        label_86->setText(QApplication::translate("MainWindow", "Config.", nullptr));
        fault_2->setText(QString());
        label_77->setText(QApplication::translate("MainWindow", "High Temp.", nullptr));
        warning_4->setText(QString());
        label_84->setText(QApplication::translate("MainWindow", "Humidity", nullptr));
        label_80->setText(QApplication::translate("MainWindow", "Humidity", nullptr));
        label_73->setText(QApplication::translate("MainWindow", "Warning", nullptr));
        fault_4->setText(QString());
        label_75->setText(QApplication::translate("MainWindow", "Fan", nullptr));
        label_79->setText(QApplication::translate("MainWindow", "High Voltage", nullptr));
        fault_3->setText(QString());
        warning_3->setText(QString());
        fault_7->setText(QString());
        fault_6->setText(QString());
        label_83->setText(QApplication::translate("MainWindow", "Sync", nullptr));
        warning_2->setText(QString());
        label_76->setText(QApplication::translate("MainWindow", "Temp.", nullptr));
        warning_5->setText(QString());
        label_85->setText(QApplication::translate("MainWindow", "Modbus", nullptr));
        warning_6->setText(QString());
        fault_1->setText(QString());
        label_74->setText(QApplication::translate("MainWindow", "Driver", nullptr));
        label_82->setText(QApplication::translate("MainWindow", "Temp.", nullptr));
        fault_5->setText(QString());
        label_78->setText(QApplication::translate("MainWindow", "Low Voltage", nullptr));
        label_72->setText(QApplication::translate("MainWindow", "Fault", nullptr));
        label_87->setText(QApplication::translate("MainWindow", "Continuous  Update", nullptr));
        Fault_warning->setText(QApplication::translate("MainWindow", "Fault/Warning", nullptr));
        update_read_faults->setText(QApplication::translate("MainWindow", "Start", nullptr));
        checkBox_LedCycleTime->setText(QString());
        checkBox_LedTempWar->setText(QString());
        fantempmax_lable->setText(QApplication::translate("MainWindow", "Fan Temp Max (\302\260C)", nullptr));
        cycletime_lable->setText(QApplication::translate("MainWindow", "Cycle time (\302\265s)", nullptr));
        suncmode_lable->setText(QApplication::translate("MainWindow", "Sync Mode ", nullptr));
        microCycle_lable->setText(QApplication::translate("MainWindow", "Micro Cycle Time (\302\265s)", nullptr));
        LedCurrentSetpoint_readButton->setText(QApplication::translate("MainWindow", "Open", nullptr));
        MicroCycleLedConfig_readButton->setText(QApplication::translate("MainWindow", "Open", nullptr));
        deglitching_lable->setText(QApplication::translate("MainWindow", "Deglitching ", nullptr));
        pushButton_WriteData->setText(QApplication::translate("MainWindow", "Write", nullptr));
        fantempled_led->setText(QApplication::translate("MainWindow", "Fan Temp Min (\302\260C)", nullptr));
        checkBox_FanTempLedMin->setText(QString());
        label_24->setText(QApplication::translate("MainWindow", "Led Current (mA)", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "Max Current Continuous (mA)", nullptr));
        LedMaxCurrentPulse_readButton->setText(QApplication::translate("MainWindow", "Open", nullptr));
        noofMicrocycle_label->setText(QApplication::translate("MainWindow", "Num of Microcycle", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "Max Current Pulse (mA)", nullptr));
        deadtime_label->setText(QApplication::translate("MainWindow", "Dead Time (\302\265s)", nullptr));
        comboBox_configuration->setItemText(0, QApplication::translate("MainWindow", "CONFIG", nullptr));
        comboBox_configuration->setItemText(1, QApplication::translate("MainWindow", "CONFIG_PRESET", nullptr));

        LedMaxCurrentContinuous_readButton->setText(QApplication::translate("MainWindow", "Open", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "LED Configuration", nullptr));
        checkBox_NumMicroCycles->setText(QString());
        pushButton_ReadData->setText(QApplication::translate("MainWindow", "Read", nullptr));
        checkBox_DeglitchingEnable->setText(QString());
        label_23->setText(QApplication::translate("MainWindow", "Microcycle Config.", nullptr));
        checkBox_FanTempLedMax->setText(QString());
        checkBox_LedMicroCycleTime->setText(QString());
        ledwarning_lable->setText(QApplication::translate("MainWindow", "Led Temp Warning (\302\260C)", nullptr));
        checkBox_SyncMode->setText(QString());
        checkBox_DeadTime10->setText(QString());
        label_42->setText(QApplication::translate("MainWindow", "Fault Fifo", nullptr));
        label_48->setText(QApplication::translate("MainWindow", "Faults ID", nullptr));
        pushButton_FlashFault->setText(QApplication::translate("MainWindow", "Read", nullptr));
        label_53->setText(QApplication::translate("MainWindow", "Ambient Temp (\302\260C)", nullptr));
        label_45->setText(QApplication::translate("MainWindow", "Num of Events", nullptr));
        label_54->setText(QApplication::translate("MainWindow", "Humidity (%) ", nullptr));
        label_47->setText(QApplication::translate("MainWindow", "Faults", nullptr));
        label_43->setText(QString());
        label_44->setText(QApplication::translate("MainWindow", "Write Pointer", nullptr));
        label_50->setText(QApplication::translate("MainWindow", "Supply Voltage (V)", nullptr));
        label_58->setText(QApplication::translate("MainWindow", "Time Stamp", nullptr));
        label_46->setText(QApplication::translate("MainWindow", "Enter Index", nullptr));
        label_51->setText(QApplication::translate("MainWindow", "Board 1 Temp (\302\260C)", nullptr));
        label_49->setText(QApplication::translate("MainWindow", "Current (mA)", nullptr));
        pushButton_eventReadIndex_5->setText(QApplication::translate("MainWindow", "Read", nullptr));
        label_52->setText(QApplication::translate("MainWindow", "Board 2 Temp (\302\260C)", nullptr));
        Fault_fifo_reset_btn->setText(QApplication::translate("MainWindow", "Fault FIFO Reset", nullptr));
        RawDataCLear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        label_104->setText(QApplication::translate("MainWindow", "Modbus Request/Response", nullptr));
        label_41->setText(QApplication::translate("MainWindow", "Ambient Temp.", nullptr));
        label_39->setText(QApplication::translate("MainWindow", "Board 1 Temp (\302\260C)", nullptr));
        label_38->setText(QApplication::translate("MainWindow", "Supply Voltage", nullptr));
        label_37->setText(QApplication::translate("MainWindow", "Current (mA)", nullptr));
        label_35->setText(QApplication::translate("MainWindow", "Faults", nullptr));
        label_40->setText(QApplication::translate("MainWindow", "Board 2 Temp (\302\260C)", nullptr));
        label_36->setText(QApplication::translate("MainWindow", "Led ID", nullptr));
        pushButton_Read_RamFault->setText(QApplication::translate("MainWindow", "Read", nullptr));
        label_34->setText(QApplication::translate("MainWindow", "Fault", nullptr));
        label_61->setText(QApplication::translate("MainWindow", "Humidity  (%)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Configurations", nullptr));
        label_59->setText(QApplication::translate("MainWindow", "No of Register", nullptr));
        single_multi_write->setItemText(0, QApplication::translate("MainWindow", "Read Register(0x03)", nullptr));
        single_multi_write->setItemText(1, QApplication::translate("MainWindow", "Single Write Register(0x06)", nullptr));
        single_multi_write->setItemText(2, QApplication::translate("MainWindow", "Multiple Write Register(0x10)", nullptr));

        hex_check->setText(QApplication::translate("MainWindow", "Display Hex", nullptr));
        SendCustomFrame->setText(QApplication::translate("MainWindow", "Send", nullptr));
        custom_data_clear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        label_56->setText(QApplication::translate("MainWindow", "Start Address", nullptr));
        label_60->setText(QApplication::translate("MainWindow", "Function Code", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "R/W Registers", nullptr));
        BrowseUpgrade->setText(QApplication::translate("MainWindow", "Browse", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Upgrade", nullptr));
        startBrowse->setText(QApplication::translate("MainWindow", "Start", nullptr));
        label_55->setText(QApplication::translate("MainWindow", "Filepath", nullptr));
        label_62->setText(QApplication::translate("MainWindow", "Progress", nullptr));
        Reset_timestamp->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        jump_to_app_btn->setText(QApplication::translate("MainWindow", "Jump to App", nullptr));
        stop_progressbar->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        state_version_2->setText(QApplication::translate("MainWindow", "Read Status", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "HW Version", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "FW Version", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Preset Valid", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Device  ID", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "State", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Slave ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
