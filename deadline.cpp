#include "deadline.h"

deadline::deadline(QDate date, std::string name, std::string description)
{
    this->date = date;
    this->name = name;
    this->description = description;
}

std::string deadline::get_name() {
    return this->name;
}

QDate deadline::get_date() {
    return this->date;
}
