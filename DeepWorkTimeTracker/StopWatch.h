#pragma once

#include <QObject>
#include <QtWidgets/qwidget.h>
#include <QtWidgets/qpushbutton.h>
#include <QtWidgets/qboxlayout.h>
#include <QtWidgets/qinputdialog.h>
#include <qdatetime.h>
#include <qelapsedtimer.h>
#include <qtimer.h>
#include <QtWidgets/qlabel.h>
#include <iostream>

/*
on_startTimerclicked start timer
on_Pauseclicked pause timer
before on_starttimerclicked Pause and Stop timer should be disabled
on_stop/resetclicked reset timer -> After timer is stopped pick skill to assign time
if exit timer has been clicked ask if you want to save 
*/
class StopWatch : public QWidget
{
	Q_OBJECT
public:
	explicit StopWatch();

private slots:
	void on_StartTimer();
	void on_PauseTimer();
	void on_StopTimer();

protected:
	void timerEvent(QTimerEvent *);

private:
	QVBoxLayout *m_vboxlayout = nullptr;
	QPushButton *m_startButton = nullptr;
	QPushButton *m_pauseButton = nullptr;
	QPushButton *m_stopButton = nullptr;
	QLabel *m_timeLabel = nullptr;
	QElapsedTimer m_timer;
	qint64 m_accumulator;
	int m_timerID;
	bool mRunning;
	QTime mStartTime;
	QLabel * mLabel;
	const QChar zero;
};



//public:
//	explicit Window(QWidget *parent = 0, Qt::WindowFlags f = 0) : QWidget(parent, f), m_timerId(-1) {
//		QVBoxLayout * l = new QVBoxLayout(this);
//	}