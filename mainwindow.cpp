#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <qmessagebox.h>

QString content = NULL;
double num1=0,num2=0;
double sum;
int i=0;
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

void MainWindow::on_b1_clicked()
{
    content.append("1");
    ui->screen->setText(content);
    if(i==0)
    {
         num1 = num1*10 +1;
    }else
    {
         num2 = num2*10 +1;
    }

}

void MainWindow::on_b2_clicked()
{
    content.append("2");
    ui->screen->setText(content);
    if(i==0)
    {
         num1 = num1*10 +2;
    }else
    {
         num2 = num2*10 +2;
    }

}

void MainWindow::on_b3_clicked()
{
    content.append("3");
    ui->screen->setText(content);
    if(i==0)
    {
         num1 = num1*10 +3;
    }else
    {
         num2 = num2*10 +3;
    }

}

void MainWindow::on_b4_clicked()
{
    content.append("4");
    ui->screen->setText(content);
    if(i==0)
    {
         num1 = num1*10 +4;
    }else
    {
         num2 = num2*10 +4;
    }

}

void MainWindow::on_b5_clicked()
{
    content.append("5");
    ui->screen->setText(content);
    if(i==0)
    {
         num1 = num1*10 +5;
    }else
    {
         num2 = num2*10 +5;
    }

}

void MainWindow::on_b6_clicked()
{
    content.append("6");
    ui->screen->setText(content);
    if(i==0)
    {
         num1 = num1*10 +6;
    }else
    {
         num2 = num2*10 +6;
    }

}

void MainWindow::on_b7_clicked()
{
    content.append("7");
    ui->screen->setText(content);
    if(i==0)
    {
         num1 = num1*10 +7;
    }else
    {
         num2 = num2*10 +7;
    }

}

void MainWindow::on_b8_clicked()
{
    content.append("8");
    ui->screen->setText(content);
    if(i==0)
    {
         num1 = num1*10 +8;
    }else
    {
         num2 = num2*10 +8;
    }

}

void MainWindow::on_b9_clicked()
{
    content.append("9");
    ui->screen->setText(content);
    if(i==0)
    {
         num1 = num1*10 +9;
    }else
    {
         num2 = num2*10 +9;
    }

}

void MainWindow::on_b0_clicked()
{
    content.append("0");
    ui->screen->setText(content);
    if(i==0)
    {
         num1 = num1*10;
    }else
    {
         num2 = num2*10;
    }

}

void MainWindow::on_point_clicked()
{
    content.clear();
    ui->screen->setText(content);
    num1=0,num2=0;
    i=0;
}



void MainWindow::on_add_clicked()           //+
{
    content.append("+");
    ui->screen->setText(content);
    i = 1;
}

void MainWindow::on_sub_clicked()            //-
{
    content.append("-");
    ui->screen->setText(content);
    i = 2;
}

void MainWindow::on_mul_clicked()            //*
{
    content.append("*");
    ui->screen->setText(content);
    i = 3;
}

void MainWindow::on_div_clicked()           //chu
{
    content.append("/");
    ui->screen->setText(content);
    i = 4;
}

void MainWindow::on_equal_clicked()          //=
{
    content.append("=");
    ui->screen->setText(content);
    switch (i) {
    case 1:
        sum =num1+num2;
        ui->screen->setText(QString::number(sum));
        i = 0;
        break;
    case 2:
        sum =num1-num2;
        ui->screen->setText(QString::number(sum));
        i = 0;
        break;
    case 3:
        sum =num1*num2;
        ui->screen->setText(QString::number(sum));
        i = 0;
        break;
    case 4:
        if(num2 == 0)
        {
            QMessageBox::warning(this,"警告","输入错误",QMessageBox::Ok);
        }
        sum =num1/num2;
        ui->screen->setText(QString::number(sum));
        i = 0;
        break;
    default:
        break;
    }
}
