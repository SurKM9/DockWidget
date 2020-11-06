#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QLabel>



MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->dockWidget->setStyleSheet("QDockWidget::title {background : lightgreen;}");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QLabel* label = new QLabel(ui->dockWidget);
    label->setPixmap(QPixmap(":/img/dockImg.jpeg"));

    ui->dockWidget->setWidget(label);
}
