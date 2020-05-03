#pragma once

#include <QObject>
#include <QtWidgets/qwidget.h>
#include <QtWidgets/qpushbutton.h>
#include <QtWidgets/qboxlayout.h>
#include <qdatetime.h>
#include <qelapsedtimer.h>
#include <qtimer.h>
#include <QtWidgets/qlabel.h>
#include <iostream>

class StopWatch : public QWidget
{
	Q_OBJECT
public:
	explicit StopWatch();

private slots:
	void on_StartTimer();
	void on_StopTimer();

protected:
	void timerEvent(QTimerEvent *);

private:
	QVBoxLayout *m_vboxlayout = nullptr;
	QPushButton *m_startButton = nullptr;
	QPushButton *m_pauseButton = nullptr;
	QPushButton *m_stopButton = nullptr;
	QLabel *m_timeLabel = nullptr;
	bool mRunning;
	QTime mStartTime;
	QLabel * mLabel;
	const QChar zero;
};
