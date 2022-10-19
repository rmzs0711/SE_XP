#include "dedline_manager.h"

dedline_manager::dedline_manager()
{

}

void dedline_manager::add(dedline deadline) {
    deadlines.push_back(deadline);
}

std::vector<dedline> dedline_manager::get_dedlines() {
    return this->deadlines;
}

void dedline_manager::init_mail(std::string mail) {
    this->mail = mail;
}
void dedline_manager::delete_deadline(std::string name) {
    for(size_t i = 0; i < deadlines.size(); i++) {
        if (deadlines[i].get_name() == name) {
            deadlines.erase(std::next(deadlines.begin(), i));
            break;
        }
    }
}
