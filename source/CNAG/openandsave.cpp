#include "openandsave.h"

#include <QDebug>
#include <QDir>
OpenAndSave::OpenAndSave(QWidget *parent)
    : QWidget{parent}
{
    fileDialog = new QFileDialog();
    file = new QFile();
}

bool OpenAndSave::openFile()
{
    bool status = false;

    QString fileName = fileDialog->getOpenFileName(this, "Open file", QDir::homePath());

    file = new QFile(fileName);

    if (file->open(QFile::ReadOnly | QFile::Text))
    {
        // Carregar estruturas
    }

    file->close();

    return status;
}

bool OpenAndSave::saveFile()
{
    bool status = false;

    fileDialog->getSaveFileName(this, );

    return status;
}
