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
#include<QVariant>
#include<QDebug>


class Database  :public QWidget
{
public:
    Database();

    /**
     * @brief connectDatabase
     * This function is used to establish a connection to the database
     * Just to keep the constructor neat, we wrote a separate function for connection, which will be called inside the constructor
     */
    void connectDatabase();

    /**
     * @brief init
     * This function initializes the database, the default location of the database file is in D:/.. for windows
     * A table is created at this location with all the fitness tracking options
     */
    void init();

    /**
     * @brief saveData
     * @param username - the name of the user, who signs in, that will be stored in the database
     * @param date that the user intends to store the data at
     * @param weight of the user
     */
    void saveData(QString &username, QDate &date, const double &weight);

    /**
     * @brief getData returns the weight stored at a specific date
     * @param username
     * @param date
     * @param result
     * @return
     */
    double getData(QString &username, QDate &date, bool result);

private:

    QSqlDatabase m_QSqlDatabase;
    QString      m_TableCreationScript;
    QSqlQuery    m_QSqlQuery;

};

#endif // DATABASE_H
