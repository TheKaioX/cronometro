#ifndef ALARMAS_H
#define ALARMAS_H

#include <QMainWindow>
#include <QtCore>

namespace Ui {
class alarmas;
}

class alarmas : public QMainWindow
{
    Q_OBJECT

public:
    explicit alarmas(QWidget *parent = 0);
    ~alarmas();

private:
    Ui::alarmas *ui;
public slots:
    void close();
//public:
//    int hooras;
//    int miinutos;
//    int seegundos;

};




#endif // ALARMAS_H
