#ifndef SQLCLIENT_H
#define SQLCLIENT_H

#include <QObject>

class SQLClient : public QObject
{
    Q_OBJECT
public:
    explicit SQLClient(QObject *parent = nullptr);

signals:

};

#endif // SQLCLIENT_H
