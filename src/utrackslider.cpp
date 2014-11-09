#include "utrackslider.h"

#include <QtWidgets>

UTrackSlider::UTrackSlider(QWidget *parent) : QWidget(parent)
{
	this->setMinimumSize(50, 30);
	//this->setStyleSheet("\n"
	//					"");
}

void UTrackSlider::paintEvent(QPaintEvent *event)
{
	(void)event;

	QPainter painter(this);
	QPen pen(Qt::black);
	pen.setWidth(5);
	painter.setPen(pen);
	int penwidth = painter.pen().width();
	qDebug() << penwidth << ":" << this->width() << ":" << this->height() ;
	painter.drawLine(penwidth / 2, penwidth / 2, penwidth / 2, this->width() - penwidth);
	painter.drawLine(penwidth / 2, penwidth / 2, this->height() - penwidth, penwidth / 2);
	painter.drawLine(this->height() - penwidth, penwidth / 2, this->width() - penwidth, this->height() - penwidth);
	painter.drawLine(penwidth / 2, this->width() - penwidth, this->width() - penwidth, this->height() - penwidth);
}
