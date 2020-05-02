#include "StopWatch.h"

StopWatch::StopWatch(QWidget *parent = 0) : QWidget(parent) {

}

void StopWatch::on_StartTimer() {
	{
		mStartTime = QTime::currentTime();
		mRunning = true;
	}
}

void StopWatch::on_StopTimer() {
		mRunning = false;
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