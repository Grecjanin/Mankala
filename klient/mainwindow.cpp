#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->gameWidget->setVisible(false);
    pits[0] = ui->pit0;
    pits[1] = ui->pit1;
    pits[2] = ui->pit2;
    pits[3] = ui->pit3;
    pits[4] = ui->pit4;
    pits[5] = ui->pit5;
    pits[6] = ui->pit6;
    pits[7] = ui->pit7;
    pits[8] = ui->pit8;
    pits[9] = ui->pit9;
    pits[10] = ui->pit10;
    pits[11] = ui->pit11;
    pits[12] = ui->pit12;
    pits[13] = ui->pit13;



    player = 1;
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButtonStart_clicked()
{
    ui->startingWidget->setVisible(false);
    ui->gameWidget->setVisible(true);
    if(player)
    {
        ui->labelPlayer1->setText(ui->lineEditName->text());
    }
    else
    {
        ui->labelPlayer0->setText(ui->lineEditName->text());
    }

    for(int i=0;i<6;i++)
    {
        pits[i + 7*player]->setEnabled(false);
    }
}
