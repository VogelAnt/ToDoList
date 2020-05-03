#pragma once

#include <QObject>
#include <QtWidgets/qwidget.h>
#include <QtWidgets/qpushbutton.h>
#include <QtWidgets/qboxlayout.h>
#include <qdatetime.h>
#include <qtimer.h>
#include <QtWidgets/qlabel.h>
#include <iostream>

class StopWatch : public QWidget
{
	Q_OBJECT
public:
	explicit StopWatch();
		// remove later on
		//QHBoxLayout * hBoxLayout = new QHBoxLayout(this);
		//QPushButton * startButton = new QPushButton("Start");
		//QPushButton * stopButton = new QPushButton("Stop");

		// set this in the constructor
		//QFont f("Arial", 22, QFont::Bold);
		//mLabel->setFont(f);

		//hBoxLayout->addWidget(startButton);
		//hBoxLayout->addWidget(stopButton);
		//hBoxLayout->addWidget(mLabel);

		//connect(startButton, SIGNAL(clicked()), SLOT(start()));
		//connect(stopButton, SIGNAL(clicked()), SLOT(stop()));

		//startTimer(0);
public slots:
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
