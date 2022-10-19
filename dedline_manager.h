#ifndef DEDLINE_MANAGER_H
#define DEDLINE_MANAGER_H

#include <dedline.h>
#include <vector>


class dedline_manager
{
public:
    dedline_manager();
    void add(dedline deadline);
    std::vector<dedline> get_dedlines();
    void init_mail(std::string);
    void delete_deadline(std::string name);
private:
std::vector<dedline> deadlines;
std::string mail;
};

#endif // DEDLINE_MANAGER_H
