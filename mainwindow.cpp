#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_pushButton_2_clicked()
{
    manager.add(deadline(ui->dateTimeEdit->date(), ui->line_for_name->text().toStdString(), ui->line_for_description->text().toStdString()));
    QPushButton *button = new QPushButton(
                QString::fromStdString(manager.get_deadlines()[manager.get_deadlines().size() - 1].get_name())
            );
    current_deadlines.append(button);
    ui->verticalLayout->addWidget(current_deadlines[current_deadlines.size() - 1]);
}

void MainWindow::on_EmailButton_clicked()
{
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

void MainWindow::on_Button_for_change_description_clicked()
{
    std::string name = ui->name_of_changed_deadline->text().toStdString();
    for(size_t i = 0; i < current_deadlines.size(); i++) {
        if (current_deadlines[i]->text().toStdString() == name) {
            manager.get_deadlines()[i].set_description(ui->for_new_description->text().toStdString());
            break;
        }
    }
    manager.delete_deadline(name);
}
