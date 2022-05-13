#ifndef OPENANDSAVE_H
#define OPENANDSAVE_H

#include <QWidget>
#include <QtWidgets/QFileDialog>

class OpenAndSave : public QWidget
{
    Q_OBJECT
public:
    explicit OpenAndSave(QWidget *parent = nullptr);
    bool openFile();
    bool saveFile();
private:
    QFileDialog* fileDialog;
    QFile* file;
signals:

};

#endif // OPENANDSAVE_H
