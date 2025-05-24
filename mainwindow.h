#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void encryptText();
    void decryptText();

private:
    Ui::MainWindow ui;
    char chars[95], key[95];
    void initKey();
};

#endif // MAINWINDOW_H
