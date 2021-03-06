#ifndef GRAPH2D_ADDNEW_GUI_H
#define GRAPH2D_ADDNEW_GUI_H

#include <QDialog>
#include "graph2d.h"

namespace Ui {
class Graph2D_AddNew_gui;
}

class Graph2D_AddNew_gui : public QDialog
{
    Q_OBJECT

public:
    explicit Graph2D_AddNew_gui(QWidget *parent = 0);
    ~Graph2D_AddNew_gui();

    int returnValue;
    Calculator calc;
    Graph2D m_graph2D;

    int existentGraphs_count;
private:
    QList<Graph2D> m_defaultGraph2D_List;
    // creates the defaults graphs that are presented to the user
    void create_Default_Graphs_List();

protected:
    void showEvent(QShowEvent * event);
    void closeEvent(QCloseEvent * event);

private slots:
    void on_pushButton_Ok_clicked();

    void on_pushButton_cancel_clicked();

    void on_pushButton_color2D_clicked();

    void on_checkBox_polarGraph_clicked(bool checked);

    void on_pushButton_fx_clicked();

    void on_checkBox_parametricGraph_clicked(bool checked);

    void on_pushButton_fx_2_clicked();

private:
    Ui::Graph2D_AddNew_gui *ui;

    QString strFromColor(QColor color);
};

#endif // GRAPH2D_ADDNEW_GUI_H
