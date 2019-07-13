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

double FirstNumber, SecondNumber, Itog;
bool plus, minus, ymnojenie, delenie, koren, kvadrat, FirstnumberCheck, operation, SecondnumberCheck = 0;
int last;

void MainWindow::Check(){
    if(ui->vivod->text().contains("Null")){
       ui->vivod->setText( ui->vivod->text().remove("Null"));
    }
}

void MainWindow::numberWork(int i)
{
    if (FirstnumberCheck = 0 && operation != 1){
    FirstNumber = i;
    FirstnumberCheck = 1;
    }
    else if(FirstnumberCheck = 1 && operation!=1){
    FirstNumber = (FirstNumber * 10) + i;
    }
    else if(SecondnumberCheck = 0 && operation!=0){
    SecondNumber = i;
    SecondnumberCheck = 1;
    }
    else if(SecondnumberCheck = 1 && operation!=0){
    SecondNumber = (SecondNumber*10) + i;
    }
    last = i;
}

void MainWindow::operations(){
    FirstNumber = ui->vivod->text().toDouble();
    operation = 1;
}

void MainWindow::obratno(int j){
    if (operation = 0){
    FirstNumber = (FirstNumber - j) / 10;
    }
    else if (operation !=0) {
    SecondNumber = (SecondNumber - j) / 10;
    }
}

void MainWindow::on_zero_clicked()
{
    Check();
    ui->vivod->setText(ui ->vivod-> text() + "0" );
    numberWork(0);
}

void MainWindow::on_one_clicked()
{
    Check();
    ui->vivod->setText(ui ->vivod-> text() + "1" );
    numberWork(1);
}

void MainWindow::on_two_clicked()
{
    Check();
    ui->vivod->setText(ui ->vivod-> text() + "2" );
    numberWork(2);
}

void MainWindow::on_three_clicked()
{
    Check();
    ui->vivod->setText(ui ->vivod-> text() + "3" );
    numberWork(3);
}

void MainWindow::on_four_clicked()
{
    Check();
    ui->vivod->setText(ui ->vivod-> text() + "4" );
    numberWork(4);
}

void MainWindow::on_five_clicked()
{
    Check();
    ui->vivod->setText(ui ->vivod-> text() + "5" );
    numberWork(5);
}

void MainWindow::on_six_clicked()
{
    Check();
    ui->vivod->setText(ui ->vivod-> text() + "6" );
    numberWork(6);
}

void MainWindow::on_seven_clicked()
{
    Check();
    ui->vivod->setText(ui ->vivod-> text() + "7" );
    numberWork(7);
}

void MainWindow::on_eight_clicked()
{
    Check();
    ui->vivod->setText(ui ->vivod-> text() + "8" );
    numberWork(8);
}

void MainWindow::on_nine_clicked()
{
    Check();
    ui->vivod->setText(ui ->vivod-> text() + "9" );
    numberWork(9);
}

void MainWindow::on_minus_clicked()
{
    operations();
    ui->vivod->setText(ui->vivod->text()+ "-");
    minus = 1;
    last = 10;
}

void MainWindow::on_plus_clicked()
{
    operations();
    ui->vivod->setText(ui->vivod->text()+ "+");
    plus = 1;
    last = 11;
}

void MainWindow::on_ymnojenie_clicked()
{
    operations();
    ui->vivod->setText(ui->vivod->text()+ "*");
    ymnojenie = 1;
    last = 12;
}

void MainWindow::on_delenie_clicked()
{
    operations();
    ui->vivod->setText(ui->vivod->text()+ "/");
    delenie = 1;
    last = 13;
}

void MainWindow::on_koreni_clicked()
{
    koren = 1;
    FirstNumber = ui->vivod->text().toDouble();
    ui->vivod->setText("√ " +  ui->vivod->text());
    last = 14;
}

void MainWindow::on_CE_clicked()
{
    ui->vivod->setText("Null");
    minus = 0;
    plus = 0;
    ymnojenie = 0;
    delenie = 0;
    koren = 0;
    kvadrat = 0;
    FirstNumber = 0;
    FirstnumberCheck = 0;
    operation = 0;
    SecondNumber = 0;
    SecondnumberCheck = 0;
}

void MainWindow::on_change_clicked()
{
 if(ui->vivod->text().contains("-")){
    ui->vivod->setText( ui->vivod->text().remove("-"));
    }
 else{
    ui->vivod->setText("-" +  ui->vivod->text());
    }
 if (operation = 0){
    FirstNumber = FirstNumber * -1;
    }
 else if (operation = 1){
    SecondNumber = SecondNumber * -1;
    }
}

void MainWindow::on_kvadrat_clicked()
{
    kvadrat = 1;
    FirstNumber = ui->vivod->text().toDouble();
    ui->vivod->setText(ui->vivod->text() + "²");
    last = 15;
}

void MainWindow::on_ravno_clicked()
{
 if (plus==1){
    Itog=FirstNumber+SecondNumber;
    ui->vivod->setText(QString::number(Itog));
    plus = 0;
    }
 if (minus==1){
    Itog=FirstNumber-SecondNumber;
    ui->vivod->setText(QString::number(Itog));
    minus = 0;
    }
 if (delenie==1){
    Itog=FirstNumber/SecondNumber;
    ui->vivod->setText(QString::number(Itog));
    delenie = 0;
    }
 if (ymnojenie==1){
    Itog=FirstNumber*SecondNumber;
    ui->vivod->setText(QString::number(Itog));
    ymnojenie = 0;
    }
 if (koren == 1){
    FirstNumber=sqrt(FirstNumber);
    ui->vivod->setText(QString::number(FirstNumber));
    koren = 0;
    }
 if (kvadrat == 1){
    FirstNumber=FirstNumber*FirstNumber;
    ui->vivod->setText(QString::number(FirstNumber));
    kvadrat = 0;
    }
}

void MainWindow::on_undo_clicked()
{
 switch(last){
    case 0:
    ui->vivod->setText( ui->vivod->text().remove("0"));
    obratno(0);
    case 1:
    ui->vivod->setText( ui->vivod->text().remove("1"));
    obratno(1);
    case 2:
    ui->vivod->setText( ui->vivod->text().remove("2"));
    obratno(2);
    case 3:
    ui->vivod->setText( ui->vivod->text().remove("3"));
    obratno(3);
    case 4:
    ui->vivod->setText( ui->vivod->text().remove("4"));
    obratno(4);
    case 5:
    ui->vivod->setText( ui->vivod->text().remove("5"));
    obratno(5);
    case 6:
    ui->vivod->setText( ui->vivod->text().remove("6"));
    obratno(6);
    case 7:
    ui->vivod->setText( ui->vivod->text().remove("7"));
    obratno(7);
    case 8:
    ui->vivod->setText( ui->vivod->text().remove("8"));
    obratno(8);
    case 9:
    ui->vivod->setText( ui->vivod->text().remove("9"));
    obratno(9);
    case 10:
    ui->vivod->setText( ui->vivod->text().remove("-"));
    minus = 0;
    case 11:
    ui->vivod->setText( ui->vivod->text().remove("+"));
    plus = 0;
    case 12:
    ui->vivod->setText( ui->vivod->text().remove("*"));
    ymnojenie = 0;
    case 13:
    ui->vivod->setText( ui->vivod->text().remove("/"));
    delenie = 0;
    case 14:
    ui->vivod->setText( ui->vivod->text().remove("√"));
    koren = 0;
    case 15:
    ui->vivod->setText( ui->vivod->text().remove("²"));
    kvadrat = 0;
    }
}

void MainWindow::keyPressEvent(QKeyEvent *event) {
 QString oldText = ui->vivod->text();
 int klavisha=event->key();
 QString str = QString(QChar(klavisha));
 if (klavisha==Qt::Key_0){
     on_zero_clicked();
    }
 else if (klavisha==Qt::Key_1){
     on_one_clicked();
    }
 else if (klavisha==Qt::Key_2){
     on_two_clicked();
    }
 else if (klavisha==Qt::Key_3){
     on_three_clicked();
    }
 else if (klavisha==Qt::Key_4){
     on_four_clicked();
    }
 else if (klavisha==Qt::Key_5){
     on_five_clicked();
    }
 else if (klavisha==Qt::Key_6){
     on_six_clicked();
    }
 else if (klavisha==Qt::Key_7){
     on_seven_clicked();
    }
 else if (klavisha==Qt::Key_8){
     on_eight_clicked();
    }
 else if (klavisha==Qt::Key_9){
     on_nine_clicked();
    }
 else if (klavisha==Qt::Key_Minus){
     on_minus_clicked();
    }
 else if (klavisha==Qt::Key_Plus){
     on_plus_clicked();
    }
 else if (klavisha==Qt::Key_Asterisk){
     on_ymnojenie_clicked();
    }
 else if (klavisha==Qt::Key_Slash){
     on_delenie_clicked();
    }
 else if (klavisha==Qt::Key_Enter){
     on_ravno_clicked();
    }
}
