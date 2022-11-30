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

std::string deadline::get_description() {
    return this->description;
}

void deadline::set_description(std::string new_description) {
    this->description = new_description;
}

QDate deadline::get_date() {
    return this->date;
}
