/*
 * simpleio.h
 *
 * Created: 12/11/2016 17:41:39
 *  Author: Anton
 */ 


#ifndef SIMPLEIO_H_
#define SIMPLEIO_H_

void setPortInput(char port);

void setPINSInRestOut(char port, uint8_t PINToSetIN[]);

void enableAllPullUpsPort(char port);

void enableAllTriStatePort(char port);

#endif /* SIMPLEIO_H_ */