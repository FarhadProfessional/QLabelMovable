#include "mainapp.h"
#include "ui_mainapp.h"

MainApp::MainApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainApp)
{
    ui->setupUi(this);

    pressed = false;
    ui->label->installEventFilter(this);
}

MainApp::~MainApp()
{
    delete ui;
}

void MainApp::mousePressEvent(QMouseEvent *event)
{
    //current = event->pos();
}

void MainApp::mouseMoveEvent(QMouseEvent *event)
{
    if(pressed)
    {
        this->move(mapToParent(event->pos() - current));
    }
}

bool MainApp::eventFilter(QObject *object, QEvent *event)
{
    if (object == ui->label && event->type() == QEvent::MouseButtonPress)
    {
        current.setX(ui->label->x()+50);
        current.setY(ui->label->y()+70);
        pressed = true;
        return true;
    }
    if (object == ui->label && event->type() == QEvent::MouseButtonRelease)
    {
        pressed = false;
        return true;
    }
    else
        return false;
}
