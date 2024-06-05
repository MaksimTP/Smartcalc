/********************************************************************************
** Form generated from reading UI file 'credit_calc.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDIT_CALC_H
#define UI_CREDIT_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Credit_calc
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *layout_credit;
    QFrame *frame_layout;
    QComboBox *combo_payment_type;
    QLineEdit *line_edit_term;
    QLineEdit *line_edit_interest_rate;
    QLineEdit *line_edit_total_credit;
    QLabel *label_total_credit;
    QLabel *label_term_credit;
    QLabel *label_interest_rate;
    QLabel *label_payment_type;
    QComboBox *combo_term_credit;
    QPushButton *btn_calculate;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTableWidget *table_credit;

    void setupUi(QDialog *Credit_calc)
    {
        if (Credit_calc->objectName().isEmpty())
            Credit_calc->setObjectName(QString::fromUtf8("Credit_calc"));
        Credit_calc->resize(557, 584);
        Credit_calc->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    font-family: 'Times New Roman', Times, serif;\n"
"    font-size: 20px;\n"
"    background-color:#484545\n"
"}\n"
"\n"
"\n"
"QLineEdit {\n"
"margin: 10px;\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QLabel {\n"
"background-color: white;\n"
"border-radius: 8px;\n"
"margin: 10px;\n"
"border: 2px solid orange\n"
"}\n"
"\n"
"QLabel#label_output {\n"
"margin: 15px;\n"
"margin-left: 40px;\n"
"margin-right: 40px\n"
"}\n"
"\n"
"QPushButton {\n"
"margin-top: 12px;\n"
" background-color: orange;\n"
"border-radius: 10px\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: white;\n"
"}\n"
"\n"
"QComboBox {\n"
"margin:8px;\n"
"border-radius: 8px;\n"
"padding-left: 10px	\n"
"}\n"
"\n"
""));
        verticalLayout = new QVBoxLayout(Credit_calc);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        layout_credit = new QHBoxLayout();
        layout_credit->setObjectName(QString::fromUtf8("layout_credit"));
        frame_layout = new QFrame(Credit_calc);
        frame_layout->setObjectName(QString::fromUtf8("frame_layout"));
        frame_layout->setFrameShape(QFrame::StyledPanel);
        frame_layout->setFrameShadow(QFrame::Raised);
        combo_payment_type = new QComboBox(frame_layout);
        combo_payment_type->addItem(QString());
        combo_payment_type->addItem(QString());
        combo_payment_type->setObjectName(QString::fromUtf8("combo_payment_type"));
        combo_payment_type->setGeometry(QRect(230, 120, 271, 41));
        combo_payment_type->setStyleSheet(QString::fromUtf8(""));
        line_edit_term = new QLineEdit(frame_layout);
        line_edit_term->setObjectName(QString::fromUtf8("line_edit_term"));
        line_edit_term->setGeometry(QRect(230, 40, 131, 41));
        line_edit_term->setAlignment(Qt::AlignCenter);
        line_edit_interest_rate = new QLineEdit(frame_layout);
        line_edit_interest_rate->setObjectName(QString::fromUtf8("line_edit_interest_rate"));
        line_edit_interest_rate->setGeometry(QRect(230, 80, 271, 41));
        line_edit_interest_rate->setAlignment(Qt::AlignCenter);
        line_edit_total_credit = new QLineEdit(frame_layout);
        line_edit_total_credit->setObjectName(QString::fromUtf8("line_edit_total_credit"));
        line_edit_total_credit->setGeometry(QRect(230, 0, 271, 41));
        line_edit_total_credit->setAlignment(Qt::AlignCenter);
        label_total_credit = new QLabel(frame_layout);
        label_total_credit->setObjectName(QString::fromUtf8("label_total_credit"));
        label_total_credit->setGeometry(QRect(0, 0, 231, 41));
        label_total_credit->setStyleSheet(QString::fromUtf8(""));
        label_total_credit->setAlignment(Qt::AlignCenter);
        label_term_credit = new QLabel(frame_layout);
        label_term_credit->setObjectName(QString::fromUtf8("label_term_credit"));
        label_term_credit->setGeometry(QRect(0, 40, 231, 41));
        label_term_credit->setAlignment(Qt::AlignCenter);
        label_interest_rate = new QLabel(frame_layout);
        label_interest_rate->setObjectName(QString::fromUtf8("label_interest_rate"));
        label_interest_rate->setGeometry(QRect(0, 80, 231, 41));
        label_interest_rate->setAlignment(Qt::AlignCenter);
        label_payment_type = new QLabel(frame_layout);
        label_payment_type->setObjectName(QString::fromUtf8("label_payment_type"));
        label_payment_type->setGeometry(QRect(0, 120, 231, 41));
        label_payment_type->setAlignment(Qt::AlignCenter);
        combo_term_credit = new QComboBox(frame_layout);
        combo_term_credit->addItem(QString());
        combo_term_credit->addItem(QString());
        combo_term_credit->setObjectName(QString::fromUtf8("combo_term_credit"));
        combo_term_credit->setGeometry(QRect(362, 40, 131, 41));
        combo_term_credit->setStyleSheet(QString::fromUtf8(""));
        btn_calculate = new QPushButton(frame_layout);
        btn_calculate->setObjectName(QString::fromUtf8("btn_calculate"));
        btn_calculate->setGeometry(QRect(130, 150, 231, 41));
        btn_calculate->setStyleSheet(QString::fromUtf8(""));
        scrollArea = new QScrollArea(frame_layout);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 220, 511, 331));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 509, 329));
        table_credit = new QTableWidget(scrollAreaWidgetContents);
        table_credit->setObjectName(QString::fromUtf8("table_credit"));
        table_credit->setGeometry(QRect(20, 0, 471, 331));
        table_credit->setMaximumSize(QSize(501, 331));
        scrollArea->setWidget(scrollAreaWidgetContents);

        layout_credit->addWidget(frame_layout);


        verticalLayout->addLayout(layout_credit);


        retranslateUi(Credit_calc);

        QMetaObject::connectSlotsByName(Credit_calc);
    } // setupUi

    void retranslateUi(QDialog *Credit_calc)
    {
        Credit_calc->setWindowTitle(QCoreApplication::translate("Credit_calc", "Dialog", nullptr));
        combo_payment_type->setItemText(0, QCoreApplication::translate("Credit_calc", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\265", nullptr));
        combo_payment_type->setItemText(1, QCoreApplication::translate("Credit_calc", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265", nullptr));

        line_edit_term->setText(QString());
        line_edit_interest_rate->setText(QString());
        line_edit_total_credit->setText(QString());
        label_total_credit->setText(QCoreApplication::translate("Credit_calc", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260 (\320\262 \321\200\321\203\320\261\320\273\321\217\321\205):", nullptr));
        label_term_credit->setText(QCoreApplication::translate("Credit_calc", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260:", nullptr));
        label_interest_rate->setText(QCoreApplication::translate("Credit_calc", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260:", nullptr));
        label_payment_type->setText(QCoreApplication::translate("Credit_calc", "\320\242\320\270\320\277 \320\277\320\273\320\260\321\202\320\265\320\266\320\260:", nullptr));
        combo_term_credit->setItemText(0, QCoreApplication::translate("Credit_calc", "\320\222 \320\274\320\265\321\201\321\217\321\206\320\260\321\205", nullptr));
        combo_term_credit->setItemText(1, QCoreApplication::translate("Credit_calc", "\320\222 \320\263\320\276\320\264\320\260\321\205", nullptr));

        btn_calculate->setText(QCoreApplication::translate("Credit_calc", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Credit_calc: public Ui_Credit_calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_CALC_H
