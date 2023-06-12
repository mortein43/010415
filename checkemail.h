#ifndef CHECKEMAIL_H
#define CHECKEMAIL_H

#include <QMainWindow>
#include <QRegularExpression>
#include <QRegularExpressionValidator>

QT_BEGIN_NAMESPACE
namespace Ui { class CheckEmail; }
QT_END_NAMESPACE

class CheckEmail : public QMainWindow
{
    Q_OBJECT

public:
    CheckEmail(QWidget *parent = nullptr);
    ~CheckEmail();

private slots:
    void on_pushButton_clicked();


private:
    Ui::CheckEmail *ui;
    QString reg = "^[A-Za-z0-9]@{1, }((\.[A-Za-z0-9]+)?[A-Za-z0-9]*){5,29}$";
    QRegularExpression regular = QRegularExpression(reg);
};
#endif // CHECKEMAIL_H
