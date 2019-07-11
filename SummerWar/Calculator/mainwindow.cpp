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

char last;
double FirstNumber, SecondNumber;
double Itog;
bool plus = 0;
bool minus = 0;
bool ymnojenie = 0;
bool delenie = 0;
bool FirstnumberCheck = 0;
bool SecondnumberCheck = 0;
bool operation = 0;
bool koren = 0;
bool kvadrat = 0;

void MainWindow::on_zero_clicked()
{
    if(ui->vivod->text().contains("Null")){
        ui->vivod->setText( ui->vivod->text().remove("Null"));
    }
    ui->vivod->setText(ui ->vivod-> text() + "0" );
    if (FirstnumberCheck = 0 && operation != 1){
        FirstNumber = 0;
        FirstnumberCheck = 1;
    }
    else if(FirstnumberCheck = 1 && operation!=1){
        FirstNumber = FirstNumber * 10;
    }
    else if(SecondnumberCheck = 0 && operation!=0){
    SecondNumber = 0;
    SecondnumberCheck = 1;
    }
    else if(SecondnumberCheck = 1 && operation!=0){
        SecondNumber = SecondNumber * 10;
    }
    last = 0;
}

void MainWindow::on_one_clicked()
{
    if(ui->vivod->text().contains("Null")){
        ui->vivod->setText( ui->vivod->text().remove("Null"));
    }
    ui->vivod->setText(ui ->vivod-> text() + "1" );
    if (FirstnumberCheck = 0 && operation != 1){
        FirstNumber = 1;
        FirstnumberCheck = 1;
    }
    else if(FirstnumberCheck = 1 && operation!=1){
        FirstNumber = (FirstNumber*10) + 1;
    }
    else if(SecondnumberCheck = 0 && operation!=0){
    SecondNumber = 1;
    SecondnumberCheck = 1;
    }
    else if(SecondnumberCheck = 1 && operation!=0){
        SecondNumber = (SecondNumber*10) + 1;
    }
    last = 1;
}

void MainWindow::on_two_clicked()
{
    if(ui->vivod->text().contains("Null")){
        ui->vivod->setText( ui->vivod->text().remove("Null"));
    }
    ui->vivod->setText(ui ->vivod-> text() + "2" );
    if (FirstnumberCheck = 0 && operation != 1){
        FirstNumber = 2;
        FirstnumberCheck = 1;
    }
    else if(FirstnumberCheck = 1 && operation!=1){
        FirstNumber = (FirstNumber*10) + 2;
    }
    else if(SecondnumberCheck = 0 && operation!=0){
    SecondNumber = 2;
    SecondnumberCheck = 1;
    }
    else if(SecondnumberCheck = 1 && operation!=0){
        SecondNumber = (SecondNumber*10) + 2;
    }
last = 2;
}

void MainWindow::on_three_clicked()
{
    if(ui->vivod->text().contains("Null")){
        ui->vivod->setText( ui->vivod->text().remove("Null"));
    }
    ui->vivod->setText(ui ->vivod-> text() + "3" );
    if (FirstnumberCheck = 0 && operation != 1){
        FirstNumber = 3;
        FirstnumberCheck = 1;
    }
    else if(FirstnumberCheck = 1 && operation!=1){
        FirstNumber = (FirstNumber*10) + 3;
    }
    else if(SecondnumberCheck = 0 && operation!=0){
    SecondNumber = 3;
    SecondnumberCheck = 1;
    }
    else if(SecondnumberCheck = 1 && operation!=0){
        SecondNumber = (SecondNumber*10) + 3;
    }
    last = 3;
}

void MainWindow::on_four_clicked()
{
    if(ui->vivod->text().contains("Null")){
        ui->vivod->setText( ui->vivod->text().remove("Null"));
    }
    ui->vivod->setText(ui ->vivod-> text() + "4" );
    if (FirstnumberCheck = 0 && operation != 1){
        FirstNumber = 4;
        FirstnumberCheck = 1;
    }
    else if(FirstnumberCheck = 1 && operation!=1){
        FirstNumber = (FirstNumber*10) + 4;
    }
    else if(SecondnumberCheck = 0 && operation!=0){
    SecondNumber = 4;
    SecondnumberCheck = 1;
    }
    else if(SecondnumberCheck = 1 && operation!=0){
        SecondNumber = (SecondNumber*10) + 4;
    }
    last = 4;
}

void MainWindow::on_five_clicked()
{
    if(ui->vivod->text().contains("Null")){
        ui->vivod->setText( ui->vivod->text().remove("Null"));
    }
    ui->vivod->setText(ui ->vivod-> text() + "5" );
    if (FirstnumberCheck = 0 && operation != 1){
        FirstNumber = 5;
        FirstnumberCheck = 1;
    }
    else if(FirstnumberCheck = 1 && operation!=1){
        FirstNumber = (FirstNumber*10) + 5;
    }
    else if(SecondnumberCheck = 0 && operation!=0){
    SecondNumber = 5;
    SecondnumberCheck = 1;
    }
    else if(SecondnumberCheck = 1 && operation!=0){
        SecondNumber = (SecondNumber*10) + 5;
    }
    last = 5;
}

void MainWindow::on_six_clicked()
{
    if(ui->vivod->text().contains("Null")){
        ui->vivod->setText( ui->vivod->text().remove("Null"));
    }
    ui->vivod->setText(ui ->vivod-> text() + "6" );
    if (FirstnumberCheck = 0 && operation != 1){
        FirstNumber = 6;
        FirstnumberCheck = 1;
    }
    else if(FirstnumberCheck = 1 && operation!=1){
        FirstNumber = (FirstNumber*10) + 6;
    }
    else if(SecondnumberCheck = 0 && operation!=0){
    SecondNumber = 6;
    SecondnumberCheck = 1;
    }
    else if(SecondnumberCheck = 1 && operation!=0){
        SecondNumber = (SecondNumber*10) + 6;
    }
    last = 6;
}

void MainWindow::on_seven_clicked()
{
    if(ui->vivod->text().contains("Null")){
        ui->vivod->setText( ui->vivod->text().remove("Null"));
    }
    ui->vivod->setText(ui ->vivod-> text() + "7" );
    if (FirstnumberCheck = 0 && operation != 1){
        FirstNumber = 7;
        FirstnumberCheck = 1;
    }
    else if(FirstnumberCheck = 1 && operation!=1){
        FirstNumber = (FirstNumber*10) + 7;
    }
    else if(SecondnumberCheck = 0 && operation!=0){
    SecondNumber = 7;
    SecondnumberCheck = 1;
    }
    else if(SecondnumberCheck = 1 && operation!=0){
        SecondNumber = (SecondNumber*10) + 7;
    }
    last = 7;
}

void MainWindow::on_eight_clicked()
{
    if(ui->vivod->text().contains("Null")){
        ui->vivod->setText( ui->vivod->text().remove("Null"));
    }
    ui->vivod->setText(ui ->vivod-> text() + "8" );
    if (FirstnumberCheck = 0 && operation != 1){
        FirstNumber = 8;
        FirstnumberCheck = 1;
    }
    else if(FirstnumberCheck = 1 && operation!=1){
        FirstNumber = (FirstNumber*10) + 8;
    }
    else if(SecondnumberCheck = 0 && operation!=0){
    SecondNumber = 8;
    SecondnumberCheck = 1;
    }
    else if(SecondnumberCheck = 1 && operation!=0){
        SecondNumber = (SecondNumber*10) + 8;
    }
    last = 8;
}

void MainWindow::on_nine_clicked()
{
    if(ui->vivod->text().contains("Null")){
        ui->vivod->setText( ui->vivod->text().remove("Null"));
    }
    ui->vivod->setText(ui ->vivod-> text() + "9" );
    if (FirstnumberCheck = 0 && operation != 1){
        FirstNumber = 9;
        FirstnumberCheck = 1;
    }
    else if(FirstnumberCheck = 1 && operation!=1){
        FirstNumber = (FirstNumber*10) + 9;
    }
    else if(SecondnumberCheck = 0 && operation!=0){
    SecondNumber = 9;
    SecondnumberCheck = 1;
    }
    else if(SecondnumberCheck = 1 && operation!=0){
        SecondNumber = (SecondNumber*10) + 9;
    }
    last = 9;
}

void MainWindow::on_minus_clicked()
{
    FirstNumber = ui->vivod->text().toDouble();
     ui->vivod->setText(ui->vivod->text()+ "-");
    minus = 1;
    operation = 1;
    last = 10;
}

void MainWindow::on_plus_clicked()
{
 FirstNumber = ui->vivod->text().toDouble();
ui->vivod->setText(ui->vivod->text()+ "+");
 plus = 1;
 operation = 1;
}
void MainWindow::on_ymnojenie_clicked()
{
    FirstNumber = ui->vivod->text().toDouble();
    ui->vivod->setText(ui->vivod->text()+ "*");
    ymnojenie = 1;
    operation = 1;
    last = 12;
}

void MainWindow::on_delenie_clicked()
{
 FirstNumber = ui->vivod->text().toDouble();
 ui->vivod->setText(ui->vivod->text()+ "/");
 delenie = 1;
 operation = 1;
 last = 13;
}

void MainWindow::on_clear_2_clicked()
{
    ui->vivod->setText("Null");
     plus = 0;
     minus = 0;
     ymnojenie = 0;
     delenie = 0;
     operation = 0;
     FirstNumber = 0;
     FirstnumberCheck = 0;
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

void MainWindow::on_ravno_clicked()
{
//SecondNumber = ui->vivod->text().toDouble();
if(plus==1){
    Itog=FirstNumber+SecondNumber;
    ui->vivod->setText(QString::number(Itog));
    Itog = FirstNumber+SecondNumber;
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
if(koren == 1){
    FirstNumber=sqrt(FirstNumber);
    ui->vivod->setText(QString::number(FirstNumber));
}
if(kvadrat == 1){
    FirstNumber=FirstNumber*FirstNumber;
    ui->vivod->setText(QString::number(FirstNumber));
}
 koren = 0;
 kvadrat = 0;
 plus = 0;
 minus = 0;
 ymnojenie = 0;
 delenie = 0;
 FirstNumber = 0;
 FirstnumberCheck = 0;
 SecondNumber = 0;
 SecondnumberCheck = 0;
}

void MainWindow::on_koreni_clicked()
{
koren = 1;
FirstNumber = ui->vivod->text().toDouble();
ui->vivod->setText("√ " +  ui->vivod->text());
last = 14;
}

void MainWindow::on_undo_clicked()
{
   // QMessageBox::critical(this, "Заголовок", "Work in progress");
    switch (last){
        case 0: ui->vivod->setText( ui->vivod->text().remove("0"));
        if (operation = 0){
       FirstNumber = FirstNumber / 10;
        }
        else if (operation !=0) {
            SecondNumber = SecondNumber / 10;
        }
    case 1: ui->vivod->setText( ui->vivod->text().remove("1"));
    if (operation = 0){
   FirstNumber = (FirstNumber - 1) / 10;
    }
    else if (operation !=0) {
        SecondNumber = (SecondNumber - 1 ) / 10;
    }
    case 2: ui->vivod->setText( ui->vivod->text().remove("2"));
    if (operation = 0){
   FirstNumber = (FirstNumber - 2) / 10;
    }
    else if (operation !=0) {
        SecondNumber = (SecondNumber - 2 ) / 10;;
    }
    case 3: ui->vivod->setText( ui->vivod->text().remove("3"));
    if (operation = 0){
   FirstNumber = (FirstNumber - 3) / 10;
    }
    else if (operation !=0) {
        SecondNumber = (SecondNumber - 3 ) / 10;
    }
    case 4: ui->vivod->setText( ui->vivod->text().remove("4"));
    if (operation = 0){
  FirstNumber = (FirstNumber - 4) / 10;
    }
    else if (operation !=0) {
        SecondNumber = (SecondNumber - 4 ) / 10;
    }
    case 5: ui->vivod->setText( ui->vivod->text().remove("5"));
    if (operation = 0){
   FirstNumber = (FirstNumber - 5) / 10;
    }
    else if (operation !=0) {
       SecondNumber = (SecondNumber - 5 ) / 10;
    }
    case 6: ui->vivod->setText( ui->vivod->text().remove("6"));
    if (operation = 0){
   FirstNumber = (FirstNumber - 6) / 10;
    }
    else if (operation !=0) {
        SecondNumber = (SecondNumber - 6 ) / 10;
    }
    case 7: ui->vivod->setText( ui->vivod->text().remove("7"));
    if (operation = 0){
  FirstNumber = (FirstNumber - 7) / 10;
    }
    else if (operation !=0) {
        SecondNumber = (SecondNumber - 7 ) / 10;
    }
    case 8: ui->vivod->setText( ui->vivod->text().remove("8"));
    if (operation = 0){
   FirstNumber = (FirstNumber - 8) / 10;
    }
    else if (operation !=0) {
        SecondNumber = (SecondNumber - 8 ) / 10;
    }
    case 9: ui->vivod->setText( ui->vivod->text().remove("9"));
    if (operation = 0){
   FirstNumber = (FirstNumber - 9) / 10;
    }
    else if (operation !=0) {
       SecondNumber = (SecondNumber - 9 ) / 10;
    }
    case 10: ui->vivod->setText( ui->vivod->text().remove("-"));
    minus = 0;
    case 11: ui->vivod->setText( ui->vivod->text().remove("+"));
    plus = 0;
    case 12: ui->vivod->setText( ui->vivod->text().remove("*"));
    ymnojenie = 0;
    case 13: ui->vivod->setText( ui->vivod->text().remove("/"));
    delenie = 0;
    case 14: ui->vivod->setText( ui->vivod->text().remove("√"));
    koren = 0;
    case 15: ui->vivod->setText( ui->vivod->text().remove("²"));
    kvadrat = 0;
    }
}

void MainWindow::on_kvadrat_clicked()
{
    kvadrat = 1;
    FirstNumber = ui->vivod->text().toDouble();
   ui->vivod->setText(ui->vivod->text() + "²");
   last = 15;
}

void MainWindow::keyPressEvent(QKeyEvent *event) {
 QString oldText = ui->vivod->text();
 int klavisha=event->key();
 QString str = QString(QChar(klavisha));
 if (klavisha==Qt::Key_0){
     if(ui->vivod->text().contains("Null")){
         ui->vivod->setText( ui->vivod->text().remove("Null"));
     }
     ui->vivod->setText(ui ->vivod-> text() + "0" );
     if (FirstnumberCheck = 0 && operation != 1){
         FirstNumber = 0;
         FirstnumberCheck = 1;
     }
     else if(FirstnumberCheck = 1 && operation!=1){
         FirstNumber = FirstNumber * 10;
     }
     else if(SecondnumberCheck = 0 && operation!=0){
     SecondNumber = 0;
     SecondnumberCheck = 1;
     }
     else if(SecondnumberCheck = 1 && operation!=0){
         SecondNumber = SecondNumber * 10;
     }
     last = 0;
 }
 else if (klavisha==Qt::Key_1){
     if(ui->vivod->text().contains("Null")){
         ui->vivod->setText( ui->vivod->text().remove("Null"));
     }
     ui->vivod->setText(ui ->vivod-> text() + "1" );
     if (FirstnumberCheck = 0 && operation != 1){
         FirstNumber = 1;
         FirstnumberCheck = 1;
     }
     else if(FirstnumberCheck = 1 && operation!=1){
         FirstNumber = (FirstNumber*10) + 1;
     }
     else if(SecondnumberCheck = 0 && operation!=0){
     SecondNumber = 1;
     SecondnumberCheck = 1;
     }
     else if(SecondnumberCheck = 1 && operation!=0){
         SecondNumber = (SecondNumber*10) + 1;
     }
     last = 1;
    }
 else if (klavisha==Qt::Key_2){
     if(ui->vivod->text().contains("Null")){
         ui->vivod->setText( ui->vivod->text().remove("Null"));
     }
     ui->vivod->setText(ui ->vivod-> text() + "2" );
     if (FirstnumberCheck = 0 && operation != 1){
         FirstNumber = 2;
         FirstnumberCheck = 1;
     }
     else if(FirstnumberCheck = 1 && operation!=1){
         FirstNumber = (FirstNumber*10) + 2;
     }
     else if(SecondnumberCheck = 0 && operation!=0){
     SecondNumber = 2;
     SecondnumberCheck = 1;
     }
     else if(SecondnumberCheck = 1 && operation!=0){
         SecondNumber = (SecondNumber*10) + 2;
     }
     last = 2;
    }
 else if (klavisha==Qt::Key_3){
     if(ui->vivod->text().contains("Null")){
         ui->vivod->setText( ui->vivod->text().remove("Null"));
     }
     ui->vivod->setText(ui ->vivod-> text() + "3" );
     if (FirstnumberCheck = 0 && operation != 1){
         FirstNumber = 3;
         FirstnumberCheck = 1;
     }
     else if(FirstnumberCheck = 1 && operation!=1){
         FirstNumber = (FirstNumber*10) + 3;
     }
     else if(SecondnumberCheck = 0 && operation!=0){
     SecondNumber = 3;
     SecondnumberCheck = 1;
     }
     else if(SecondnumberCheck = 1 && operation!=0){
         SecondNumber = (SecondNumber*10) + 3;
     }
     last = 3;
    }
 else if (klavisha==Qt::Key_4){
     if(ui->vivod->text().contains("Null")){
         ui->vivod->setText( ui->vivod->text().remove("Null"));
     }
     ui->vivod->setText(ui ->vivod-> text() + "4" );
     if (FirstnumberCheck = 0 && operation != 1){
         FirstNumber = 4;
         FirstnumberCheck = 1;
     }
     else if(FirstnumberCheck = 1 && operation!=1){
         FirstNumber = (FirstNumber*10) + 4;
     }
     else if(SecondnumberCheck = 0 && operation!=0){
     SecondNumber = 4;
     SecondnumberCheck = 1;
     }
     else if(SecondnumberCheck = 1 && operation!=0){
         SecondNumber = (SecondNumber*10) + 4;
     }
     last = 4;
    }
 else if (klavisha==Qt::Key_5){
     if(ui->vivod->text().contains("Null")){
         ui->vivod->setText( ui->vivod->text().remove("Null"));
     }
     ui->vivod->setText(ui ->vivod-> text() + "5" );
     if (FirstnumberCheck = 0 && operation != 1){
         FirstNumber = 5;
         FirstnumberCheck = 1;
     }
     else if(FirstnumberCheck = 1 && operation!=1){
         FirstNumber = (FirstNumber*10) + 5;
     }
     else if(SecondnumberCheck = 0 && operation!=0){
     SecondNumber = 5;
     SecondnumberCheck = 1;
     }
     else if(SecondnumberCheck = 1 && operation!=0){
         SecondNumber = (SecondNumber*10) + 5;
     }
     last = 5;
    }
 else if (klavisha==Qt::Key_6){
     if(ui->vivod->text().contains("Null")){
         ui->vivod->setText( ui->vivod->text().remove("Null"));
     }
     ui->vivod->setText(ui ->vivod-> text() + "6" );
     if (FirstnumberCheck = 0 && operation != 1){
         FirstNumber = 6;
         FirstnumberCheck = 1;
     }
     else if(FirstnumberCheck = 1 && operation!=1){
         FirstNumber = (FirstNumber*10) + 6;
     }
     else if(SecondnumberCheck = 0 && operation!=0){
     SecondNumber = 6;
     SecondnumberCheck = 1;
     }
     else if(SecondnumberCheck = 1 && operation!=0){
         SecondNumber = (SecondNumber*10) + 6;
     }
     last = 6;
    }
 else if (klavisha==Qt::Key_7){
     if(ui->vivod->text().contains("Null")){
         ui->vivod->setText( ui->vivod->text().remove("Null"));
     }
     ui->vivod->setText(ui ->vivod-> text() + "7" );
     if (FirstnumberCheck = 0 && operation != 1){
         FirstNumber = 7;
         FirstnumberCheck = 1;
     }
     else if(FirstnumberCheck = 1 && operation!=1){
         FirstNumber = (FirstNumber*10) + 7;
     }
     else if(SecondnumberCheck = 0 && operation!=0){
     SecondNumber = 7;
     SecondnumberCheck = 1;
     }
     else if(SecondnumberCheck = 1 && operation!=0){
         SecondNumber = (SecondNumber*10) + 7;
     }
     last = 7;
    }
 else if (klavisha==Qt::Key_8){
     if(ui->vivod->text().contains("Null")){
         ui->vivod->setText( ui->vivod->text().remove("Null"));
     }
     ui->vivod->setText(ui ->vivod-> text() + "8" );
     if (FirstnumberCheck = 0 && operation != 1){
         FirstNumber = 8;
         FirstnumberCheck = 1;
     }
     else if(FirstnumberCheck = 1 && operation!=1){
         FirstNumber = (FirstNumber*10) + 8;
     }
     else if(SecondnumberCheck = 0 && operation!=0){
     SecondNumber = 8;
     SecondnumberCheck = 1;
     }
     else if(SecondnumberCheck = 1 && operation!=0){
         SecondNumber = (SecondNumber*10) + 8;
     }
     last = 8;
    }
 else if (klavisha==Qt::Key_9){
     if(ui->vivod->text().contains("Null")){
         ui->vivod->setText( ui->vivod->text().remove("Null"));
     }
     ui->vivod->setText(ui ->vivod-> text() + "9" );
     if (FirstnumberCheck = 0 && operation != 1){
         FirstNumber = 9;
         FirstnumberCheck = 1;
     }
     else if(FirstnumberCheck = 1 && operation!=1){
         FirstNumber = (FirstNumber*10) + 9;
     }
     else if(SecondnumberCheck = 0 && operation!=0){
     SecondNumber = 9;
     SecondnumberCheck = 1;
     }
     else if(SecondnumberCheck = 1 && operation!=0){
         SecondNumber = (SecondNumber*10) + 9;
     }
     last = 9;
    }
  else if (klavisha==Qt::Key_Plus){
     FirstNumber = ui->vivod->text().toDouble();
    ui->vivod->setText(ui->vivod->text()+ "+");
     plus = 1;
     operation = 1;
     last = 11;
     }
 else if (klavisha==Qt::Key_Minus){
    FirstNumber = ui->vivod->text().toDouble();
   ui->vivod->setText(ui->vivod->text()+ "-");
    minus = 1;
    operation = 1;
    last = 10;
    }
 else if (klavisha==Qt::Key_Asterisk){
    FirstNumber = ui->vivod->text().toDouble();
   ui->vivod->setText(ui->vivod->text()+ "*");
    ymnojenie = 1;
    operation = 1;
    last = 12;
    }
 else if (klavisha==Qt::Key_Slash){
    FirstNumber = ui->vivod->text().toDouble();
   ui->vivod->setText(ui->vivod->text()+ "/");
    delenie = 1;
    operation = 1;
    last = 13;
    }
 else if (klavisha==Qt::Key_Enter){
     if(plus==1){
         Itog=FirstNumber+SecondNumber;
         ui->vivod->setText(QString::number(Itog));
         Itog = FirstNumber+SecondNumber;
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
     if(koren == 1){
         FirstNumber=sqrt(FirstNumber);
         ui->vivod->setText(QString::number(FirstNumber));
     }
     if(kvadrat == 1){
         FirstNumber=FirstNumber*FirstNumber;
         ui->vivod->setText(QString::number(FirstNumber));
     }
      koren = 0;
      kvadrat = 0;
      plus = 0;
      minus = 0;
      ymnojenie = 0;
      delenie = 0;
      FirstNumber = 0;
      FirstnumberCheck = 0;
      SecondNumber = 0;
      SecondnumberCheck = 0;
     }

    }
