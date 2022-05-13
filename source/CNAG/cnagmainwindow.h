#ifndef CNAGMAINWINDOW_H
#define CNAGMAINWINDOW_H

#include <QMainWindow>
#include "openandsave.h"

QT_BEGIN_NAMESPACE
namespace Ui { class CNAGMainWindow; }
QT_END_NAMESPACE

class CNAGMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    CNAGMainWindow(QWidget *parent = nullptr);
    ~CNAGMainWindow();

private slots:
    void on_actionOpen_triggered();

    void on_actionSave_triggered();

private:
    Ui::CNAGMainWindow *ui;
    OpenAndSave* fileDialog;
};
#endif // CNAGMAINWINDOW_H
