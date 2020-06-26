#ifndef TIMERWIDGET_H
#define TIMERWIDGET_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

class TimerWidget : public QMainWindow
{
    Q_OBJECT
public:
    explicit TimerWidget(QWidget *parent = nullptr);

signals:

};

#endif // TIMERWIDGET_H
