#include "mainwindow.h"
#include "ui_mainwindow.h"

int i = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_incrementButton_clicked()
{
    i += 1;
    ui->lcdNumber->display(i);
}

void MainWindow::on_decrementButton_clicked()
{
    if (i != 0) {
        i -= 1;
    }
    ui->lcdNumber->display(i);
}


void MainWindow::on_fanButton_clicked()
{
    if (ui->fanButton->text() == "OFF"){
        ui->fanButton->setText("ON");
    } else {
        ui->fanButton->setText("OFF");
    }
}

void MainWindow::on_lightButton_clicked()
{
    if (ui->lightButton->text() == "OFF"){
        ui->lightButton->setText("ON");
    } else {
        ui->lightButton->setText("OFF");
    }
}
