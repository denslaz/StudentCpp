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

    void on_clear_2_clicked();

    void on_change_clicked();

    void on_ravno_clicked();

    void on_koreni_clicked();

    void on_undo_clicked();

    void on_kvadrat_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H