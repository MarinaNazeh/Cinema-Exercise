#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "Users.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->error->setVisible(false);

}

LoginWindow::~LoginWindow()
{
    delete ui;
}




void LoginWindow::on_loginbutton_clicked()
{
    QString user= ui->userin->text();
    QString pass= ui->passin->text();
    bool finduser(QString u,QString p)
    {
        for(i=0;i<100;i++)
        {
            if(u==usernames[i]&&p==passwords[i])
            {
                return true;
            }
            else
                return false;
        }
    }
    if(finduser(user,pass))
    {

    }
    else
    {
        ui->error->setVisible(true);
    }
}

