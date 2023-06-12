#include "checkemail.h"
#include "./ui_checkemail.h"

CheckEmail::CheckEmail(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CheckEmail)
{
    ui->setupUi(this);
}

CheckEmail::~CheckEmail()
{
    delete ui;
}


void CheckEmail::on_pushButton_clicked()
{
    QString temp=ui->lineEdit->text();
    QRegularExpressionMatch obj = regular.match(temp);
    if (obj.hasMatch())
    {
        ui->label->setText(temp + " - " + "Може існувати");

    }
    else
    {
        ui->label->setText(temp + " - " + "Не може існувати");

    };
}

