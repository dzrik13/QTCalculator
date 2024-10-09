#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

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

void MainWindow::on_pushButton_18_clicked()
{
    ui->lineEdit->setText("0");
}


void MainWindow::on_pushButton_17_clicked()
{
    QString c = ui->lineEdit->text();
    float value = c.toFloat();
    ui->lineEdit->setText(QString::number(value * value));
}


void MainWindow::on_pushButton_13_clicked()
{
    // add button
    QString t = ui->lineEdit->text();
    num1 = t.toFloat();
    ui->lineEdit->setText("0");
    math = Custom::ADD;
}


void MainWindow::on_pushButton_14_clicked()
{
    // subtract button
    QString t = ui->lineEdit->text();
    num1 = t.toFloat();
    ui->lineEdit->setText("0");
    math = Custom::SUBTRACT;
}


void MainWindow::on_pushButton_15_clicked()
{
    // multiply button
    QString t = ui->lineEdit->text();
    num1 = t.toFloat();
    ui->lineEdit->setText("0");
    math = Custom::MULTIPLY;
}


void MainWindow::on_pushButton_19_clicked()
{
    // divide button
    QString t = ui->lineEdit->text();
    num1 = t.toFloat();
    ui->lineEdit->setText("0");
    math = Custom::DIVIDE;
}


void MainWindow::on_pushButton_12_clicked()
{
    // equals button
    QString t = ui->lineEdit->text();
    num2 = t.toFloat();
    switch(math)
    {
        case Custom::ADD:
            answer = num1 + num2;
            ui->lineEdit->setText(QString::number(answer));
            break;
        case Custom::SUBTRACT:
            answer = num1 - num2;
            ui->lineEdit->setText(QString::number(answer));
            break;
        case Custom::MULTIPLY:
            answer = num1 * num2;
            ui->lineEdit->setText(QString::number(answer));
            break;
        case Custom::DIVIDE:
            answer = num1 / num2;
            ui->lineEdit->setText(QString::number(answer));
            break;
        default:
            ui->lineEdit->setText("Error");
            break;
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    QString t = ui->lineEdit->text();
    if(t == "-0")
    {
        t[1] = '1';
    }
    else if(t[0] == '0' && t.size() == 1)
    {
        t[0] = '1';
    }
    else
    {
        t.push_back('1');
    }
    ui->lineEdit->setText(t);
}


void MainWindow::on_pushButton_4_clicked()
{
    QString t = ui->lineEdit->text();
    if(t == "-0")
    {
        t[1] = '2';
    }
    else if(t[0] == '0' && t.size() == 1)
    {
        t[0] = '2';
    }
    else
    {
        t.push_back('2');
    }
    ui->lineEdit->setText(t);
}


void MainWindow::on_pushButton_3_clicked()
{
    QString t = ui->lineEdit->text();
    if(t == "-0")
    {
        t[1] = '3';
    }
    else if(t[0] == '0' && t.size() == 1)
    {
        t[0] = '3';
    }
    else
    {
        t.push_back('3');
    }
    ui->lineEdit->setText(t);
}


void MainWindow::on_pushButton_7_clicked()
{
    QString t = ui->lineEdit->text();
    if(t == "-0")
    {
        t[1] = '4';
    }
    else if(t[0] == '0' && t.size() == 1)
    {
        t[0] = '4';
    }
    else
    {
        t.push_back('4');
    }
    ui->lineEdit->setText(t);
}


void MainWindow::on_pushButton_6_clicked()
{
    QString t = ui->lineEdit->text();
    if(t == "-0")
    {
        t[1] = '5';
    }
    else if(t[0] == '0' && t.size() == 1)
    {
        t[0] = '5';
    }
    else
    {
        t.push_back('5');
    }
    ui->lineEdit->setText(t);
}


void MainWindow::on_pushButton_2_clicked()
{
    QString t = ui->lineEdit->text();
    if(t == "-0")
    {
        t[1] = '6';
    }
    else if(t[0] == '0' && t.size() == 1)
    {
        t[0] = '6';
    }
    else
    {
        t.push_back('6');
    }
    ui->lineEdit->setText(t);
}


void MainWindow::on_pushButton_clicked()
{
    QString t = ui->lineEdit->text();
    if(t == "-0")
    {
        t[1] = '7';
    }
    else if(t[0] == '0' && t.size() == 1)
    {
        t[0] = '7';
    }
    else
    {
        t.push_back('7');
    }
    ui->lineEdit->setText(t);
}


void MainWindow::on_pushButton_10_clicked()
{
    QString t = ui->lineEdit->text();
    if(t == "-0")
    {
        t[1] = '8';
    }
    else if(t[0] == '0' && t.size() == 1)
    {
        t[0] = '8';
    }
    else
    {
        t.push_back('8');
    }
    ui->lineEdit->setText(t);
}


void MainWindow::on_pushButton_9_clicked()
{
    QString t = ui->lineEdit->text();
    if(t == "-0")
    {
        t[1] = '9';
    }
    else if(t[0] == '0' && t.size() == 1)
    {
        t[0] = '9';
    }
    else
    {
        t.push_back('9');
    }
    ui->lineEdit->setText(t);
}


void MainWindow::on_pushButton_11_clicked()
{
    QString t = ui->lineEdit->text();
    if(t == "-0")
    {
        t[1] = '0';
    }
    else if(t[0] == '0' && t.size() == 1)
    {
        t[0] = '0';
    }
    else
    {
        t.push_back('0');
    }
    ui->lineEdit->setText(t);
}


void MainWindow::on_pushButton_16_clicked()
{
    // flip pos/neg button
    QString t = ui->lineEdit->text();
    float val = t.toFloat();
    if(val == 0.00)
    {
        t.insert(0, '-');
    }
    else
    {
        val *= -1;
        t = QString::number(val);
    }
    ui->lineEdit->setText(t);
}


void MainWindow::on_pushButton_8_clicked()
{
    QString t = ui->lineEdit->text();
    t.push_back('.');
    ui->lineEdit->setText(t);
}

