#ifndef MAINAPP_H
#define MAINAPP_H

#include <QMainWindow>
#include <QMouseEvent>

namespace Ui {
class MainApp;
}

class MainApp : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainApp(QWidget *parent = 0);
    ~MainApp();

    bool eventFilter(QObject *object, QEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

    QPoint current;
    bool pressed;

private:
    Ui::MainApp *ui;
};

#endif // MAINAPP_H
