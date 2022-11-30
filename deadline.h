#ifndef DEADLINE_H
#define DEADLINE_H

#include <QDate>

class deadline
{
public:
    deadline(QDate date, std::string name, std::string description);
    std::string get_name();
private:
    QDate date;
    std::string name;
    std::string description;
};

#endif // DEADLINE_H
