/********************************************************************************
** Form generated from reading UI file 'askrangewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKRANGEWINDOW_H
#define UI_ASKRANGEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AskRangeWindow
{
public:
    QLabel *label_range_X;
    QLineEdit *edit_X_from;
    QLineEdit *edit_X_to;
    QLabel *label_range_Y;
    QLabel *label_X_from;
    QLabel *label_X_to;
    QLineEdit *edit_Y_from;
    QLabel *label_Y_from;
    QLineEdit *edit_Y_to;
    QLabel *label_Y_to;
    QPushButton *btn_ok;

    void setupUi(QDialog *AskRangeWindow)
    {
        if (AskRangeWindow->objectName().isEmpty())
            AskRangeWindow->setObjectName(QString::fromUtf8("AskRangeWindow"));
        AskRangeWindow->resize(323, 320);
        label_range_X = new QLabel(AskRangeWindow);
        label_range_X->setObjectName(QString::fromUtf8("label_range_X"));
        label_range_X->setGeometry(QRect(80, 0, 181, 31));
        edit_X_from = new QLineEdit(AskRangeWindow);
        edit_X_from->setObjectName(QString::fromUtf8("edit_X_from"));
        edit_X_from->setGeometry(QRect(90, 40, 201, 31));
        edit_X_to = new QLineEdit(AskRangeWindow);
        edit_X_to->setObjectName(QString::fromUtf8("edit_X_to"));
        edit_X_to->setGeometry(QRect(90, 80, 201, 31));
        label_range_Y = new QLabel(AskRangeWindow);
        label_range_Y->setObjectName(QString::fromUtf8("label_range_Y"));
        label_range_Y->setGeometry(QRect(80, 120, 181, 31));
        label_X_from = new QLabel(AskRangeWindow);
        label_X_from->setObjectName(QString::fromUtf8("label_X_from"));
        label_X_from->setGeometry(QRect(10, 50, 67, 17));
        label_X_to = new QLabel(AskRangeWindow);
        label_X_to->setObjectName(QString::fromUtf8("label_X_to"));
        label_X_to->setGeometry(QRect(10, 80, 67, 17));
        edit_Y_from = new QLineEdit(AskRangeWindow);
        edit_Y_from->setObjectName(QString::fromUtf8("edit_Y_from"));
        edit_Y_from->setGeometry(QRect(90, 160, 201, 31));
        label_Y_from = new QLabel(AskRangeWindow);
        label_Y_from->setObjectName(QString::fromUtf8("label_Y_from"));
        label_Y_from->setGeometry(QRect(10, 170, 67, 17));
        edit_Y_to = new QLineEdit(AskRangeWindow);
        edit_Y_to->setObjectName(QString::fromUtf8("edit_Y_to"));
        edit_Y_to->setGeometry(QRect(90, 200, 201, 31));
        label_Y_to = new QLabel(AskRangeWindow);
        label_Y_to->setObjectName(QString::fromUtf8("label_Y_to"));
        label_Y_to->setGeometry(QRect(10, 200, 67, 17));
        btn_ok = new QPushButton(AskRangeWindow);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        btn_ok->setGeometry(QRect(120, 270, 89, 25));

        retranslateUi(AskRangeWindow);

        QMetaObject::connectSlotsByName(AskRangeWindow);
    } // setupUi

    void retranslateUi(QDialog *AskRangeWindow)
    {
        AskRangeWindow->setWindowTitle(QCoreApplication::translate("AskRangeWindow", "Dialog", nullptr));
        label_range_X->setText(QCoreApplication::translate("AskRangeWindow", "Enter range for X domain", nullptr));
        edit_X_from->setText(QCoreApplication::translate("AskRangeWindow", "-10", nullptr));
        edit_X_to->setText(QCoreApplication::translate("AskRangeWindow", "10", nullptr));
        label_range_Y->setText(QCoreApplication::translate("AskRangeWindow", "Enter range for Y domain", nullptr));
        label_X_from->setText(QCoreApplication::translate("AskRangeWindow", "From", nullptr));
        label_X_to->setText(QCoreApplication::translate("AskRangeWindow", "To", nullptr));
        edit_Y_from->setText(QCoreApplication::translate("AskRangeWindow", "-10", nullptr));
        label_Y_from->setText(QCoreApplication::translate("AskRangeWindow", "From", nullptr));
        edit_Y_to->setText(QCoreApplication::translate("AskRangeWindow", "10", nullptr));
        label_Y_to->setText(QCoreApplication::translate("AskRangeWindow", "To", nullptr));
        btn_ok->setText(QCoreApplication::translate("AskRangeWindow", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AskRangeWindow: public Ui_AskRangeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKRANGEWINDOW_H
