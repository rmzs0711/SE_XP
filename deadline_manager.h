#ifndef DEDLINE_MANAGER_H
#define DEDLINE_MANAGER_H

#include <deadline.h>
#include <vector>


class deadline_manager
{
public:
    deadline_manager();
    void add(deadline deadline);
    std::vector<deadline> get_deadlines();
    std::vector<deadline> get_missed_deadlines();
    void init_mail(std::string);
    void delete_deadline(std::string name);
    void refresh(QDate date);
private:
std::vector<deadline> deadlines;
std::vector<deadline> missed_deadlines;
std::string mail;
};

#endif // DEDLINE_MANAGER_H
