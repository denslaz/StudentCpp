#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_one_clicked();

private:
    Ui::MainWindow *ui;

private slots:
    void EnterNumber();
    void operations();
    void plusminus();
};

#endif // MAINWINDOW_H
