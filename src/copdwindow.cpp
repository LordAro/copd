#include "copdwindow.h"
#include "utrackslider.h"

#include "ui_copdwindow.h"

COPDWindow::COPDWindow(QWidget *parent) : QMainWindow(parent)
{
	this->ui.setupUi(this);

	UTrackSlider *ts = new UTrackSlider();
	this->ui.verticalLayout->addWidget(ts);
}

COPDWindow::~COPDWindow()
{
}

void COPDWindow::on_actionExit_triggered()
{
	this->close();
}
