#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QDialog>
#include <trackingmenu.h>

namespace Ui {
class LoginScreen;
}

class LoginScreen : public QDialog
{
    Q_OBJECT

public:
    explicit LoginScreen(QWidget *parent = nullptr);
    ~LoginScreen();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::LoginScreen *ui;
};

#endif // LOGINSCREEN_H
