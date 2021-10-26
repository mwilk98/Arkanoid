#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->insertWidget(4, &GameClassic);
    ui->stackedWidget->setCurrentIndex(0);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_BackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_GameButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_QuitButton_clicked()
{
    close();
}


void MainWindow::on_HighScoreButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_BackButton_2_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_BackButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_SettingsButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_ClassicButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->stackedWidget->setStyleSheet("background-image: url(:/menu/res/menu/classic_bg.png);");
}

