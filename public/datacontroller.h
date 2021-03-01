#ifndef DATACONTROLLER_H
#define DATACONTROLLER_H

#include<QDate>
#include<QString>
#include<iostream>
#include<database.h>

class DataController
{
public:
    DataController();


    // receive data from HMI
    /**
     * @brief saveData
     * @param data   - Must contain date, weight and other data to be stored
     * @param weight - User's weight
     */
    void saveData(QString &username, QDate &date, const double &weight);

    // dispatch data to HMI
    /**
     * @brief readData
     * @param date - Read the data stored for this particular date
     * @param result - true: success, false: fail
     */
    double getData(QString &username, QDate &date, bool result);

    Database m_DataBase;
};

#endif // DATACONTROLLER_H
