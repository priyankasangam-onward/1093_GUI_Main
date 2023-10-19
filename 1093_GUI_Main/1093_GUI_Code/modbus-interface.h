#ifndef MODBUSINTERFACE_H
#define MODBUSINTERFACE_H

#include "3rdparty/libmodbus/src/modbus.h"
#include "3rdparty/libmodbus/src/modbus-rtu.h"
#include "qdebug.h"
//#include "mainwindow.h"

#define MODBUS_WRITE_SINGLE_REGISTER     0x06
#define BROADCAST_SLAVEID                0
class MainWindow;
void ModInterface(const char *device, int baud, char parity,
                       int data_bit, int stop_bit );


int WriteModbusData(int addr, int value);


int ReadModbusData(int addr, int nb, uint16_t *dest);


int WriteMultipleModbusData(int addr, int nb, const uint16_t *src);

void stBusMonitorRawData( modbus_t * modbus, uint8_t * data, uint8_t dataLen, uint8_t addNewline , uint8_t direction);

int Brcst_WriteMultipleModbusData( int addr, int nb, const uint16_t *src );

int Brcst_WriteModbusData( int addr, int value );

QString RawdataMod( uint8_t * data, uint8_t dataLen, bool addNewline, uint8_t direction);


modbus_t * ModbusValue(void);


void SetMainWindowObj(MainWindow* main);


MainWindow* GetMainWindowObj( void );

bool ModbusBusyVerify( void );


#endif // MODBUSINTERFACE_H
