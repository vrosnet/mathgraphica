#ifndef VARIABLES_GUI_H
#define VARIABLES_GUI_H

#include <QWidget>
#include "calculator/mynumber.h"

namespace Ui {
class Variables_gui;
}

class Variables_gui : public QWidget
{
    Q_OBJECT

public:
    explicit Variables_gui(QWidget *parent = 0);
    ~Variables_gui();

    int valueReturn;
    QStringList *m_variables_ListPtr;
    QList<MyNumber> *m_values_ListPtr;

    void showEvent(QShowEvent *event);
    void updateVariables();


private slots:
    void on_pushButton_new_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_cancel_clicked();

    void on_pushButton_ok_clicked();

private:
    Ui::Variables_gui *ui;
};

#endif // VARIABLES_GUI_H
