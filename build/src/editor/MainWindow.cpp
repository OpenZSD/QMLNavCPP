#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_selectionBar = new ToolSelectionBar(ui->selectionBox);
    ui->selectionBoxLayout->addWidget(m_selectionBar);

    connect(ui->minMaxToolBarBtn, SIGNAL(clicked(bool)), this, SLOT(toggleSideBar(void)));

    m_selector = new ToolSelector(ui->workAreaBox);
    ui->workAreaBoxLayout->addWidget(m_selector);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::toggleSideBar()
{
    if(ui->selectionBox->isVisible())
    {
        ui->selectionBox->hide();
        ui->minMaxToolBarBtn->setText("<<");
    }
    else
    {
        ui->selectionBox->show();
        ui->minMaxToolBarBtn->setText(">>");
    }
}
