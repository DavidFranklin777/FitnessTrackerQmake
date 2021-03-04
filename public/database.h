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

    void connectDatabase();
    void init();
    void saveData(QString &username, QDate &date, const double &weight);
    double getData(QString &username, QDate &date, bool result);

private:

    QSqlDatabase m_QSqlDatabase;
    QSqlQuery    m_QSqlQuery;

};

#endif // DATABASE_H
