#include "dedline.h"

dedline::dedline(QDate date, std::string name, std::string description)
{
    this->date = date;
    this->name = name;
    this->description = description;
}

std::string dedline::get_name() {
    return this->name;
}
