#ifndef ACTIVITYWIDGET_H
#define ACTIVITYWIDGET_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

class ActivityWidget : public QMainWindow
{
    Q_OBJECT
public:
    explicit ActivityWidget(QWidget *parent = nullptr);

signals:

};

#endif // ACTIVITYWIDGET_H
