#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtCore"
#include <QtCore/qmath.h>
#include <QtGui>
#include <QTextBrowser>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

double FirstNumber, SecondNumber;
double Itog;
bool plus = 0;
bool minus = 0;
bool ymnojenie = 0;
bool delenie = 0;

void MainWindow::on_zero_clicked()
{
    ui->vivod->setText(ui ->vivod-> text() + "0" );
}

void MainWindow::on_one_clicked()
{
    ui->vivod->setText(ui ->vivod-> text() + "1" );
}

void MainWindow::on_two_clicked()
{
    ui->vivod->setText(ui ->vivod-> text() + "2" );
}

void MainWindow::on_three_clicked()
{
    ui->vivod->setText(ui ->vivod-> text() + "3" );
}

void MainWindow::on_four_clicked()
{
    ui->vivod->setText(ui ->vivod-> text() + "4" );
}

void MainWindow::on_five_clicked()
{
    ui->vivod->setText(ui ->vivod-> text() + "5" );
}

void MainWindow::on_six_clicked()
{
    ui->vivod->setText(ui ->vivod-> text() + "6" );
}

void MainWindow::on_seven_clicked()
{
    ui->vivod->setText(ui ->vivod-> text() + "7" );
}

void MainWindow::on_eight_clicked()
{
    ui->vivod->setText(ui ->vivod-> text() + "8" );
}

void MainWindow::on_nine_clicked()
{
    ui->vivod->setText(ui ->vivod-> text() + "9" );
}

void MainWindow::on_minus_clicked()
{
    FirstNumber = ui->vivod->text().toDouble();
    ui->vivod->setText("");
    minus = 1;
}

void MainWindow::on_plus_clicked()
{
 FirstNumber = ui->vivod->text().toDouble();
 ui->vivod->setText("");
 plus = 1;
}
void MainWindow::on_ymnojenie_clicked()
{
    FirstNumber = ui->vivod->text().toDouble();
    ui->vivod->setText("");
    ymnojenie = 1;
}

void MainWindow::on_delenie_clicked()
{
 FirstNumber = ui->vivod->text().toDouble();
 ui->vivod->setText("");
 delenie = 1;
}

void MainWindow::on_clear_2_clicked()
{
    ui->vivod->setText("");
     plus = 0;
     minus = 0;
     ymnojenie = 0;
     delenie = 0;
}

void MainWindow::on_change_clicked()
{
    if(ui->vivod->text().contains("-")){
        ui->vivod->setText( ui->vivod->text().remove("-"));
    }
    else{
         ui->vivod->setText("-" +  ui->vivod->text());
    }
}

void MainWindow::on_ravno_clicked()
{
SecondNumber = ui->vivod->text().toDouble();
if(plus==1){
    Itog=FirstNumber+SecondNumber;
    ui->vivod->setText(QString::number(Itog));
}
if(minus==1){
    Itog=FirstNumber-SecondNumber;
    ui->vivod->setText(QString::number(Itog));
}
if(delenie==1){
    Itog=FirstNumber/SecondNumber;
    ui->vivod->setText(QString::number(Itog));
}
if(ymnojenie==1){
    Itog=FirstNumber*SecondNumber;
    ui->vivod->setText(QString::number(Itog));
}
 plus = 0;
 minus = 0;
 ymnojenie = 0;
 delenie = 0;
}

void MainWindow::on_koreni_clicked()
{
FirstNumber = ui->vivod->text().toDouble();
FirstNumber=sqrt(FirstNumber);
ui->vivod->setText(QString::number(FirstNumber));
}

void MainWindow::on_undo_clicked()
{
    QMessageBox::critical(this, "Заголовок", "Work in progress");
}

void MainWindow::on_kvadrat_clicked()
{
    FirstNumber = ui->vivod->text().toDouble();
    FirstNumber=FirstNumber*FirstNumber;
    ui->vivod->setText(QString::number(FirstNumber));
}
