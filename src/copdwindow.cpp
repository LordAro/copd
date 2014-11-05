#include "copdwindow.h"
#include "ui_copdwindow.h"

COPDWindow::COPDWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->ui.setupUi(this);
}

COPDWindow::~COPDWindow()
{
}
