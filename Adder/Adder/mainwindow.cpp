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
         if(course==1) {freopen("Chinese.html","a",stdout);ssub="语文"; }
    else if(course==2) {freopen("Maths.html","a",stdout);ssub="数学"; }
    else if(course==3) {freopen("English.html","a",stdout);ssub="英语"; }
    else if(course==4) {freopen("Chemistry.html","a",stdout);ssub="化学"; }
    else if(course==5) {freopen("History.html","a",stdout);ssub="历史"; }
}

void MainWindow::on_subject_currentIndexChanged(int index)
{
    open(index);
}
