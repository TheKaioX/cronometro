#include "ajuste.h"
#include "ui_ajuste.h"
#include "mainwindow.h"
#include "alarmas.h"
#include "windows.h"

QString mostrar="";
ajuste::ajuste(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ajuste)
{
    ui->setupUi(this);



//    QSpinBox *horass = new QSpinBox();
//    horass->set
    this->setMinimumSize(460,165);
    this->setMaximumSize(460,165);
}

ajuste::~ajuste()
{

    delete ui;
}


//void ajuste::on_ajuste_destroyed()
//{
//   MainWindow *nuevo = new MainWindow(this);
//   nuevo->show();

//}



//void ajuste::on_ajuste_destroyed(QObject *arg1)
//{
//    MainWindow *nuevo = new MainWindow(this);
//    nuevo->show();
//}
void ajuste::close(){
    MainWindow * newForm = new MainWindow(this);
    this->hide();
    newForm->show();
}











void ajuste::setNum(int n){
    num=n;
}


int ajuste::getLasHoras(){
    return lasHoras;
}
void ajuste::setLasHoras(int lasHoras){
    this->lasHoras = lasHoras;
}

int ajuste::getDatos(int valor){

    return valor;
}

void ajuste::openAlarmas(){

    alarmas * newForm = new alarmas(this);
    setLasHoras(ui->horass->value());
    mostrar = QString::number(getLasHoras());
    ui->label->setText(mostrar);
    newForm->show();

//    this->hide();


// ------------- Todo esto es codigo basura --------------



//    lasHoras = ui->horass->value();
    //setLasHoras(ui->horass->value());
//    int nuevoHora = ui->horass->value();
    //hola = QString::number(getLasHoras());

//    setNum(nuevoHora);




//    setLasHoras(nuevoHora);
//    getDatos(nuevoHora);
//    ui->label->setText(hola);
//    int nuevoHora = ui->horass->text().toInt();
//    ui->label->setText(nuevoHora);




//    Este es para sacar los datos de uQSpinBox
//    MainWindow.hooras
//      hooras =  ui->horass->value();
//    int hor = ui->horass->value();
//       hola = QString::number(hor);
//    ui->label->setText(hola);



//    QString hore = ui->horass;

//    QLabel *label_4=new QLabel;
//    label_4= ui->horass;

//    ui->label_4->setText("ui->horass");
//      ui->label_4 = ui->horass;
}
void ajuste::limitMinute(){
    if(ui->minutoss->value() > 59)
    {
        ui->minutoss->setValue(0);
    }
}



void ajuste::on_horass_valueChanged(int arg1)
{
    lasHoras2 = arg1;
}
