#ifndef GESTIONAROWNER_H
#define GESTIONAROWNER_H

#include <QDialog>
#include <maincontroller.h>
#include "util.h"
#include "compania.h"

namespace Ui {
class gestionarOwner;
}

class gestionarOwner : public QDialog
{
    Q_OBJECT

public:
    explicit gestionarOwner(QWidget *parent = 0);
    ~gestionarOwner();

    void setController (MainController &);

private:
    Ui::gestionarOwner *ui;

    MainController *controller_;
    pel::List<int> buscarOwner;
    c_owner criterio;

    void showOwner();
    int opcion;
    int mostrados;
    void inicial();
    void limpiarLabel();

private slots:
    void showLabel();
    void nuevo();
    void modificar();
    void borrar();
    void aceptar();
    void cancelar();
};

#endif // GESTIONAROWNER_H
