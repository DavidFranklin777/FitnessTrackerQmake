#ifndef DATABASE_H
#define DATABASE_H

#include<QDate>
#include<QString>
#include<QWidget>

//Database headers
#include<QtSql/QSqlQuery>
#include<QtSql/QSqlDatabase>
#include<QMessageBox>
#include<QDialog>
#include<iostream>
#include <QDebug>


class Database  :public QWidget
{
public:
    Database();

    /**
     * @brief connectDatabase
     *  This function is used to connect to a database
     */
    void connectDatabase();

    /**
     * @brief init
     * This function is used to initialize a database
     */
    void init();

    /**
     * @brief saveData saves the data of the user
     * @param username
     * @param date
     * @param weight
     */
    void saveData(QString &username, QDate &date, const double &weight);

    /**
     * @brief getData returns the data of the user
     * @param username
     * @param date
     * @param result true if success
     * @return weight of the user
     */
    double getData(QString &username, QDate &date, bool result);

    /**
     * @brief getIdOfDate
     * @param date
     * @returns the id of the row where this specific date exists
     */
    int getIdOfDate(QDate date);

private:

    QSqlDatabase m_QSqlDatabase;
    QSqlQuery      m_QSqlQuery;

};

#endif // DATABASE_H
