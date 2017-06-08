#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(showText()));
	QObject::connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->lcdNumber, SLOT(display(int)));
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::showText()
{
	ui->label->setText("Пальцами не тыкать!");
}
