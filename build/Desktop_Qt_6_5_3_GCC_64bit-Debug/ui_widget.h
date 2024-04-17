/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLCDNumber *lcdNumber;
    QPushButton *pbCoin10;
    QPushButton *pbCoint50;
    QPushButton *pbCoin100;
    QPushButton *pbCoffee;
    QPushButton *pushButton;
    QPushButton *pbMilk;
    QPushButton *pbReset;
    QPushButton *pbCoin500;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(40, 20, 281, 221));
        pbCoin10 = new QPushButton(Widget);
        pbCoin10->setObjectName("pbCoin10");
        pbCoin10->setGeometry(QRect(50, 280, 89, 25));
        pbCoint50 = new QPushButton(Widget);
        pbCoint50->setObjectName("pbCoint50");
        pbCoint50->setGeometry(QRect(50, 320, 89, 25));
        pbCoin100 = new QPushButton(Widget);
        pbCoin100->setObjectName("pbCoin100");
        pbCoin100->setGeometry(QRect(50, 360, 89, 25));
        pbCoffee = new QPushButton(Widget);
        pbCoffee->setObjectName("pbCoffee");
        pbCoffee->setGeometry(QRect(210, 280, 89, 25));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 320, 89, 25));
        pbMilk = new QPushButton(Widget);
        pbMilk->setObjectName("pbMilk");
        pbMilk->setGeometry(QRect(210, 360, 89, 25));
        pbReset = new QPushButton(Widget);
        pbReset->setObjectName("pbReset");
        pbReset->setGeometry(QRect(210, 400, 89, 25));
        pbCoin500 = new QPushButton(Widget);
        pbCoin500->setObjectName("pbCoin500");
        pbCoin500->setGeometry(QRect(50, 400, 89, 25));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pbCoin10->setText(QCoreApplication::translate("Widget", "10", nullptr));
        pbCoint50->setText(QCoreApplication::translate("Widget", "50", nullptr));
        pbCoin100->setText(QCoreApplication::translate("Widget", "100", nullptr));
        pbCoffee->setText(QCoreApplication::translate("Widget", "Coffee(100)", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Tee(150)", nullptr));
        pbMilk->setText(QCoreApplication::translate("Widget", "Milk(200)", nullptr));
        pbReset->setText(QCoreApplication::translate("Widget", "Rest", nullptr));
        pbCoin500->setText(QCoreApplication::translate("Widget", "500", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
