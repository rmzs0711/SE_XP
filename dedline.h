#ifndef DEDLINE_H
#define DEDLINE_H

#include <QDate>

class dedline
{
public:
    dedline(QDate date, std::string name, std::string description);
    std::string get_name();
private:
    QDate date;
    std::string name;
    std::string description;
};

#endif // DEDLINE_H
