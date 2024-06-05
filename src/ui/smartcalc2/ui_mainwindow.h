/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *layout_lines;
    QFrame *frame_lines;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *line_result;
    QHBoxLayout *layout_buttons;
    QFrame *frame_buttons;
    QHBoxLayout *horizontalLayout_5;
    QGridLayout *layout_functions;
    QPushButton *btn_acos;
    QPushButton *btn_left_bracket;
    QPushButton *btn_cos;
    QPushButton *btn_right_bracket;
    QPushButton *btn_sqrt;
    QPushButton *btn_pow;
    QPushButton *btn_clear_line;
    QPushButton *btn_plot;
    QPushButton *btn_credit;
    QPushButton *btn_deposit;
    QPushButton *btn_log;
    QPushButton *btn_ln;
    QPushButton *btn_asin;
    QPushButton *btn_sin;
    QPushButton *btn_tan;
    QPushButton *btn_atan;
    QGridLayout *layout_digits_and_opers;
    QPushButton *btn_4;
    QPushButton *btn_remove_symbol;
    QPushButton *btn_7;
    QPushButton *btn_1;
    QPushButton *btn_mod;
    QPushButton *btn_unary_plus_minus;
    QPushButton *btn_div;
    QPushButton *btn_mul;
    QPushButton *btn_sub;
    QPushButton *btn_plus;
    QPushButton *btn_equal;
    QPushButton *btn_dot;
    QPushButton *btn_3;
    QPushButton *btn_2;
    QPushButton *btn_5;
    QPushButton *btn_8;
    QPushButton *btn_9;
    QPushButton *btn_6;
    QPushButton *btn_0;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(857, 660);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    font-family: 'Times New Roman', Times, serif;\n"
"    font-size: 20px;\n"
"    margin: 10px;\n"
"    background-color:#484545\n"
"}\n"
"\n"
"QFrame#frame_lines {\n"
"    padding: 10px;\n"
"    background-color:#505050;\n"
"}\n"
"QFrame#frame_buttons {\n"
"    background-color: #1C1C1C;\n"
"}\n"
"QLineEdit {\n"
"    padding: 10px;\n"
"	 color: white;\n"
"}\n"
"\n"
"QLabel {\n"
"    padding: 10px;\n"
"    color: white;\n"
"}\n"
"\n"
"\n"
"QPushButton#btn_1, #btn_2, #btn_3, #btn_4, #btn_5, #btn_6, #btn_7, #btn_8, #btn_9, #btn_0, #btn_dot{\n"
"    background-color: #d4d4d2;\n"
"	 color: black;\n"
"	padding: 10px;\n"
"	border-radius:10px\n"
"\n"
"}\n"
"\n"
"QPushButton#btn_div, #btn_mul, #btn_plus, #btn_sub, #btn_equal{\n"
"    background-color: #FF9500;\n"
"	 color: black;\n"
"	padding: 10px;\n"
"	border-radius:10px\n"
"}\n"
"\n"
"QPushButton#btn_acos, #btn_asin, #btn_atan, #btn_clear_line, #btn_cos, #btn_credit, #btn_deposit, #btn_left_bracket, #btn_ln, #btn_log, #btn_plot, #btn_pow, #btn_right_"
                        "bracket, #btn_sin, #btn_sqrt, #btn_tan, #btn_remove_symbol, #btn_unary_plus_minus, #btn_mod{\n"
"    background-color: #505050;\n"
"	 color: white;\n"
"	padding: 10px;\n"
"	border-radius:10px\n"
"}\n"
""));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        layout_lines = new QHBoxLayout();
        layout_lines->setObjectName(QString::fromUtf8("layout_lines"));
        frame_lines = new QFrame(centralwidget);
        frame_lines->setObjectName(QString::fromUtf8("frame_lines"));
        frame_lines->setFrameShape(QFrame::StyledPanel);
        frame_lines->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_lines);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(frame_lines);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label);

        line_result = new QLineEdit(frame_lines);
        line_result->setObjectName(QString::fromUtf8("line_result"));
        line_result->setMaxLength(255);
        line_result->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(line_result);


        layout_lines->addWidget(frame_lines);


        verticalLayout_4->addLayout(layout_lines);

        layout_buttons = new QHBoxLayout();
        layout_buttons->setObjectName(QString::fromUtf8("layout_buttons"));
        frame_buttons = new QFrame(centralwidget);
        frame_buttons->setObjectName(QString::fromUtf8("frame_buttons"));
        frame_buttons->setFrameShape(QFrame::StyledPanel);
        frame_buttons->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_buttons);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        layout_functions = new QGridLayout();
        layout_functions->setObjectName(QString::fromUtf8("layout_functions"));
        btn_acos = new QPushButton(frame_buttons);
        btn_acos->setObjectName(QString::fromUtf8("btn_acos"));
        btn_acos->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: gray\n"
"}"));
        btn_acos->setCheckable(false);

        layout_functions->addWidget(btn_acos, 2, 0, 1, 1);

        btn_left_bracket = new QPushButton(frame_buttons);
        btn_left_bracket->setObjectName(QString::fromUtf8("btn_left_bracket"));
        btn_left_bracket->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: gray\n"
"}"));
        btn_left_bracket->setCheckable(false);

        layout_functions->addWidget(btn_left_bracket, 0, 0, 1, 1);

        btn_cos = new QPushButton(frame_buttons);
        btn_cos->setObjectName(QString::fromUtf8("btn_cos"));
        btn_cos->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: gray\n"
"}"));
        btn_cos->setCheckable(false);

        layout_functions->addWidget(btn_cos, 1, 0, 1, 1);

        btn_right_bracket = new QPushButton(frame_buttons);
        btn_right_bracket->setObjectName(QString::fromUtf8("btn_right_bracket"));
        btn_right_bracket->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: gray\n"
"}"));
        btn_right_bracket->setCheckable(false);

        layout_functions->addWidget(btn_right_bracket, 0, 1, 1, 1);

        btn_sqrt = new QPushButton(frame_buttons);
        btn_sqrt->setObjectName(QString::fromUtf8("btn_sqrt"));
        btn_sqrt->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: gray\n"
"}"));
        btn_sqrt->setCheckable(false);

        layout_functions->addWidget(btn_sqrt, 3, 0, 1, 1);

        btn_pow = new QPushButton(frame_buttons);
        btn_pow->setObjectName(QString::fromUtf8("btn_pow"));
        btn_pow->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: gray\n"
"}"));
        btn_pow->setCheckable(false);

        layout_functions->addWidget(btn_pow, 0, 2, 1, 1);

        btn_clear_line = new QPushButton(frame_buttons);
        btn_clear_line->setObjectName(QString::fromUtf8("btn_clear_line"));
        btn_clear_line->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: gray\n"
"}"));
        btn_clear_line->setCheckable(false);

        layout_functions->addWidget(btn_clear_line, 0, 3, 1, 1);

        btn_plot = new QPushButton(frame_buttons);
        btn_plot->setObjectName(QString::fromUtf8("btn_plot"));
        btn_plot->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: gray\n"
"}"));
        btn_plot->setCheckable(false);

        layout_functions->addWidget(btn_plot, 1, 3, 1, 1);

        btn_credit = new QPushButton(frame_buttons);
        btn_credit->setObjectName(QString::fromUtf8("btn_credit"));
        btn_credit->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: gray\n"
"}"));
        btn_credit->setCheckable(false);

        layout_functions->addWidget(btn_credit, 2, 3, 1, 1);

        btn_deposit = new QPushButton(frame_buttons);
        btn_deposit->setObjectName(QString::fromUtf8("btn_deposit"));
        btn_deposit->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: gray\n"
"}"));
        btn_deposit->setCheckable(false);

        layout_functions->addWidget(btn_deposit, 3, 3, 1, 1);

        btn_log = new QPushButton(frame_buttons);
        btn_log->setObjectName(QString::fromUtf8("btn_log"));
        btn_log->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: gray\n"
"}"));
        btn_log->setCheckable(false);

        layout_functions->addWidget(btn_log, 3, 2, 1, 1);

        btn_ln = new QPushButton(frame_buttons);
        btn_ln->setObjectName(QString::fromUtf8("btn_ln"));
        btn_ln->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: gray\n"
"}"));
        btn_ln->setCheckable(false);

        layout_functions->addWidget(btn_ln, 3, 1, 1, 1);

        btn_asin = new QPushButton(frame_buttons);
        btn_asin->setObjectName(QString::fromUtf8("btn_asin"));
        btn_asin->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: gray\n"
"}"));
        btn_asin->setCheckable(false);

        layout_functions->addWidget(btn_asin, 2, 1, 1, 1);

        btn_sin = new QPushButton(frame_buttons);
        btn_sin->setObjectName(QString::fromUtf8("btn_sin"));
        btn_sin->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: gray\n"
"}"));
        btn_sin->setCheckable(false);

        layout_functions->addWidget(btn_sin, 1, 1, 1, 1);

        btn_tan = new QPushButton(frame_buttons);
        btn_tan->setObjectName(QString::fromUtf8("btn_tan"));
        btn_tan->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: gray\n"
"}"));
        btn_tan->setCheckable(false);

        layout_functions->addWidget(btn_tan, 1, 2, 1, 1);

        btn_atan = new QPushButton(frame_buttons);
        btn_atan->setObjectName(QString::fromUtf8("btn_atan"));
        btn_atan->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: gray\n"
"}"));
        btn_atan->setCheckable(false);

        layout_functions->addWidget(btn_atan, 2, 2, 1, 1);


        horizontalLayout_5->addLayout(layout_functions);

        layout_digits_and_opers = new QGridLayout();
        layout_digits_and_opers->setObjectName(QString::fromUtf8("layout_digits_and_opers"));
        btn_4 = new QPushButton(frame_buttons);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        btn_4->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: white\n"
"}"));
        btn_4->setCheckable(false);

        layout_digits_and_opers->addWidget(btn_4, 2, 0, 1, 1);

        btn_remove_symbol = new QPushButton(frame_buttons);
        btn_remove_symbol->setObjectName(QString::fromUtf8("btn_remove_symbol"));
        btn_remove_symbol->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: gray\n"
"}"));
        btn_remove_symbol->setCheckable(false);

        layout_digits_and_opers->addWidget(btn_remove_symbol, 0, 0, 1, 1);

        btn_7 = new QPushButton(frame_buttons);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));
        btn_7->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: white\n"
"}"));
        btn_7->setCheckable(false);

        layout_digits_and_opers->addWidget(btn_7, 1, 0, 1, 1);

        btn_1 = new QPushButton(frame_buttons);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        btn_1->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: white\n"
"}"));
        btn_1->setCheckable(false);

        layout_digits_and_opers->addWidget(btn_1, 3, 0, 1, 1);

        btn_mod = new QPushButton(frame_buttons);
        btn_mod->setObjectName(QString::fromUtf8("btn_mod"));
        btn_mod->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: gray\n"
"}"));
        btn_mod->setCheckable(false);

        layout_digits_and_opers->addWidget(btn_mod, 0, 2, 1, 1);

        btn_unary_plus_minus = new QPushButton(frame_buttons);
        btn_unary_plus_minus->setObjectName(QString::fromUtf8("btn_unary_plus_minus"));
        btn_unary_plus_minus->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: gray\n"
"}"));
        btn_unary_plus_minus->setCheckable(false);

        layout_digits_and_opers->addWidget(btn_unary_plus_minus, 0, 1, 1, 1);

        btn_div = new QPushButton(frame_buttons);
        btn_div->setObjectName(QString::fromUtf8("btn_div"));
        btn_div->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: orange\n"
"}"));
        btn_div->setCheckable(false);

        layout_digits_and_opers->addWidget(btn_div, 0, 3, 1, 1);

        btn_mul = new QPushButton(frame_buttons);
        btn_mul->setObjectName(QString::fromUtf8("btn_mul"));
        btn_mul->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: orange\n"
"}"));
        btn_mul->setCheckable(false);

        layout_digits_and_opers->addWidget(btn_mul, 1, 3, 1, 1);

        btn_sub = new QPushButton(frame_buttons);
        btn_sub->setObjectName(QString::fromUtf8("btn_sub"));
        btn_sub->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: orange\n"
"}"));
        btn_sub->setCheckable(false);

        layout_digits_and_opers->addWidget(btn_sub, 2, 3, 1, 1);

        btn_plus = new QPushButton(frame_buttons);
        btn_plus->setObjectName(QString::fromUtf8("btn_plus"));
        btn_plus->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: orange\n"
"}"));
        btn_plus->setCheckable(false);

        layout_digits_and_opers->addWidget(btn_plus, 3, 3, 1, 1);

        btn_equal = new QPushButton(frame_buttons);
        btn_equal->setObjectName(QString::fromUtf8("btn_equal"));
        btn_equal->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: orange\n"
"}"));
        btn_equal->setCheckable(false);

        layout_digits_and_opers->addWidget(btn_equal, 4, 3, 1, 1);

        btn_dot = new QPushButton(frame_buttons);
        btn_dot->setObjectName(QString::fromUtf8("btn_dot"));
        btn_dot->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: white\n"
"}"));
        btn_dot->setCheckable(false);

        layout_digits_and_opers->addWidget(btn_dot, 4, 2, 1, 1);

        btn_3 = new QPushButton(frame_buttons);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        btn_3->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: white\n"
"}"));
        btn_3->setCheckable(true);

        layout_digits_and_opers->addWidget(btn_3, 3, 2, 1, 1);

        btn_2 = new QPushButton(frame_buttons);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        btn_2->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: white\n"
"}"));
        btn_2->setCheckable(true);

        layout_digits_and_opers->addWidget(btn_2, 3, 1, 1, 1);

        btn_5 = new QPushButton(frame_buttons);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        btn_5->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: white\n"
"}"));
        btn_5->setCheckable(false);

        layout_digits_and_opers->addWidget(btn_5, 2, 1, 1, 1);

        btn_8 = new QPushButton(frame_buttons);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));
        btn_8->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: white\n"
"}"));
        btn_8->setCheckable(false);
        btn_8->setChecked(false);

        layout_digits_and_opers->addWidget(btn_8, 1, 1, 1, 1);

        btn_9 = new QPushButton(frame_buttons);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));
        btn_9->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: white\n"
"}"));
        btn_9->setCheckable(false);

        layout_digits_and_opers->addWidget(btn_9, 1, 2, 1, 1);

        btn_6 = new QPushButton(frame_buttons);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));
        btn_6->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: white\n"
"}"));
        btn_6->setCheckable(true);

        layout_digits_and_opers->addWidget(btn_6, 2, 2, 1, 1);

        btn_0 = new QPushButton(frame_buttons);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));
        btn_0->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"background-color: white\n"
"}"));
        btn_0->setCheckable(false);

        layout_digits_and_opers->addWidget(btn_0, 4, 0, 1, 2);


        horizontalLayout_5->addLayout(layout_digits_and_opers);


        layout_buttons->addWidget(frame_buttons);


        verticalLayout_4->addLayout(layout_buttons);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SmartCalc v1.0", nullptr));
        label->setText(QString());
        line_result->setText(QString());
        btn_acos->setText(QCoreApplication::translate("MainWindow", "acos(x)", nullptr));
        btn_left_bracket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        btn_cos->setText(QCoreApplication::translate("MainWindow", "cos(x)", nullptr));
        btn_right_bracket->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        btn_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt(x)", nullptr));
        btn_pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        btn_clear_line->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        btn_plot->setText(QCoreApplication::translate("MainWindow", "Plot", nullptr));
        btn_credit->setText(QCoreApplication::translate("MainWindow", "Credit Mode", nullptr));
        btn_deposit->setText(QCoreApplication::translate("MainWindow", "Deposit Mode", nullptr));
        btn_log->setText(QCoreApplication::translate("MainWindow", "log(x)", nullptr));
        btn_ln->setText(QCoreApplication::translate("MainWindow", "ln(x)", nullptr));
        btn_asin->setText(QCoreApplication::translate("MainWindow", "asin(x)", nullptr));
        btn_sin->setText(QCoreApplication::translate("MainWindow", "sin(x)", nullptr));
        btn_tan->setText(QCoreApplication::translate("MainWindow", "tan(x)", nullptr));
        btn_atan->setText(QCoreApplication::translate("MainWindow", "atan(x)", nullptr));
        btn_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn_remove_symbol->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        btn_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn_mod->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        btn_unary_plus_minus->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        btn_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btn_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btn_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btn_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        btn_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
