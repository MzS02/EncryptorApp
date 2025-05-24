/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *inputText;
    QPushButton *encryptButton;
    QPushButton *decryptButton;
    QTextEdit *encryptedOutput;
    QTextEdit *decryptedOutput;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(577, 405);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        inputText = new QLineEdit(centralwidget);
        inputText->setObjectName(QString::fromUtf8("inputText"));
        inputText->setGeometry(QRect(40, 30, 381, 27));
        encryptButton = new QPushButton(centralwidget);
        encryptButton->setObjectName(QString::fromUtf8("encryptButton"));
        encryptButton->setGeometry(QRect(40, 70, 88, 27));
        decryptButton = new QPushButton(centralwidget);
        decryptButton->setObjectName(QString::fromUtf8("decryptButton"));
        decryptButton->setGeometry(QRect(280, 70, 88, 27));
        encryptedOutput = new QTextEdit(centralwidget);
        encryptedOutput->setObjectName(QString::fromUtf8("encryptedOutput"));
        encryptedOutput->setGeometry(QRect(40, 110, 211, 131));
        decryptedOutput = new QTextEdit(centralwidget);
        decryptedOutput->setObjectName(QString::fromUtf8("decryptedOutput"));
        decryptedOutput->setGeometry(QRect(280, 110, 201, 131));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 577, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        encryptButton->setText(QCoreApplication::translate("MainWindow", "Encrypt", nullptr));
        decryptButton->setText(QCoreApplication::translate("MainWindow", "Decrypt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
