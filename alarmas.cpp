#include "alarmas.h"
#include "ui_alarmas.h"
#include "ajuste.h"
#include "mainwindow.h"

//#include <QtCore>


alarmas::alarmas(QWidget *parent) :

    QMainWindow(parent),
    ui(new Ui::alarmas)
{
    ui->setupUi(this);    
    ajuste *formAjuste=new ajuste();
    QString cambio = QString::number(formAjuste->getLasHoras());
    ui->label_3->setText(cambio);


// -----------Esto es codigo basura ----------

//    int cambios = f->lasHoras2;
//    ui->lineEdit->setText(QString::number(cambios));
//    ui->horass->setText(a);
//    ajuste *nuevo = new ajuste;

//    QString hola = QString::number();
//    ui->label_3->setText(hola);



//    ui->horass->setText(MainWindow.hooras);

}

alarmas::~alarmas()
{
    delete ui;
}


void alarmas::close(){
    ajuste * newForm = new ajuste(this);
    this->hide();
    newForm->show();
}
