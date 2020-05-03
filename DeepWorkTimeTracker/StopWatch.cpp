#include "StopWatch.h"

StopWatch::StopWatch(){
	m_vboxlayout = new QVBoxLayout(this);
	m_startButton = new QPushButton("Start Timer");
	m_pauseButton = new QPushButton("Pause");
	m_stopButton = new QPushButton("Stop/Reset");
	m_timeLabel = new QLabel("00:00:00");

	m_vboxlayout->addWidget(m_timeLabel);
	m_vboxlayout->addWidget(m_startButton);
	m_vboxlayout->addWidget(m_pauseButton);
	m_vboxlayout->addWidget(m_stopButton);

	connect(m_startButton, &QPushButton::clicked, this, &StopWatch::on_StartTimer);
	connect(m_pauseButton, &QPushButton::clicked, this, &StopWatch::on_StartTimer);
	connect(m_stopButton, &QPushButton::clicked, this, &StopWatch::on_StopTimer);

}

void StopWatch::on_StartTimer() {
		mStartTime = QTime::currentTime();
		mRunning = true;
}

void StopWatch::on_StopTimer() {
		mRunning = false;
		m_timeLabel->setText("00:00:00");
}

void StopWatch::timerEvent(QTimerEvent*) {
	if (mRunning)
	{
		qint64 ms = mStartTime.msecsTo(QTime::currentTime());
		int h = ms / 1000 / 60 / 60;
		int m = (ms / 1000 / 60) - (h * 60);
		int s = (ms / 1000) - (m * 60);
		ms = ms - (s * 1000) - (m * 60000) - (h * 3600000);
		QString diff = QString("%1:%2:%3:%4").
			arg(h, 3, 10, zero).
			arg(m, 2, 10, zero).
			arg(s, 2, 10, zero).
			arg(ms, 3, 10, zero);
		mLabel->setText(diff);
	}
}

void on_StopTimer()
{
}
