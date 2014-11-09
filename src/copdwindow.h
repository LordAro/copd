#ifndef COPDWINDOW_H
#define COPDWINDOW_H

#include <QMainWindow>

#include "ui_copdwindow.h"

namespace Ui {
class COPDWindow;
}

class COPDWindow : public QMainWindow {
	Q_OBJECT

public:
	explicit COPDWindow(QWidget *parent = 0);
	~COPDWindow();

private slots:
	void on_actionExit_triggered();

private:
	Ui::COPDWindow ui;
};

#endif // COPDWINDOW_H
