#include "widget.h"
#include "ui_widget.h"
#include <qmessagebox.h>

#define COFFEE 100
#define TEE 150
#define MILK 200

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->pbCoffee->setEnabled(false);
    ui->pushButton->setEnabled(false);
    ui->pbMilk->setEnabled(false);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::checkCoffee(int money){
    if (money>=COFFEE) ui->pbCoffee->setEnabled(true);
    else ui->pbCoffee->setEnabled(false);
}
void Widget::checkMilk(int money){
    if (money>=MILK) ui->pbMilk->setEnabled(true);
    else ui->pbMilk->setEnabled(false);
}
void Widget::checkTee(int money){
    if (money>=TEE) ui->pushButton->setEnabled(true);
    else ui->pushButton->setEnabled(false);
}
void Widget::changeMoney(int diff){
    money+=diff;
    ui->lcdNumber->display(money);
    checkCoffee(money);
    checkTee(money);
    checkMilk(money);

}
char *  Widget::ret(char s[], int money){
    int coin500=0, coin100=0, coin50=0, coin10=0;


    coin500 = money / 500;
    money =money % 500;

    coin100 = money / 100;
    money = money % 100;
    coin50= money / 50;
    money =money % 50;

    coin10 = money / 10;
    sprintf(s, "500원: %d개, 100원: %d개, 50원: %d개, 10원: %d개\n", coin500, coin100, coin50, coin10);
    return s;
}

void Widget::on_pbCoin10_clicked()
{
    changeMoney(10);
}


void Widget::on_pbCoint50_clicked()
{
    changeMoney(50);
}


void Widget::on_pbCoin100_clicked()
{
    changeMoney(100);
}


void Widget::on_pbCoffee_clicked()
{
    changeMoney(-100);
}


void Widget::on_pushButton_clicked() // Tee
{
    changeMoney(-150);
}


void Widget::on_pbMilk_clicked()
{
    changeMoney(-200);
}


void Widget::on_pbReset_clicked()
{
    QMessageBox mb;
    char s[256];
    char * result;
    result = ret(s,money);
    changeMoney(-1 * money);

    mb.information(this,"return",result);
}


void Widget::on_pbCoin500_clicked()
{
    changeMoney(500);
}

