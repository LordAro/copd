#ifndef UTRACKSLIDER_H
#define UTRACKSLIDER_H

#include <QWidget>

class UTrackSlider : public QWidget {
	Q_OBJECT

public:
	explicit UTrackSlider(QWidget *parent = 0);

signals:

public slots:

protected:
	void paintEvent(QPaintEvent *event) override;

private:
	int duration; // PERCENTAGE!
	int cue;
	int intro;
};

#endif // UTRACKSLIDER_H
