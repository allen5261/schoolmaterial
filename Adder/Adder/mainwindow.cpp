#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include<cmath>
#include<iomanip>
#include<string>
#include <sstream>
#include <locale>
#include <windows.h>
#include <assert.h>
#include<cstdio>
#include "windows.h"

std::string sub,ssub,path,path_ANSI,ppt,ssub_ANSI;
std::string cmdpath="schoolmaterial";
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
         if(course==1) {freopen("D:\\schoolmaterial\\Chinese.html","a",stdout);ssub="语文"; }
    else if(course==2) {freopen("D:\\schoolmaterial\\Maths.html","a",stdout);ssub="数学"; }
    else if(course==3) {freopen("D:\\schoolmaterial\\English.html","a",stdout);ssub="英语"; }
    else if(course==4) {freopen("D:\\schoolmaterial\\Chemistry.html","a",stdout);ssub="化学"; }
    else if(course==5) {freopen("D:\\schoolmaterial\\History.html","a",stdout);ssub="历史"; }
}

void MainWindow::on_subject_currentIndexChanged(int index)
{
    open(index);
}
double getFileSize(const char* path)
{
    struct _stat info;
    _stat(path, &info);
    int size = info.st_size;
    return size;
}

double convert(double size)
{
    double result = size;
    result=size / 1048576;
    return result;
}

std::wstring Utf8ToUnicode(const std::string &utf8_str)
{
    int len;
    len = MultiByteToWideChar(CP_UTF8, 0, (LPCSTR)utf8_str.c_str(), -1, NULL,0);
    WCHAR * wszUnicode = new WCHAR[len+1];
    memset(wszUnicode, 0, len * 2 + 2);
    MultiByteToWideChar(CP_UTF8, 0, (LPCSTR)utf8_str.c_str(), -1, wszUnicode, len);
    const std::wstring unicodeWstring(wszUnicode);
    delete wszUnicode;
    return unicodeWstring;
}

std::string WStringToString(const std::wstring &wstr)
{
      std::string str(wstr.length(), ' ');
      std::copy(wstr.begin(), wstr.end(), str.begin());
      return str;
}

void MainWindow::on_add_clicked()
{
    QString pptq=ui->ppt->text();
    ppt=pptq.toStdString();
    path=".\\files\\"+ssub+"\\"+ppt;
    const std::string path_size="D:\\schoolmaterial\\files\\"+ssub+"\\"+ppt;
    std::wstring p_s_u=Utf8ToUnicode(path_size);
    std::string p_s_un=WStringToString(p_s_u);
    const char* path_s_c_Uni=p_s_un.c_str();

    s=convert(getFileSize(path_s_c_Uni));

            std::cout<<"\n\t\t<tr>\n";
            std::cout<<"\t\t<td><font color=\"#FFFFFF\" face=\"source-han-serif-sc\"><span lang=\"zh-cn\">"<<ppt<<"</span></font></td>\n";
            std::cout<<"\t\t<td align=\"right\"><font color=\"#FFFFFF\" face=\"Courier New\">"<<std::fixed<<std::setprecision(2)<<s<<"MB</font></td>\n";
            std::cout<<"\t\t<td align=\"center\" width=\"10\"><font face=\"source-han-serif-sc\" color=\"#FFFFFF\">\n";
            std::cout<<"\t\t<a href=\""<<path<<"\" target=\"_blank\">\n";
            std::cout<<"\t\t<input type=\"button\" value=\"下载\" style=\"float: right\"></a></font></td>\n";
            std::cout<<"\t\t</tr>\n\t\t";
    fclose(stdout);
}

void MainWindow::on_commit_clicked()
{
    system("C:\\msysgit\\msys.bat\ngit add -A\ngit commit -a -m \"Update\"");
}

void MainWindow::on_push_clicked()
{
    system("C:\\msysgit\\msys.bat\ngit push origin master");
}
