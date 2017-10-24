#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_comboBox_highlighted(const QString &arg1);

    void on_comboBox_currentIndexChanged(int index);

    void on_subject_currentIndexChanged(int index);

    void on_pushButton_clicked();

    void on_add_clicked();

    void on_commit_clicked();

    void on_commit_2_clicked();

    void on_push_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
