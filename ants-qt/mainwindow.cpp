#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    game(new GameWidget(this))
{
    ui->setupUi(this);
    connect(ui->btn_start, SIGNAL(clicked()), game,SLOT(startGame()));
    game->setFixedHeight(1000);
    game->setFixedWidth(1000);
    ui->gameLayout->addWidget(game);
    ui->scrollAreaWidgetContents->setLayout(ui->gameLayout);
}

MainWindow::~MainWindow()
{
    delete ui;
}
