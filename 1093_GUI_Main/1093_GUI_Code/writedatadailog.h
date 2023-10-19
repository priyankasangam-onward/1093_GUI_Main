#ifndef WRITEDATADAILOG_H
#define WRITEDATADAILOG_H

#include <QDialog>
#include <QtWidgets>
#include <QArrayData>
#include <QCoreApplication>
#include <QThread>
#include "3rdparty/libmodbus/src/modbus.h"
#include "modbus-interface.h"

#define DATA_LENGTH_MICROCYCLE          2
#define MB_MicroCycleLedConfig          1004
#define MB_MicroCycleLedConfig_Preset   2004

namespace Ui {
class writedataDailog;
}

class writedataDialog : public QDialog
{
    Q_OBJECT

public:
    explicit writedataDialog(QWidget *parent = nullptr,MainWindow *dataptr=nullptr, uint8_t Differentiator=0 );
    ~writedataDialog();
    uint16_t adresses_config_dialog[128];
    uint16_t adresses_preset_config_dialog[128];
    QVector<QLineEdit*> show_intial_microcycleled_data(void);
    void on_selectAll_clicked(void);

signals:
    void myEvent();

private slots:

    void on_writeConfigBtn_clicked(void);

    void on_readConfigBtn_clicked(void);

    void on_clear_Button_clicked(void);

    void on_micro_select_all_clicked(void);

    void on_writedialog_ok_clicked(void);

private:
    Ui::writedataDailog *ui;
    QVector<QCheckBox*> Onchecked_microcycle;
    QVector<QLineEdit*> lineedits_data_microcycle;
    MainWindow* writedataMain;
    QComboBox* configindex;
    uint8_t Differentiator;
    modbus_t * m_serialModbus_value = NULL;

};

#endif // WRITEDATADAILOG_H
