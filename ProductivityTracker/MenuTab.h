#ifndef MENUTAB_H
#define MENUTAB_H

#include <QObject>
#include <QWidget>

class MenuTab : public QObject
{
    Q_OBJECT
public:
    explicit MenuTab(QObject *parent = nullptr);

signals:

};

#endif // MENUTAB_H
