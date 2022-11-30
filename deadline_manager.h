#ifndef DEDLINE_MANAGER_H
#define DEDLINE_MANAGER_H

#include <deadline.h>
#include <vector>


class deadline_manager
{
public:
    deadline_manager();
    void add(deadline deadline);
    std::vector<deadline> get_dedlines();
    void init_mail(std::string);
    void delete_deadline(std::string name);
private:
std::vector<deadline> deadlines;
std::string mail;
};

#endif // DEDLINE_MANAGER_H
