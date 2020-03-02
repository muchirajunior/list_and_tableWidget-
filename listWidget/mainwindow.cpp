#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mylistview();
    mytableview();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mylistview()
{
    QString name="AVOCANDO";
    QListWidgetItem *item= new QListWidgetItem (QIcon(":/icons/myicons/avocando.jpg"),name);
    ui->listWidget->addItem(item);

    QString name1="database";
    QListWidgetItem *item1= new QListWidgetItem (QIcon(":/icons/myicons/database.ico"),name1);
    ui->listWidget->addItem(item1);

    QString name3="open";
    QListWidgetItem *item3= new QListWidgetItem (QIcon(":/icons/myicons/open.ico"),name3);
    ui->listWidget->addItem(item3);

    ui->listWidget->itemClicked(item);

}


void MainWindow::mytableview()
{


        headers<<"IMAGE" <<"TITLE"<<"DESCRIPTION";
        ui->tableWidget->setColumnCount(3);
        ui->tableWidget->setHorizontalHeaderLabels(headers);
        ui->tableWidget->setColumnWidth(0,200);
        ui->tableWidget->setColumnWidth(1,200);
        ui->tableWidget->setColumnWidth(2,200);
        ui->tableWidget->setRowHeight(0,100);

        ui->tableWidget->setRowHeight(1,100);
        ui->tableWidget->setRowHeight(2,100);

    QTableWidgetItem *item=new QTableWidgetItem();
    item->setIcon(QPixmap(":/icons/myicons/avocando.jpg"));
    item->setText(" junior");
    ui->tableWidget->setItem(0,0,item);

    QTableWidgetItem *item1=new QTableWidgetItem;
    item1->setText("  AVOCANDOS ");
    ui->tableWidget->setItem(0,1,item1);
}

void MainWindow::message()
{
   QMessageBox::information(this,"selection",ui->listWidget->currentItem()->text());
}
