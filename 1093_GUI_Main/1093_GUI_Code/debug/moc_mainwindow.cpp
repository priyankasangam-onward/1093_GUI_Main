/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[63];
    char stringdata0[1510];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 22), // "on_connect_btn_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 41), // "on_MicroCycleLedConfig_readBu..."
QT_MOC_LITERAL(4, 77, 40), // "on_LedCurrentSetpoint_readBut..."
QT_MOC_LITERAL(5, 118, 40), // "on_LedMaxCurrentPulse_readBut..."
QT_MOC_LITERAL(6, 159, 45), // "on_LedMaxCurrentContinuous_re..."
QT_MOC_LITERAL(7, 205, 31), // "on_pushButton_WriteData_clicked"
QT_MOC_LITERAL(8, 237, 30), // "on_pushButton_ReadData_clicked"
QT_MOC_LITERAL(9, 268, 35), // "on_pushButton_Write_Command_c..."
QT_MOC_LITERAL(10, 304, 34), // "on_pushButton_Read_Command_cl..."
QT_MOC_LITERAL(11, 339, 34), // "on_pushButton_RamDiagnosis_cl..."
QT_MOC_LITERAL(12, 374, 35), // "on_pushButton_Read_RamFault_c..."
QT_MOC_LITERAL(13, 410, 32), // "on_pushButton_FlashFault_clicked"
QT_MOC_LITERAL(14, 443, 6), // "MySlot"
QT_MOC_LITERAL(15, 450, 29), // "on_update_read_faults_clicked"
QT_MOC_LITERAL(16, 480, 26), // "on_Reset_timestamp_clicked"
QT_MOC_LITERAL(17, 507, 38), // "on_pushButton_eventReadIndex_..."
QT_MOC_LITERAL(18, 546, 23), // "on_RawDataCLear_clicked"
QT_MOC_LITERAL(19, 570, 24), // "on_BrowseUpgrade_clicked"
QT_MOC_LITERAL(20, 595, 22), // "on_startBrowse_clicked"
QT_MOC_LITERAL(21, 618, 26), // "on_jump_to_app_btn_clicked"
QT_MOC_LITERAL(22, 645, 21), // "customlineedit_enable"
QT_MOC_LITERAL(23, 667, 2), // "nb"
QT_MOC_LITERAL(24, 670, 15), // "statusTabUpdate"
QT_MOC_LITERAL(25, 686, 9), // "addUInt16"
QT_MOC_LITERAL(26, 696, 8), // "uint32_t"
QT_MOC_LITERAL(27, 705, 8), // "uint16_t"
QT_MOC_LITERAL(28, 714, 1), // "a"
QT_MOC_LITERAL(29, 716, 1), // "b"
QT_MOC_LITERAL(30, 718, 24), // "on_Fault_warning_clicked"
QT_MOC_LITERAL(31, 743, 12), // "Preset_valid"
QT_MOC_LITERAL(32, 756, 28), // "on_custom_data_clear_clicked"
QT_MOC_LITERAL(33, 785, 26), // "on_state_version_2_clicked"
QT_MOC_LITERAL(34, 812, 19), // "Fault_warning_clear"
QT_MOC_LITERAL(35, 832, 18), // "clear_all_lineedit"
QT_MOC_LITERAL(36, 851, 22), // "disable_read_lineedits"
QT_MOC_LITERAL(37, 874, 19), // "update_fault_status"
QT_MOC_LITERAL(38, 894, 13), // "fault_warning"
QT_MOC_LITERAL(39, 908, 41), // "on_single_multi_write_current..."
QT_MOC_LITERAL(40, 950, 5), // "index"
QT_MOC_LITERAL(41, 956, 26), // "on_SendCustomFrame_clicked"
QT_MOC_LITERAL(42, 983, 31), // "on_databits_currentIndexChanged"
QT_MOC_LITERAL(43, 1015, 4), // "data"
QT_MOC_LITERAL(44, 1020, 31), // "on_stopbits_currentIndexChanged"
QT_MOC_LITERAL(45, 1052, 27), // "on_baud_currentIndexChanged"
QT_MOC_LITERAL(46, 1080, 28), // "on_parity_currentTextChanged"
QT_MOC_LITERAL(47, 1109, 4), // "arg1"
QT_MOC_LITERAL(48, 1114, 23), // "start_updating_progress"
QT_MOC_LITERAL(49, 1138, 7), // "uint8_t"
QT_MOC_LITERAL(50, 1146, 5), // "count"
QT_MOC_LITERAL(51, 1152, 31), // "on_single_multi_write_activated"
QT_MOC_LITERAL(52, 1184, 28), // "on_nSize_currentIndexChanged"
QT_MOC_LITERAL(53, 1213, 27), // "on_stop_progressbar_clicked"
QT_MOC_LITERAL(54, 1241, 37), // "on_lineEdit_SyncMode_write_te..."
QT_MOC_LITERAL(55, 1279, 46), // "on_lineEdit_DeglitchingEnable..."
QT_MOC_LITERAL(56, 1326, 31), // "on_SlaveAddress_editingFinished"
QT_MOC_LITERAL(57, 1358, 31), // "on_Fault_fifo_reset_btn_clicked"
QT_MOC_LITERAL(58, 1390, 30), // "on_Light_on_cmd_button_clicked"
QT_MOC_LITERAL(59, 1421, 31), // "on_Light_off_cmd_button_clicked"
QT_MOC_LITERAL(60, 1453, 28), // "on_config_cmd_button_clicked"
QT_MOC_LITERAL(61, 1482, 21), // "Conversion_UInt_ASCII"
QT_MOC_LITERAL(62, 1504, 5) // "value"

    },
    "MainWindow\0on_connect_btn_clicked\0\0"
    "on_MicroCycleLedConfig_readButton_clicked\0"
    "on_LedCurrentSetpoint_readButton_clicked\0"
    "on_LedMaxCurrentPulse_readButton_clicked\0"
    "on_LedMaxCurrentContinuous_readButton_clicked\0"
    "on_pushButton_WriteData_clicked\0"
    "on_pushButton_ReadData_clicked\0"
    "on_pushButton_Write_Command_clicked\0"
    "on_pushButton_Read_Command_clicked\0"
    "on_pushButton_RamDiagnosis_clicked\0"
    "on_pushButton_Read_RamFault_clicked\0"
    "on_pushButton_FlashFault_clicked\0"
    "MySlot\0on_update_read_faults_clicked\0"
    "on_Reset_timestamp_clicked\0"
    "on_pushButton_eventReadIndex_5_clicked\0"
    "on_RawDataCLear_clicked\0"
    "on_BrowseUpgrade_clicked\0"
    "on_startBrowse_clicked\0"
    "on_jump_to_app_btn_clicked\0"
    "customlineedit_enable\0nb\0statusTabUpdate\0"
    "addUInt16\0uint32_t\0uint16_t\0a\0b\0"
    "on_Fault_warning_clicked\0Preset_valid\0"
    "on_custom_data_clear_clicked\0"
    "on_state_version_2_clicked\0"
    "Fault_warning_clear\0clear_all_lineedit\0"
    "disable_read_lineedits\0update_fault_status\0"
    "fault_warning\0on_single_multi_write_currentIndexChanged\0"
    "index\0on_SendCustomFrame_clicked\0"
    "on_databits_currentIndexChanged\0data\0"
    "on_stopbits_currentIndexChanged\0"
    "on_baud_currentIndexChanged\0"
    "on_parity_currentTextChanged\0arg1\0"
    "start_updating_progress\0uint8_t\0count\0"
    "on_single_multi_write_activated\0"
    "on_nSize_currentIndexChanged\0"
    "on_stop_progressbar_clicked\0"
    "on_lineEdit_SyncMode_write_textEdited\0"
    "on_lineEdit_DeglitchingEnable_write_textEdited\0"
    "on_SlaveAddress_editingFinished\0"
    "on_Fault_fifo_reset_btn_clicked\0"
    "on_Light_on_cmd_button_clicked\0"
    "on_Light_off_cmd_button_clicked\0"
    "on_config_cmd_button_clicked\0"
    "Conversion_UInt_ASCII\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  259,    2, 0x08 /* Private */,
       3,    0,  260,    2, 0x08 /* Private */,
       4,    0,  261,    2, 0x08 /* Private */,
       5,    0,  262,    2, 0x08 /* Private */,
       6,    0,  263,    2, 0x08 /* Private */,
       7,    0,  264,    2, 0x08 /* Private */,
       8,    0,  265,    2, 0x08 /* Private */,
       9,    0,  266,    2, 0x08 /* Private */,
      10,    0,  267,    2, 0x08 /* Private */,
      11,    0,  268,    2, 0x08 /* Private */,
      12,    0,  269,    2, 0x08 /* Private */,
      13,    0,  270,    2, 0x08 /* Private */,
      14,    0,  271,    2, 0x08 /* Private */,
      15,    0,  272,    2, 0x08 /* Private */,
      16,    0,  273,    2, 0x08 /* Private */,
      17,    0,  274,    2, 0x08 /* Private */,
      18,    0,  275,    2, 0x08 /* Private */,
      19,    0,  276,    2, 0x08 /* Private */,
      20,    0,  277,    2, 0x08 /* Private */,
      21,    0,  278,    2, 0x08 /* Private */,
      22,    1,  279,    2, 0x08 /* Private */,
      24,    0,  282,    2, 0x08 /* Private */,
      25,    2,  283,    2, 0x08 /* Private */,
      30,    0,  288,    2, 0x08 /* Private */,
      31,    0,  289,    2, 0x08 /* Private */,
      32,    0,  290,    2, 0x08 /* Private */,
      33,    0,  291,    2, 0x08 /* Private */,
      34,    0,  292,    2, 0x08 /* Private */,
      35,    0,  293,    2, 0x08 /* Private */,
      36,    0,  294,    2, 0x08 /* Private */,
      37,    1,  295,    2, 0x08 /* Private */,
      39,    1,  298,    2, 0x08 /* Private */,
      41,    0,  301,    2, 0x08 /* Private */,
      42,    1,  302,    2, 0x08 /* Private */,
      44,    1,  305,    2, 0x08 /* Private */,
      45,    1,  308,    2, 0x08 /* Private */,
      46,    1,  311,    2, 0x08 /* Private */,
      48,    1,  314,    2, 0x08 /* Private */,
      51,    1,  317,    2, 0x08 /* Private */,
      52,    1,  320,    2, 0x08 /* Private */,
      53,    0,  323,    2, 0x08 /* Private */,
      54,    1,  324,    2, 0x08 /* Private */,
      55,    1,  327,    2, 0x08 /* Private */,
      56,    0,  330,    2, 0x08 /* Private */,
      57,    0,  331,    2, 0x08 /* Private */,
      58,    0,  332,    2, 0x08 /* Private */,
      59,    0,  333,    2, 0x08 /* Private */,
      60,    0,  334,    2, 0x08 /* Private */,
      61,    1,  335,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void,
    0x80000000 | 26, 0x80000000 | 27, 0x80000000 | 27,   28,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27,   38,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int,   43,
    QMetaType::Int, QMetaType::Int,   43,
    QMetaType::Int, QMetaType::Int,   43,
    QMetaType::QString, QMetaType::QString,   47,
    QMetaType::Void, 0x80000000 | 49,   50,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   47,
    QMetaType::Void, QMetaType::QString,   47,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, 0x80000000 | 27,   62,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_connect_btn_clicked(); break;
        case 1: _t->on_MicroCycleLedConfig_readButton_clicked(); break;
        case 2: _t->on_LedCurrentSetpoint_readButton_clicked(); break;
        case 3: _t->on_LedMaxCurrentPulse_readButton_clicked(); break;
        case 4: _t->on_LedMaxCurrentContinuous_readButton_clicked(); break;
        case 5: _t->on_pushButton_WriteData_clicked(); break;
        case 6: _t->on_pushButton_ReadData_clicked(); break;
        case 7: _t->on_pushButton_Write_Command_clicked(); break;
        case 8: _t->on_pushButton_Read_Command_clicked(); break;
        case 9: _t->on_pushButton_RamDiagnosis_clicked(); break;
        case 10: _t->on_pushButton_Read_RamFault_clicked(); break;
        case 11: _t->on_pushButton_FlashFault_clicked(); break;
        case 12: _t->MySlot(); break;
        case 13: _t->on_update_read_faults_clicked(); break;
        case 14: _t->on_Reset_timestamp_clicked(); break;
        case 15: _t->on_pushButton_eventReadIndex_5_clicked(); break;
        case 16: _t->on_RawDataCLear_clicked(); break;
        case 17: _t->on_BrowseUpgrade_clicked(); break;
        case 18: _t->on_startBrowse_clicked(); break;
        case 19: _t->on_jump_to_app_btn_clicked(); break;
        case 20: _t->customlineedit_enable((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->statusTabUpdate(); break;
        case 22: { uint32_t _r = _t->addUInt16((*reinterpret_cast< uint16_t(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< uint32_t*>(_a[0]) = std::move(_r); }  break;
        case 23: _t->on_Fault_warning_clicked(); break;
        case 24: _t->Preset_valid(); break;
        case 25: _t->on_custom_data_clear_clicked(); break;
        case 26: _t->on_state_version_2_clicked(); break;
        case 27: _t->Fault_warning_clear(); break;
        case 28: _t->clear_all_lineedit(); break;
        case 29: _t->disable_read_lineedits(); break;
        case 30: _t->update_fault_status((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 31: _t->on_single_multi_write_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->on_SendCustomFrame_clicked(); break;
        case 33: { int _r = _t->on_databits_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 34: { int _r = _t->on_stopbits_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 35: { int _r = _t->on_baud_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 36: { QString _r = _t->on_parity_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 37: _t->start_updating_progress((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 38: _t->on_single_multi_write_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->on_nSize_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->on_stop_progressbar_clicked(); break;
        case 41: _t->on_lineEdit_SyncMode_write_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 42: _t->on_lineEdit_DeglitchingEnable_write_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 43: { int _r = _t->on_SlaveAddress_editingFinished();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 44: _t->on_Fault_fifo_reset_btn_clicked(); break;
        case 45: _t->on_Light_on_cmd_button_clicked(); break;
        case 46: _t->on_Light_off_cmd_button_clicked(); break;
        case 47: _t->on_config_cmd_button_clicked(); break;
        case 48: { QString _r = _t->Conversion_UInt_ASCII((*reinterpret_cast< uint16_t(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 49)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 49;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
