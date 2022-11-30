#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QPushButton>
#include <QMainWindow>
#include <deadline_manager.h>
#include <QVBoxLayout>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int test();
private:
    deadline_manager manager = deadline_manager();
    QVector<QPushButton*> current_deadlines = QVector<QPushButton*>();
    QVBoxLayout *layout_for_deadlines;

private slots:
    void on_pushButton_2_clicked();

    void on_EmailButton_clicked();
    void on_button_for_delete_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
