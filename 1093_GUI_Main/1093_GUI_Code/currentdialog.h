#ifndef CURRENTDIALOG_H
#define CURRENTDIALOG_H

#include <QDialog>
#include <QtWidgets>
#include "3rdparty/libmodbus/src/modbus.h"
#include "modbus-interface.h"

#define CURRENT_MAXCURRENTCONTINUOS_RW      64


class MainWindow;

namespace Ui {
class currentDialog;
}

class currentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit currentDialog(QWidget *parent = nullptr, MainWindow *currentptr=nullptr, uint8_t currentDifferentiator=0);
    ~currentDialog();
    uint16_t adresses_config_currentdialog[96];
    uint16_t adresses_preset_config_currentdialog[96];
    QVector<QLineEdit*> show_data_current();

private slots:
    void on_SelectAll_clicked(void);

    void on_readConfigBtn_clicked(void);

    void on_writeConfigBtn_clicked(void);

    void on_clear_clicked(void);

    void on_currentdialog_ok_clicked();


private:
    Ui::currentDialog *ui;
    QVector<QCheckBox*> Onchecked_currentdata;
    QVector<QLineEdit*> lineedits_data_currentdata;
    MainWindow* currentdataMain;
    uint8_t newDifferentiator;
     modbus_t * m_serialModbus_value = NULL;
};

#endif // CURRENTDIALOG_H
