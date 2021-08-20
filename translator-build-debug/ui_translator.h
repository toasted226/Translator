/********************************************************************************
** Form generated from reading UI file 'translator.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSLATOR_H
#define UI_TRANSLATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Translator
{
public:
    QWidget *centralwidget;
    QLabel *input_title;
    QTextEdit *inputbox;
    QLabel *output_title;
    QTextEdit *outputbox;
    QPushButton *translatebutton;
    QComboBox *inputlang;
    QComboBox *outputlang;
    QPushButton *swap_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Translator)
    {
        if (Translator->objectName().isEmpty())
            Translator->setObjectName(QString::fromUtf8("Translator"));
        Translator->resize(703, 325);
        centralwidget = new QWidget(Translator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        input_title = new QLabel(centralwidget);
        input_title->setObjectName(QString::fromUtf8("input_title"));
        input_title->setGeometry(QRect(10, 10, 321, 21));
        QFont font;
        font.setPointSize(14);
        input_title->setFont(font);
        inputbox = new QTextEdit(centralwidget);
        inputbox->setObjectName(QString::fromUtf8("inputbox"));
        inputbox->setGeometry(QRect(10, 40, 681, 101));
        output_title = new QLabel(centralwidget);
        output_title->setObjectName(QString::fromUtf8("output_title"));
        output_title->setGeometry(QRect(10, 150, 221, 17));
        output_title->setFont(font);
        outputbox = new QTextEdit(centralwidget);
        outputbox->setObjectName(QString::fromUtf8("outputbox"));
        outputbox->setGeometry(QRect(10, 180, 681, 101));
        translatebutton = new QPushButton(centralwidget);
        translatebutton->setObjectName(QString::fromUtf8("translatebutton"));
        translatebutton->setGeometry(QRect(360, 150, 101, 25));
        inputlang = new QComboBox(centralwidget);
        inputlang->addItem(QString());
        inputlang->addItem(QString());
        inputlang->addItem(QString());
        inputlang->addItem(QString());
        inputlang->setObjectName(QString::fromUtf8("inputlang"));
        inputlang->setGeometry(QRect(560, 10, 131, 25));
        outputlang = new QComboBox(centralwidget);
        outputlang->addItem(QString());
        outputlang->addItem(QString());
        outputlang->addItem(QString());
        outputlang->addItem(QString());
        outputlang->setObjectName(QString::fromUtf8("outputlang"));
        outputlang->setGeometry(QRect(560, 150, 131, 25));
        swap_button = new QPushButton(centralwidget);
        swap_button->setObjectName(QString::fromUtf8("swap_button"));
        swap_button->setGeometry(QRect(240, 150, 101, 25));
        Translator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Translator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 703, 22));
        Translator->setMenuBar(menubar);
        statusbar = new QStatusBar(Translator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Translator->setStatusBar(statusbar);

        retranslateUi(Translator);

        QMetaObject::connectSlotsByName(Translator);
    } // setupUi

    void retranslateUi(QMainWindow *Translator)
    {
        Translator->setWindowTitle(QCoreApplication::translate("Translator", "Unofficial Google Translate", nullptr));
        input_title->setText(QCoreApplication::translate("Translator", "English", nullptr));
        output_title->setText(QCoreApplication::translate("Translator", "Swedish", nullptr));
        translatebutton->setText(QCoreApplication::translate("Translator", "Translate", nullptr));
        inputlang->setItemText(0, QCoreApplication::translate("Translator", "en : English", nullptr));
        inputlang->setItemText(1, QCoreApplication::translate("Translator", "sv : Swedish", nullptr));
        inputlang->setItemText(2, QCoreApplication::translate("Translator", "de : German", nullptr));
        inputlang->setItemText(3, QCoreApplication::translate("Translator", "es : Spanish", nullptr));

        outputlang->setItemText(0, QCoreApplication::translate("Translator", "en : English", nullptr));
        outputlang->setItemText(1, QCoreApplication::translate("Translator", "sv : Swedish", nullptr));
        outputlang->setItemText(2, QCoreApplication::translate("Translator", "de : German", nullptr));
        outputlang->setItemText(3, QCoreApplication::translate("Translator", "es : Spanish", nullptr));

        swap_button->setText(QCoreApplication::translate("Translator", "Swap", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Translator: public Ui_Translator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSLATOR_H
