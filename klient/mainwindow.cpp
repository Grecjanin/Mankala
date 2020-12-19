#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,tcpSocket(new QTcpSocket(this))
{
    stream = new QDataStream(tcpSocket);
    connect(tcpSocket, &QIODevice::readyRead, this, &MainWindow::readData);

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



    player = 0;
}

MainWindow::~MainWindow()
{
    tcpSocket->disconnectFromHost();
    delete ui;
}

void MainWindow::readData()
{
    qint32 temp;
    stream->startTransaction();
    *stream >> temp;
    if(temp == 2)
    {
        for (int i=0;i<14 ;i++ ) {
            *stream >> temp;
            qInfo() << temp<<"informacja \n ";
            pits[i]->setText(QString::number(temp));
        }
    }
    else if(temp == 1)
    {

        *stream >> player;
        *stream>> temp;
        QByteArray enemyName(temp, Qt::Uninitialized);
        stream->readRawData( enemyName.data() , temp);
        qInfo() << enemyName<<" przeciwnik \n ";
        if(player)
        {
            ui->labelPlayer1->setText(ui->lineEditName->text());
            ui->labelPlayer0->setText(enemyName);
        }
        else
        {
            ui->labelPlayer0->setText(ui->lineEditName->text());
            ui->labelPlayer1->setText(enemyName);
        }
        for(int i=0;i<6;i++)
        {
            pits[i + 7*((player+1)%2)]->setEnabled(false);
        }


    }
    stream->commitTransaction();
}


void MainWindow::on_pushButtonStart_clicked()
{
    ui->startingWidget->setVisible(false);
    ui->gameWidget->setVisible(true);


    tcpSocket->connectToHost("127.0.0.1", 1234);

    tcpSocket->write(ui->lineEditName->text().toUtf8());

    /*for(int i=0;i<6;i++)
    {
        pits[i + 7*player]->setEnabled(false);
    }*/
}




void MainWindow::sendMove(int move)
{
    *stream << move;
}

void MainWindow::on_pit7_clicked()
{
    sendMove(0);
}

void MainWindow::on_pit11_clicked()
{
    sendMove(4);
}

void MainWindow::on_pit0_clicked()
{
    sendMove(0);
}

void MainWindow::on_pit1_clicked()
{
    sendMove(1);
}

void MainWindow::on_pit2_clicked()
{
    sendMove(2);
}

void MainWindow::on_pit3_clicked()
{
    sendMove(3);
}

void MainWindow::on_pit4_clicked()
{
    sendMove(4);
}

void MainWindow::on_pit5_clicked()
{
    sendMove(5);
}

void MainWindow::on_pit8_clicked()
{
    sendMove(1);
}

void MainWindow::on_pit9_clicked()
{
    sendMove(2);
}

void MainWindow::on_pit10_clicked()
{
    sendMove(3);
}

void MainWindow::on_pit12_clicked()
{
    sendMove(5);
}
