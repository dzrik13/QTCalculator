#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

namespace Custom
{
    enum Operation
    {
        ADD,
        SUBTRACT,
        MULTIPLY,
        DIVIDE
    };
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_18_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::MainWindow *ui;
    Custom::Operation math;
    float answer = -1;
    float num1;
    float num2;
};
#endif // MAINWINDOW_H
