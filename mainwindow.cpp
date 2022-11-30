#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "assert.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


int MainWindow::test() {

}

void MainWindow::on_pushButton_2_clicked()
{
    manager.add(deadline(ui->dateTimeEdit->date(), ui->line_for_name->text().toStdString(), ui->line_for_description->text().toStdString()));
    QPushButton *button = new QPushButton(
                QString::fromStdString(manager.get_dedlines()[manager.get_dedlines().size() - 1].get_name())
            );
    current_deadlines.append(button);
    ui->verticalLayout->addWidget(current_deadlines[current_deadlines.size() - 1]);
}

void MainWindow::on_EmailButton_clicked()
{
//    assert(ui->lineEdit->text().size() > 0);

    manager.init_mail(ui->lineEdit->text().toStdString());
    ui->lineEdit->setText("");
}

void MainWindow::on_button_for_delete_clicked()
{
    std::string name = ui->line_for_delete->text().toStdString();
    for(size_t i = 0; i < current_deadlines.size(); i++) {
        if (current_deadlines[i]->text().toStdString() == name) {
            delete(current_deadlines[i]);
            current_deadlines.erase(std::next(current_deadlines.begin(), i));
            break;
        }
    }
    manager.delete_deadline(name);
}
