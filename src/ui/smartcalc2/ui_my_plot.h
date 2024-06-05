/********************************************************************************
** Form generated from reading UI file 'my_plot.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MY_PLOT_H
#define UI_MY_PLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_my_plot
{
public:
    QGridLayout *gridLayout;
    QCustomPlot *widget;

    void setupUi(QDialog *my_plot)
    {
        if (my_plot->objectName().isEmpty())
            my_plot->setObjectName(QString::fromUtf8("my_plot"));
        my_plot->resize(817, 574);
        gridLayout = new QGridLayout(my_plot);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QCustomPlot(my_plot);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(my_plot);

        QMetaObject::connectSlotsByName(my_plot);
    } // setupUi

    void retranslateUi(QDialog *my_plot)
    {
        my_plot->setWindowTitle(QCoreApplication::translate("my_plot", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class my_plot: public Ui_my_plot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MY_PLOT_H
