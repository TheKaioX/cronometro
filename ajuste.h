#ifndef AJUSTE_H
#define AJUSTE_H

#include <QMainWindow>
#include <QtCore>


namespace Ui {
class ajuste;
}

class ajuste : public QMainWindow
{
    Q_OBJECT

public:
    explicit ajuste(QWidget *parent = 0);
    ~ajuste();

private slots:
//    void on_ajuste_destroyed();
//    void close();

//    void on_ajuste_destroyed(QObject *arg1);

    void close();
    void openAlarmas();
    void limitMinute();







    void on_horass_valueChanged(int arg1);

private:
    Ui::ajuste *ui;
    int lasHoras;
    int num;
public:
    int lasHoras2;
    int getLasHoras();
    void setLasHoras(int lasHoras);


    void setNum (int n);







    int hooras;
    int getDatos(int valor);
//    int miinutos;
//    int seegundos;

};

#endif // AJUSTE_H
