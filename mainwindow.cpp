#include "mainwindow.h"
#include "ajuste.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setMinimumSize(300,150);
    this->setMaximumSize(400,150);

}

MainWindow::~MainWindow()
{

    delete ui;

}
void MainWindow::openAjuste(){
    ajuste * newForm = new ajuste(this);
    this->hide();
    newForm->show();

}
