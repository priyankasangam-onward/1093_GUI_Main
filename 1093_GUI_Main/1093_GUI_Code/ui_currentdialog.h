/********************************************************************************
** Form generated from reading UI file 'currentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURRENTDIALOG_H
#define UI_CURRENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_currentDialog
{
public:
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout;
    QPushButton *currentdialog_ok;
    QPushButton *readConfigBtn;
    QPushButton *SelectAll;
    QPushButton *clear;
    QPushButton *writeConfigBtn;
    QGridLayout *gridLayout_4;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *label_13;
    QLabel *label_12;
    QCheckBox *checkBox_write6;
    QLabel *label_16;
    QLabel *label_8;
    QLabel *label_4;
    QLineEdit *lineEdit_write2;
    QLabel *label_7;
    QCheckBox *checkBox_write1;
    QCheckBox *checkBox_write12;
    QCheckBox *checkBox_write11;
    QLabel *label_5;
    QCheckBox *checkBox_write2;
    QLabel *label_15;
    QLabel *label_10;
    QCheckBox *checkBox_write15;
    QLabel *label_14;
    QCheckBox *checkBox_write5;
    QLineEdit *lineEdit_write10;
    QLineEdit *lineEdit_write16;
    QLineEdit *lineEdit_write11;
    QLabel *label_3;
    QCheckBox *checkBox_write13;
    QCheckBox *checkBox_write16;
    QCheckBox *checkBox_write9;
    QLineEdit *lineEdit_write13;
    QCheckBox *checkBox_write7;
    QLineEdit *lineEdit_write5;
    QCheckBox *checkBox_write10;
    QLineEdit *lineEdit_write7;
    QLabel *label_11;
    QLineEdit *lineEdit_write8;
    QLabel *label;
    QLineEdit *lineEdit_write4;
    QLabel *label_9;
    QLineEdit *lineEdit_write3;
    QLineEdit *lineEdit_write12;
    QLineEdit *lineEdit_write6;
    QCheckBox *checkBox_write8;
    QLabel *label_2;
    QCheckBox *checkBox_write4;
    QLineEdit *lineEdit_write15;
    QCheckBox *checkBox_write3;
    QLineEdit *lineEdit_write1;
    QLineEdit *lineEdit_write14;
    QCheckBox *checkBox_write14;
    QLabel *label_6;
    QLineEdit *lineEdit_write9;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QLabel *label_17;
    QLabel *label_18;
    QCheckBox *checkBox_write22;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *lineEdit_write18;
    QLabel *label_22;
    QCheckBox *checkBox_write17;
    QCheckBox *checkBox_write28;
    QCheckBox *checkBox_write27;
    QLabel *label_23;
    QCheckBox *checkBox_write18;
    QLabel *label_24;
    QLabel *label_25;
    QCheckBox *checkBox_write31;
    QLabel *label_26;
    QCheckBox *checkBox_write21;
    QLineEdit *lineEdit_write26;
    QLineEdit *lineEdit_write32;
    QLineEdit *lineEdit_write27;
    QLabel *label_27;
    QCheckBox *checkBox_write29;
    QCheckBox *checkBox_write32;
    QCheckBox *checkBox_write25;
    QLineEdit *lineEdit_write29;
    QCheckBox *checkBox_write23;
    QLineEdit *lineEdit_write21;
    QCheckBox *checkBox_write26;
    QLineEdit *lineEdit_write23;
    QLabel *label_28;
    QLineEdit *lineEdit_write24;
    QLabel *label_29;
    QLineEdit *lineEdit_write20;
    QLabel *label_30;
    QLineEdit *lineEdit_write19;
    QLineEdit *lineEdit_write28;
    QLineEdit *lineEdit_write22;
    QCheckBox *checkBox_write24;
    QLabel *label_31;
    QCheckBox *checkBox_write20;
    QLineEdit *lineEdit_write31;
    QCheckBox *checkBox_write19;
    QLineEdit *lineEdit_write17;
    QLineEdit *lineEdit_write30;
    QCheckBox *checkBox_write30;
    QLabel *label_32;
    QLineEdit *lineEdit_write25;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *currentDialog)
    {
        if (currentDialog->objectName().isEmpty())
            currentDialog->setObjectName(QString::fromUtf8("currentDialog"));
        currentDialog->resize(900, 378);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(30);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(currentDialog->sizePolicy().hasHeightForWidth());
        currentDialog->setSizePolicy(sizePolicy);
        currentDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));
        gridLayout_6 = new QGridLayout(currentDialog);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        currentdialog_ok = new QPushButton(currentDialog);
        currentdialog_ok->setObjectName(QString::fromUtf8("currentdialog_ok"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(currentdialog_ok->sizePolicy().hasHeightForWidth());
        currentdialog_ok->setSizePolicy(sizePolicy1);
        currentdialog_ok->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(currentdialog_ok, 0, 4, 1, 1);

        readConfigBtn = new QPushButton(currentDialog);
        readConfigBtn->setObjectName(QString::fromUtf8("readConfigBtn"));
        sizePolicy1.setHeightForWidth(readConfigBtn->sizePolicy().hasHeightForWidth());
        readConfigBtn->setSizePolicy(sizePolicy1);
        readConfigBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(readConfigBtn, 0, 3, 1, 1);

        SelectAll = new QPushButton(currentDialog);
        SelectAll->setObjectName(QString::fromUtf8("SelectAll"));
        sizePolicy1.setHeightForWidth(SelectAll->sizePolicy().hasHeightForWidth());
        SelectAll->setSizePolicy(sizePolicy1);
        SelectAll->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(SelectAll, 0, 0, 1, 1);

        clear = new QPushButton(currentDialog);
        clear->setObjectName(QString::fromUtf8("clear"));
        sizePolicy1.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy1);
        clear->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(clear, 0, 1, 1, 1);

        writeConfigBtn = new QPushButton(currentDialog);
        writeConfigBtn->setObjectName(QString::fromUtf8("writeConfigBtn"));
        sizePolicy1.setHeightForWidth(writeConfigBtn->sizePolicy().hasHeightForWidth());
        writeConfigBtn->setSizePolicy(sizePolicy1);
        writeConfigBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 219, 229);\n"
"\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(writeConfigBtn, 0, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout, 1, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        frame = new QFrame(currentDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMinimumSize(QSize(228, 294));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_13 = new QLabel(frame);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 5, 4, 1, 1);

        label_12 = new QLabel(frame);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 3, 4, 1, 1);

        checkBox_write6 = new QCheckBox(frame);
        checkBox_write6->setObjectName(QString::fromUtf8("checkBox_write6"));
        sizePolicy1.setHeightForWidth(checkBox_write6->sizePolicy().hasHeightForWidth());
        checkBox_write6->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(checkBox_write6, 6, 1, 1, 1);

        label_16 = new QLabel(frame);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_2->addWidget(label_16, 9, 4, 1, 1);

        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 9, 0, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        lineEdit_write2 = new QLineEdit(frame);
        lineEdit_write2->setObjectName(QString::fromUtf8("lineEdit_write2"));
        sizePolicy1.setHeightForWidth(lineEdit_write2->sizePolicy().hasHeightForWidth());
        lineEdit_write2->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_write2, 1, 2, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 8, 0, 1, 1);

        checkBox_write1 = new QCheckBox(frame);
        checkBox_write1->setObjectName(QString::fromUtf8("checkBox_write1"));
        sizePolicy1.setHeightForWidth(checkBox_write1->sizePolicy().hasHeightForWidth());
        checkBox_write1->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(checkBox_write1, 0, 1, 1, 1);

        checkBox_write12 = new QCheckBox(frame);
        checkBox_write12->setObjectName(QString::fromUtf8("checkBox_write12"));
        sizePolicy1.setHeightForWidth(checkBox_write12->sizePolicy().hasHeightForWidth());
        checkBox_write12->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(checkBox_write12, 3, 5, 1, 1);

        checkBox_write11 = new QCheckBox(frame);
        checkBox_write11->setObjectName(QString::fromUtf8("checkBox_write11"));
        sizePolicy1.setHeightForWidth(checkBox_write11->sizePolicy().hasHeightForWidth());
        checkBox_write11->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(checkBox_write11, 2, 5, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 5, 0, 1, 1);

        checkBox_write2 = new QCheckBox(frame);
        checkBox_write2->setObjectName(QString::fromUtf8("checkBox_write2"));
        sizePolicy1.setHeightForWidth(checkBox_write2->sizePolicy().hasHeightForWidth());
        checkBox_write2->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(checkBox_write2, 1, 1, 1, 1);

        label_15 = new QLabel(frame);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 8, 4, 1, 1);

        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 1, 4, 1, 1);

        checkBox_write15 = new QCheckBox(frame);
        checkBox_write15->setObjectName(QString::fromUtf8("checkBox_write15"));
        sizePolicy1.setHeightForWidth(checkBox_write15->sizePolicy().hasHeightForWidth());
        checkBox_write15->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(checkBox_write15, 8, 5, 1, 1);

        label_14 = new QLabel(frame);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 6, 4, 1, 1);

        checkBox_write5 = new QCheckBox(frame);
        checkBox_write5->setObjectName(QString::fromUtf8("checkBox_write5"));
        sizePolicy1.setHeightForWidth(checkBox_write5->sizePolicy().hasHeightForWidth());
        checkBox_write5->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(checkBox_write5, 5, 1, 1, 1);

        lineEdit_write10 = new QLineEdit(frame);
        lineEdit_write10->setObjectName(QString::fromUtf8("lineEdit_write10"));
        sizePolicy1.setHeightForWidth(lineEdit_write10->sizePolicy().hasHeightForWidth());
        lineEdit_write10->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_write10, 1, 6, 1, 1);

        lineEdit_write16 = new QLineEdit(frame);
        lineEdit_write16->setObjectName(QString::fromUtf8("lineEdit_write16"));
        sizePolicy1.setHeightForWidth(lineEdit_write16->sizePolicy().hasHeightForWidth());
        lineEdit_write16->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_write16, 9, 6, 1, 1);

        lineEdit_write11 = new QLineEdit(frame);
        lineEdit_write11->setObjectName(QString::fromUtf8("lineEdit_write11"));
        sizePolicy1.setHeightForWidth(lineEdit_write11->sizePolicy().hasHeightForWidth());
        lineEdit_write11->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_write11, 2, 6, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        checkBox_write13 = new QCheckBox(frame);
        checkBox_write13->setObjectName(QString::fromUtf8("checkBox_write13"));
        sizePolicy1.setHeightForWidth(checkBox_write13->sizePolicy().hasHeightForWidth());
        checkBox_write13->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(checkBox_write13, 5, 5, 1, 1);

        checkBox_write16 = new QCheckBox(frame);
        checkBox_write16->setObjectName(QString::fromUtf8("checkBox_write16"));
        sizePolicy1.setHeightForWidth(checkBox_write16->sizePolicy().hasHeightForWidth());
        checkBox_write16->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(checkBox_write16, 9, 5, 1, 1);

        checkBox_write9 = new QCheckBox(frame);
        checkBox_write9->setObjectName(QString::fromUtf8("checkBox_write9"));
        sizePolicy1.setHeightForWidth(checkBox_write9->sizePolicy().hasHeightForWidth());
        checkBox_write9->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(checkBox_write9, 0, 5, 1, 1);

        lineEdit_write13 = new QLineEdit(frame);
        lineEdit_write13->setObjectName(QString::fromUtf8("lineEdit_write13"));
        sizePolicy1.setHeightForWidth(lineEdit_write13->sizePolicy().hasHeightForWidth());
        lineEdit_write13->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_write13, 5, 6, 1, 1);

        checkBox_write7 = new QCheckBox(frame);
        checkBox_write7->setObjectName(QString::fromUtf8("checkBox_write7"));
        sizePolicy1.setHeightForWidth(checkBox_write7->sizePolicy().hasHeightForWidth());
        checkBox_write7->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(checkBox_write7, 8, 1, 1, 1);

        lineEdit_write5 = new QLineEdit(frame);
        lineEdit_write5->setObjectName(QString::fromUtf8("lineEdit_write5"));
        sizePolicy1.setHeightForWidth(lineEdit_write5->sizePolicy().hasHeightForWidth());
        lineEdit_write5->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_write5, 5, 2, 1, 1);

        checkBox_write10 = new QCheckBox(frame);
        checkBox_write10->setObjectName(QString::fromUtf8("checkBox_write10"));
        sizePolicy1.setHeightForWidth(checkBox_write10->sizePolicy().hasHeightForWidth());
        checkBox_write10->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(checkBox_write10, 1, 5, 1, 1);

        lineEdit_write7 = new QLineEdit(frame);
        lineEdit_write7->setObjectName(QString::fromUtf8("lineEdit_write7"));
        sizePolicy1.setHeightForWidth(lineEdit_write7->sizePolicy().hasHeightForWidth());
        lineEdit_write7->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_write7, 8, 2, 1, 1);

        label_11 = new QLabel(frame);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 2, 4, 1, 1);

        lineEdit_write8 = new QLineEdit(frame);
        lineEdit_write8->setObjectName(QString::fromUtf8("lineEdit_write8"));
        sizePolicy1.setHeightForWidth(lineEdit_write8->sizePolicy().hasHeightForWidth());
        lineEdit_write8->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_write8, 9, 2, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lineEdit_write4 = new QLineEdit(frame);
        lineEdit_write4->setObjectName(QString::fromUtf8("lineEdit_write4"));
        sizePolicy1.setHeightForWidth(lineEdit_write4->sizePolicy().hasHeightForWidth());
        lineEdit_write4->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_write4, 3, 2, 1, 1);

        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 0, 4, 1, 1);

        lineEdit_write3 = new QLineEdit(frame);
        lineEdit_write3->setObjectName(QString::fromUtf8("lineEdit_write3"));
        sizePolicy1.setHeightForWidth(lineEdit_write3->sizePolicy().hasHeightForWidth());
        lineEdit_write3->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_write3, 2, 2, 1, 1);

        lineEdit_write12 = new QLineEdit(frame);
        lineEdit_write12->setObjectName(QString::fromUtf8("lineEdit_write12"));
        sizePolicy1.setHeightForWidth(lineEdit_write12->sizePolicy().hasHeightForWidth());
        lineEdit_write12->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_write12, 3, 6, 1, 1);

        lineEdit_write6 = new QLineEdit(frame);
        lineEdit_write6->setObjectName(QString::fromUtf8("lineEdit_write6"));
        sizePolicy1.setHeightForWidth(lineEdit_write6->sizePolicy().hasHeightForWidth());
        lineEdit_write6->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_write6, 6, 2, 1, 1);

        checkBox_write8 = new QCheckBox(frame);
        checkBox_write8->setObjectName(QString::fromUtf8("checkBox_write8"));
        sizePolicy1.setHeightForWidth(checkBox_write8->sizePolicy().hasHeightForWidth());
        checkBox_write8->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(checkBox_write8, 9, 1, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        checkBox_write4 = new QCheckBox(frame);
        checkBox_write4->setObjectName(QString::fromUtf8("checkBox_write4"));
        sizePolicy1.setHeightForWidth(checkBox_write4->sizePolicy().hasHeightForWidth());
        checkBox_write4->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(checkBox_write4, 3, 1, 1, 1);

        lineEdit_write15 = new QLineEdit(frame);
        lineEdit_write15->setObjectName(QString::fromUtf8("lineEdit_write15"));
        sizePolicy1.setHeightForWidth(lineEdit_write15->sizePolicy().hasHeightForWidth());
        lineEdit_write15->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_write15, 8, 6, 1, 1);

        checkBox_write3 = new QCheckBox(frame);
        checkBox_write3->setObjectName(QString::fromUtf8("checkBox_write3"));
        sizePolicy1.setHeightForWidth(checkBox_write3->sizePolicy().hasHeightForWidth());
        checkBox_write3->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(checkBox_write3, 2, 1, 1, 1);

        lineEdit_write1 = new QLineEdit(frame);
        lineEdit_write1->setObjectName(QString::fromUtf8("lineEdit_write1"));
        sizePolicy1.setHeightForWidth(lineEdit_write1->sizePolicy().hasHeightForWidth());
        lineEdit_write1->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_write1, 0, 2, 1, 1);

        lineEdit_write14 = new QLineEdit(frame);
        lineEdit_write14->setObjectName(QString::fromUtf8("lineEdit_write14"));
        sizePolicy1.setHeightForWidth(lineEdit_write14->sizePolicy().hasHeightForWidth());
        lineEdit_write14->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_write14, 6, 6, 1, 1);

        checkBox_write14 = new QCheckBox(frame);
        checkBox_write14->setObjectName(QString::fromUtf8("checkBox_write14"));
        sizePolicy1.setHeightForWidth(checkBox_write14->sizePolicy().hasHeightForWidth());
        checkBox_write14->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(checkBox_write14, 6, 5, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 6, 0, 1, 1);

        lineEdit_write9 = new QLineEdit(frame);
        lineEdit_write9->setObjectName(QString::fromUtf8("lineEdit_write9"));
        sizePolicy1.setHeightForWidth(lineEdit_write9->sizePolicy().hasHeightForWidth());
        lineEdit_write9->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_write9, 0, 6, 1, 1);


        gridLayout_4->addWidget(frame, 0, 0, 1, 1);

        frame_2 = new QFrame(currentDialog);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setMinimumSize(QSize(228, 294));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_17 = new QLabel(frame_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_3->addWidget(label_17, 5, 4, 1, 1);

        label_18 = new QLabel(frame_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_3->addWidget(label_18, 3, 4, 1, 1);

        checkBox_write22 = new QCheckBox(frame_2);
        checkBox_write22->setObjectName(QString::fromUtf8("checkBox_write22"));
        sizePolicy1.setHeightForWidth(checkBox_write22->sizePolicy().hasHeightForWidth());
        checkBox_write22->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(checkBox_write22, 6, 1, 1, 1);

        label_19 = new QLabel(frame_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_3->addWidget(label_19, 9, 4, 1, 1);

        label_20 = new QLabel(frame_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_3->addWidget(label_20, 9, 0, 1, 1);

        label_21 = new QLabel(frame_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_3->addWidget(label_21, 3, 0, 1, 1);

        lineEdit_write18 = new QLineEdit(frame_2);
        lineEdit_write18->setObjectName(QString::fromUtf8("lineEdit_write18"));
        sizePolicy1.setHeightForWidth(lineEdit_write18->sizePolicy().hasHeightForWidth());
        lineEdit_write18->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(lineEdit_write18, 1, 2, 1, 1);

        label_22 = new QLabel(frame_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_3->addWidget(label_22, 8, 0, 1, 1);

        checkBox_write17 = new QCheckBox(frame_2);
        checkBox_write17->setObjectName(QString::fromUtf8("checkBox_write17"));
        sizePolicy1.setHeightForWidth(checkBox_write17->sizePolicy().hasHeightForWidth());
        checkBox_write17->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(checkBox_write17, 0, 1, 1, 1);

        checkBox_write28 = new QCheckBox(frame_2);
        checkBox_write28->setObjectName(QString::fromUtf8("checkBox_write28"));
        sizePolicy1.setHeightForWidth(checkBox_write28->sizePolicy().hasHeightForWidth());
        checkBox_write28->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(checkBox_write28, 3, 5, 1, 1);

        checkBox_write27 = new QCheckBox(frame_2);
        checkBox_write27->setObjectName(QString::fromUtf8("checkBox_write27"));
        sizePolicy1.setHeightForWidth(checkBox_write27->sizePolicy().hasHeightForWidth());
        checkBox_write27->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(checkBox_write27, 2, 5, 1, 1);

        label_23 = new QLabel(frame_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_3->addWidget(label_23, 5, 0, 1, 1);

        checkBox_write18 = new QCheckBox(frame_2);
        checkBox_write18->setObjectName(QString::fromUtf8("checkBox_write18"));
        sizePolicy1.setHeightForWidth(checkBox_write18->sizePolicy().hasHeightForWidth());
        checkBox_write18->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(checkBox_write18, 1, 1, 1, 1);

        label_24 = new QLabel(frame_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_3->addWidget(label_24, 8, 4, 1, 1);

        label_25 = new QLabel(frame_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_3->addWidget(label_25, 1, 4, 1, 1);

        checkBox_write31 = new QCheckBox(frame_2);
        checkBox_write31->setObjectName(QString::fromUtf8("checkBox_write31"));
        sizePolicy1.setHeightForWidth(checkBox_write31->sizePolicy().hasHeightForWidth());
        checkBox_write31->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(checkBox_write31, 8, 5, 1, 1);

        label_26 = new QLabel(frame_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_3->addWidget(label_26, 6, 4, 1, 1);

        checkBox_write21 = new QCheckBox(frame_2);
        checkBox_write21->setObjectName(QString::fromUtf8("checkBox_write21"));
        sizePolicy1.setHeightForWidth(checkBox_write21->sizePolicy().hasHeightForWidth());
        checkBox_write21->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(checkBox_write21, 5, 1, 1, 1);

        lineEdit_write26 = new QLineEdit(frame_2);
        lineEdit_write26->setObjectName(QString::fromUtf8("lineEdit_write26"));
        sizePolicy1.setHeightForWidth(lineEdit_write26->sizePolicy().hasHeightForWidth());
        lineEdit_write26->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(lineEdit_write26, 1, 6, 1, 1);

        lineEdit_write32 = new QLineEdit(frame_2);
        lineEdit_write32->setObjectName(QString::fromUtf8("lineEdit_write32"));
        sizePolicy1.setHeightForWidth(lineEdit_write32->sizePolicy().hasHeightForWidth());
        lineEdit_write32->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(lineEdit_write32, 9, 6, 1, 1);

        lineEdit_write27 = new QLineEdit(frame_2);
        lineEdit_write27->setObjectName(QString::fromUtf8("lineEdit_write27"));
        sizePolicy1.setHeightForWidth(lineEdit_write27->sizePolicy().hasHeightForWidth());
        lineEdit_write27->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(lineEdit_write27, 2, 6, 1, 1);

        label_27 = new QLabel(frame_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_3->addWidget(label_27, 2, 0, 1, 1);

        checkBox_write29 = new QCheckBox(frame_2);
        checkBox_write29->setObjectName(QString::fromUtf8("checkBox_write29"));
        sizePolicy1.setHeightForWidth(checkBox_write29->sizePolicy().hasHeightForWidth());
        checkBox_write29->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(checkBox_write29, 5, 5, 1, 1);

        checkBox_write32 = new QCheckBox(frame_2);
        checkBox_write32->setObjectName(QString::fromUtf8("checkBox_write32"));
        sizePolicy1.setHeightForWidth(checkBox_write32->sizePolicy().hasHeightForWidth());
        checkBox_write32->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(checkBox_write32, 9, 5, 1, 1);

        checkBox_write25 = new QCheckBox(frame_2);
        checkBox_write25->setObjectName(QString::fromUtf8("checkBox_write25"));
        sizePolicy1.setHeightForWidth(checkBox_write25->sizePolicy().hasHeightForWidth());
        checkBox_write25->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(checkBox_write25, 0, 5, 1, 1);

        lineEdit_write29 = new QLineEdit(frame_2);
        lineEdit_write29->setObjectName(QString::fromUtf8("lineEdit_write29"));
        sizePolicy1.setHeightForWidth(lineEdit_write29->sizePolicy().hasHeightForWidth());
        lineEdit_write29->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(lineEdit_write29, 5, 6, 1, 1);

        checkBox_write23 = new QCheckBox(frame_2);
        checkBox_write23->setObjectName(QString::fromUtf8("checkBox_write23"));
        sizePolicy1.setHeightForWidth(checkBox_write23->sizePolicy().hasHeightForWidth());
        checkBox_write23->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(checkBox_write23, 8, 1, 1, 1);

        lineEdit_write21 = new QLineEdit(frame_2);
        lineEdit_write21->setObjectName(QString::fromUtf8("lineEdit_write21"));
        sizePolicy1.setHeightForWidth(lineEdit_write21->sizePolicy().hasHeightForWidth());
        lineEdit_write21->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(lineEdit_write21, 5, 2, 1, 1);

        checkBox_write26 = new QCheckBox(frame_2);
        checkBox_write26->setObjectName(QString::fromUtf8("checkBox_write26"));
        sizePolicy1.setHeightForWidth(checkBox_write26->sizePolicy().hasHeightForWidth());
        checkBox_write26->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(checkBox_write26, 1, 5, 1, 1);

        lineEdit_write23 = new QLineEdit(frame_2);
        lineEdit_write23->setObjectName(QString::fromUtf8("lineEdit_write23"));
        sizePolicy1.setHeightForWidth(lineEdit_write23->sizePolicy().hasHeightForWidth());
        lineEdit_write23->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(lineEdit_write23, 8, 2, 1, 1);

        label_28 = new QLabel(frame_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_3->addWidget(label_28, 2, 4, 1, 1);

        lineEdit_write24 = new QLineEdit(frame_2);
        lineEdit_write24->setObjectName(QString::fromUtf8("lineEdit_write24"));
        sizePolicy1.setHeightForWidth(lineEdit_write24->sizePolicy().hasHeightForWidth());
        lineEdit_write24->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(lineEdit_write24, 9, 2, 1, 1);

        label_29 = new QLabel(frame_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_3->addWidget(label_29, 0, 0, 1, 1);

        lineEdit_write20 = new QLineEdit(frame_2);
        lineEdit_write20->setObjectName(QString::fromUtf8("lineEdit_write20"));
        sizePolicy1.setHeightForWidth(lineEdit_write20->sizePolicy().hasHeightForWidth());
        lineEdit_write20->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(lineEdit_write20, 3, 2, 1, 1);

        label_30 = new QLabel(frame_2);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_3->addWidget(label_30, 0, 4, 1, 1);

        lineEdit_write19 = new QLineEdit(frame_2);
        lineEdit_write19->setObjectName(QString::fromUtf8("lineEdit_write19"));
        sizePolicy1.setHeightForWidth(lineEdit_write19->sizePolicy().hasHeightForWidth());
        lineEdit_write19->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(lineEdit_write19, 2, 2, 1, 1);

        lineEdit_write28 = new QLineEdit(frame_2);
        lineEdit_write28->setObjectName(QString::fromUtf8("lineEdit_write28"));
        sizePolicy1.setHeightForWidth(lineEdit_write28->sizePolicy().hasHeightForWidth());
        lineEdit_write28->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(lineEdit_write28, 3, 6, 1, 1);

        lineEdit_write22 = new QLineEdit(frame_2);
        lineEdit_write22->setObjectName(QString::fromUtf8("lineEdit_write22"));
        sizePolicy1.setHeightForWidth(lineEdit_write22->sizePolicy().hasHeightForWidth());
        lineEdit_write22->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(lineEdit_write22, 6, 2, 1, 1);

        checkBox_write24 = new QCheckBox(frame_2);
        checkBox_write24->setObjectName(QString::fromUtf8("checkBox_write24"));
        sizePolicy1.setHeightForWidth(checkBox_write24->sizePolicy().hasHeightForWidth());
        checkBox_write24->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(checkBox_write24, 9, 1, 1, 1);

        label_31 = new QLabel(frame_2);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_3->addWidget(label_31, 1, 0, 1, 1);

        checkBox_write20 = new QCheckBox(frame_2);
        checkBox_write20->setObjectName(QString::fromUtf8("checkBox_write20"));
        sizePolicy1.setHeightForWidth(checkBox_write20->sizePolicy().hasHeightForWidth());
        checkBox_write20->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(checkBox_write20, 3, 1, 1, 1);

        lineEdit_write31 = new QLineEdit(frame_2);
        lineEdit_write31->setObjectName(QString::fromUtf8("lineEdit_write31"));
        sizePolicy1.setHeightForWidth(lineEdit_write31->sizePolicy().hasHeightForWidth());
        lineEdit_write31->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(lineEdit_write31, 8, 6, 1, 1);

        checkBox_write19 = new QCheckBox(frame_2);
        checkBox_write19->setObjectName(QString::fromUtf8("checkBox_write19"));
        sizePolicy1.setHeightForWidth(checkBox_write19->sizePolicy().hasHeightForWidth());
        checkBox_write19->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(checkBox_write19, 2, 1, 1, 1);

        lineEdit_write17 = new QLineEdit(frame_2);
        lineEdit_write17->setObjectName(QString::fromUtf8("lineEdit_write17"));
        sizePolicy1.setHeightForWidth(lineEdit_write17->sizePolicy().hasHeightForWidth());
        lineEdit_write17->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(lineEdit_write17, 0, 2, 1, 1);

        lineEdit_write30 = new QLineEdit(frame_2);
        lineEdit_write30->setObjectName(QString::fromUtf8("lineEdit_write30"));
        sizePolicy1.setHeightForWidth(lineEdit_write30->sizePolicy().hasHeightForWidth());
        lineEdit_write30->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(lineEdit_write30, 6, 6, 1, 1);

        checkBox_write30 = new QCheckBox(frame_2);
        checkBox_write30->setObjectName(QString::fromUtf8("checkBox_write30"));
        sizePolicy1.setHeightForWidth(checkBox_write30->sizePolicy().hasHeightForWidth());
        checkBox_write30->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(checkBox_write30, 6, 5, 1, 1);

        label_32 = new QLabel(frame_2);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_3->addWidget(label_32, 6, 0, 1, 1);

        lineEdit_write25 = new QLineEdit(frame_2);
        lineEdit_write25->setObjectName(QString::fromUtf8("lineEdit_write25"));
        sizePolicy1.setHeightForWidth(lineEdit_write25->sizePolicy().hasHeightForWidth());
        lineEdit_write25->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(lineEdit_write25, 0, 6, 1, 1);


        gridLayout_4->addWidget(frame_2, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(currentDialog);

        QMetaObject::connectSlotsByName(currentDialog);
    } // setupUi

    void retranslateUi(QDialog *currentDialog)
    {
        currentDialog->setWindowTitle(QApplication::translate("currentDialog", "Dialog", nullptr));
        currentdialog_ok->setText(QApplication::translate("currentDialog", "OK", nullptr));
        readConfigBtn->setText(QApplication::translate("currentDialog", "Read", nullptr));
        SelectAll->setText(QApplication::translate("currentDialog", "Select All", nullptr));
        clear->setText(QApplication::translate("currentDialog", "Clear", nullptr));
        writeConfigBtn->setText(QApplication::translate("currentDialog", "Write", nullptr));
        label_13->setText(QApplication::translate("currentDialog", "Channel 13", nullptr));
        label_12->setText(QApplication::translate("currentDialog", "Channel 12", nullptr));
        checkBox_write6->setText(QString());
        label_16->setText(QApplication::translate("currentDialog", "Channel 16", nullptr));
        label_8->setText(QApplication::translate("currentDialog", "Channel 8", nullptr));
        label_4->setText(QApplication::translate("currentDialog", "Channel 4", nullptr));
        lineEdit_write2->setText(QString());
        label_7->setText(QApplication::translate("currentDialog", "Channel 7", nullptr));
        checkBox_write1->setText(QString());
        checkBox_write12->setText(QString());
        checkBox_write11->setText(QString());
        label_5->setText(QApplication::translate("currentDialog", "Channel 5", nullptr));
        checkBox_write2->setText(QString());
        label_15->setText(QApplication::translate("currentDialog", "Channel 15", nullptr));
        label_10->setText(QApplication::translate("currentDialog", "Channel 10", nullptr));
        checkBox_write15->setText(QString());
        label_14->setText(QApplication::translate("currentDialog", "Channel 14", nullptr));
        checkBox_write5->setText(QString());
        lineEdit_write10->setText(QString());
        lineEdit_write16->setText(QString());
        lineEdit_write11->setText(QString());
        label_3->setText(QApplication::translate("currentDialog", "Channel 3", nullptr));
        checkBox_write13->setText(QString());
        checkBox_write16->setText(QString());
        checkBox_write9->setText(QString());
        lineEdit_write13->setText(QString());
        checkBox_write7->setText(QString());
        lineEdit_write5->setText(QString());
        checkBox_write10->setText(QString());
        lineEdit_write7->setText(QString());
        label_11->setText(QApplication::translate("currentDialog", "Channel 11", nullptr));
        lineEdit_write8->setText(QString());
        label->setText(QApplication::translate("currentDialog", "Channel 1", nullptr));
        lineEdit_write4->setText(QString());
        label_9->setText(QApplication::translate("currentDialog", "Channel 9", nullptr));
        lineEdit_write3->setText(QString());
        lineEdit_write12->setText(QString());
        lineEdit_write6->setText(QString());
        checkBox_write8->setText(QString());
        label_2->setText(QApplication::translate("currentDialog", "Channel 2", nullptr));
        checkBox_write4->setText(QString());
        lineEdit_write15->setText(QString());
        checkBox_write3->setText(QString());
        lineEdit_write1->setText(QString());
        lineEdit_write14->setText(QString());
        checkBox_write14->setText(QString());
        label_6->setText(QApplication::translate("currentDialog", "Channel 6", nullptr));
        lineEdit_write9->setText(QString());
        label_17->setText(QApplication::translate("currentDialog", "Channel 29", nullptr));
        label_18->setText(QApplication::translate("currentDialog", "Channel 28", nullptr));
        checkBox_write22->setText(QString());
        label_19->setText(QApplication::translate("currentDialog", "Channel 32", nullptr));
        label_20->setText(QApplication::translate("currentDialog", "Channel 24", nullptr));
        label_21->setText(QApplication::translate("currentDialog", "Channel 20", nullptr));
        lineEdit_write18->setText(QString());
        label_22->setText(QApplication::translate("currentDialog", "Channel 23", nullptr));
        checkBox_write17->setText(QString());
        checkBox_write28->setText(QString());
        checkBox_write27->setText(QString());
        label_23->setText(QApplication::translate("currentDialog", "Channel 21", nullptr));
        checkBox_write18->setText(QString());
        label_24->setText(QApplication::translate("currentDialog", "Channel 31", nullptr));
        label_25->setText(QApplication::translate("currentDialog", "Channel 26", nullptr));
        checkBox_write31->setText(QString());
        label_26->setText(QApplication::translate("currentDialog", "Channel 30", nullptr));
        checkBox_write21->setText(QString());
        lineEdit_write26->setText(QString());
        lineEdit_write32->setText(QString());
        lineEdit_write27->setText(QString());
        label_27->setText(QApplication::translate("currentDialog", "Channel 19", nullptr));
        checkBox_write29->setText(QString());
        checkBox_write32->setText(QString());
        checkBox_write25->setText(QString());
        lineEdit_write29->setText(QString());
        checkBox_write23->setText(QString());
        lineEdit_write21->setText(QString());
        checkBox_write26->setText(QString());
        lineEdit_write23->setText(QString());
        label_28->setText(QApplication::translate("currentDialog", "Channel 27", nullptr));
        lineEdit_write24->setText(QString());
        label_29->setText(QApplication::translate("currentDialog", "Channel 17", nullptr));
        lineEdit_write20->setText(QString());
        label_30->setText(QApplication::translate("currentDialog", "Channel 25", nullptr));
        lineEdit_write19->setText(QString());
        lineEdit_write28->setText(QString());
        lineEdit_write22->setText(QString());
        checkBox_write24->setText(QString());
        label_31->setText(QApplication::translate("currentDialog", "Channel 18", nullptr));
        checkBox_write20->setText(QString());
        lineEdit_write31->setText(QString());
        checkBox_write19->setText(QString());
        lineEdit_write17->setText(QString());
        lineEdit_write30->setText(QString());
        checkBox_write30->setText(QString());
        label_32->setText(QApplication::translate("currentDialog", "Channel 22", nullptr));
        lineEdit_write25->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class currentDialog: public Ui_currentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURRENTDIALOG_H
