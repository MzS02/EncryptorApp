#include "mainwindow.h"
#include <ctime>
#include <cstdlib>
#include <QString>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {
        ui.setupUi(this);
        initKey();

        connect(ui.encryptButton, &QPushButton::clicked, this, &MainWindow::encryptText);
        connect(ui.decryptButton, &QPushButton::clicked, this, &MainWindow::decryptText);
    }

MainWindow::~MainWindow() {}

void MainWindow::initKey() {
    srand(time(0));
    for(int i = 0; i < 95; i++) {
        chars[i] = i + 32;
        key[i] = chars[i];
    }
    for(int i = 94; i > 0; i--) {
        int j = rand() % (i +1);
        std::swap(key[i], key[j]);
    }
}

void MainWindow::encryptText() {
    QString input = ui.inputText->text();
    QByteArray plain = input.toUtf8();
    QByteArray cipher;

    for(char ch :plain) {
        for(int j = 0; j < 95; j++) {
            if(chars[j] == ch) {
                cipher.append(key[j]);
                break;
            }
        }
    }

    ui.encryptedOutput->setPlainText(QString(cipher));
}

void MainWindow::decryptText() {
    QString encrypted = ui.encryptedOutput->toPlainText();
    QByteArray enc = encrypted.toUtf8();
    QByteArray decrypted;

    for(char ch : enc) {
        for(int j = 0; j < 95; j++) {
            if(key[j] == ch) {
                decrypted.append(chars[j]);
                break;
            }
        }
    }

    ui.decryptedOutput->setPlainText(QString(decrypted));
}