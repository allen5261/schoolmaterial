#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <cstdio>

QString sub,ssub,path,path_ANSI,ppt,ssub_ANSI;
double s=0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void open(int course){
    if(course==1){freopen("Chinese.html","a",stdout);ssub="语文"; }
}

void MainWindow::on_subject_currentIndexChanged(int index)
{
    open(index);
}
