#ifndef DEADLINE_H
#define DEADLINE_H

#include <QDate>

class deadline
{
public:
    deadline(QDate date, std::string name, std::string description);
    std::string get_name();
    std::string get_description();
    void set_description(std::string new_description);
    void set_creation_date(QDate date);
    QDate get_creation_date();
    QDate get_date();
private:
    QDate creation_date;
    QDate date;
    std::string name;
    std::string description;
};

#endif // DEADLINE_H
