#include "cnagmainwindow.h"
#include "./ui_cnagmainwindow.h"

CNAGMainWindow::CNAGMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CNAGMainWindow)
{
    ui->setupUi(this);
    fileDialog = new OpenAndSave();
}

CNAGMainWindow::~CNAGMainWindow()
{
    delete ui;
}


void CNAGMainWindow::on_actionOpen_triggered()
{
    fileDialog->openFile();
}


void CNAGMainWindow::on_actionSave_triggered()
{
    fileDialog->saveFile();
}
