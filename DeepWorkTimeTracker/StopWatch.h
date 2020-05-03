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



//Q_SLOT void on_pause_clicked() {
//	if (m_timer.isValid()) {
//		m_accumulator += m_timer.elapsed();
//		m_timer.invalidate();
//	}
//	else {
//		m_timer.restart();
//		m_timerId = startTimer(50);
//	}
//}
//void timerEvent(QTimerEvent * ev) {
//	if (ev->timerId() != m_timerId) {
//		QWidget::timerEvent(ev);
//		return;
//	}
//	QTime t(0, 0);
//	t = t.addMSecs(m_accumulator);
//	if (m_timer.isValid()) {
//		t = t.addMSecs(m_timer.elapsed());
//	}
//	else {
//		killTimer(m_timerId);
//		m_timerId = -1;
//	}
//	m_label->setText(t.toString("h:m:ss.zzz"));
//}
//public:
//	explicit Window(QWidget *parent = 0, Qt::WindowFlags f = 0) : QWidget(parent, f), m_timerId(-1) {
//		QVBoxLayout * l = new QVBoxLayout(this);
//	}