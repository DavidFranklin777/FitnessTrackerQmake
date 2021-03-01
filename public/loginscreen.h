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
    /**
    * @brief LoginScreen
    * @param parent
    */
    explicit LoginScreen(QWidget *parent = nullptr);
    ~LoginScreen();

private slots:
    /**
     * @brief on_pushButton_login_clicked
     */
    void on_pushButton_login_clicked();

private:
    /**
     * @brief ui
     */
    Ui::LoginScreen *ui;
};

#endif // LOGINSCREEN_H
