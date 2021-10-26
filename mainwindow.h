#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "classic.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_BackButton_clicked();

    void on_GameButton_clicked();

    void on_QuitButton_clicked();

    void on_HighScoreButton_clicked();

    void on_BackButton_2_clicked();

    void on_BackButton_3_clicked();

    void on_SettingsButton_clicked();

    void on_ClassicButton_clicked();

private:
    Ui::MainWindow *ui;
    Classic GameClassic;
};
#endif // MAINWINDOW_H
