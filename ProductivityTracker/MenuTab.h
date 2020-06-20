#ifndef MENUTAB_H
#define MENUTAB_H

#include <QTabWidget>

#include <QObject>
#include <QWidget>

class MenuTab : public QTabWidget{
    Q_OBJECT
public:
    explicit MenuTab(QWidget *parent = nullptr);
signals:
};

#endif // MENUTAB_H
