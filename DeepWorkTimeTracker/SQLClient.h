#pragma once

#include <QObject>

class SQLClient : public QObject
{
	Q_OBJECT

public:
	SQLClient(QObject *parent);
	~SQLClient();
};
