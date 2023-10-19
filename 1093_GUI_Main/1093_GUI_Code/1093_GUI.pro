QT       += core gui
QT       += serialport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    3rdparty/libmodbus/src/modbus-rtu.c \
    3rdparty/libmodbus/src/modbus.c \
    crcdata.cpp \
    currentdialog.cpp \
    main.cpp \
    mainwindow.cpp \
    modbus-interface.cpp \
    writedatadailog.cpp

HEADERS += \
    3rdparty/libmodbus/config.h \
    3rdparty/libmodbus/src/modbus-rtu.h \
    3rdparty/libmodbus/src/modbus.h \
    crcdata.h \
    currentdialog.h \
    mainwindow.h \
    modbus-interface.h \
    writedatadailog.h

FORMS += \
    currentdialog.ui \
    mainwindow.ui \
    writedatadailog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    newqrc.qrc

DISTFILES += \
    Raytech.png
