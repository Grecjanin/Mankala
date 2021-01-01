#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QtNetwork>
//#include <arpa/inet.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void readData();

    void disconnected();
    void connected();

    void on_pushButtonStart_clicked();

    void on_pit7_clicked();

    void on_pit11_clicked();

    void on_pit0_clicked();

    void on_pit1_clicked();

    void on_pit2_clicked();

    void on_pit3_clicked();

    void on_pit4_clicked();

    void on_pit5_clicked();

    void on_pit8_clicked();

    void on_pit9_clicked();

    void on_pit10_clicked();

    void on_pit12_clicked();

    void on_pushButtonBack_clicked();

    void on_pushButtonSurrender_clicked();

private:
    Ui::MainWindow *ui;
    QPushButton *pits[14];
    qint32 player , currentPlayer;
    QTcpSocket *tcpSocket;
    QDataStream *stream;
    QByteArray enemyName;
    bool isGameInProgress;

    void sendMove(int move);
    void readBoard();
    void back2menu();
    void setUpEndGameGUI();
};
#endif // MAINWINDOW_H
