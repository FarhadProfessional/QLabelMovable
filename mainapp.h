#ifndef MAINAPP_H
#define MAINAPP_H

#include <QMainWindow>

namespace Ui {
class MainApp;
}

class MainApp : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainApp(QWidget *parent = 0);
    ~MainApp();

private:
    Ui::MainApp *ui;
};

#endif // MAINAPP_H
