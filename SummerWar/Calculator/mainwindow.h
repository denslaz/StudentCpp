#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QWidget>
#include <QGridLayout>
#include <QKeyEvent>
#include <Qt>
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

    void on_zero_clicked();

    void on_two_clicked();

    void on_three_clicked();

    void on_four_clicked();

    void on_five_clicked();

    void on_six_clicked();

    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    void on_minus_clicked();

    void on_plus_clicked();

    void on_ymnojenie_clicked();

    void on_delenie_clicked();

    void on_CE_clicked();

    void on_change_clicked();

    void on_ravno_clicked();

    void on_koreni_clicked();

    void on_undo_clicked();

    void on_kvadrat_clicked();

    void Check();

    void numberWork(int i);

    void operations();

    void obratno(int j);

    virtual void keyPressEvent(QKeyEvent *event);

private:
    Ui::MainWindow *ui;
    QLabel *label;
    QGridLayout *myLayout;
};

#endif // MAINWINDOW_H
