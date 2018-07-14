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
    void on_b1_clicked();

    void on_b2_clicked();

    void on_b3_clicked();

    void on_b4_clicked();

    void on_b5_clicked();

    void on_b6_clicked();

    void on_b7_clicked();

    void on_b8_clicked();

    void on_b9_clicked();

    void on_point_clicked();

    void on_b0_clicked();

    void on_add_clicked();

    void on_sub_clicked();

    void on_mul_clicked();

    void on_div_clicked();

    void on_equal_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
