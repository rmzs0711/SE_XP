#include "deadline_manager.h"

deadline_manager::deadline_manager()
{

}

void deadline_manager::add(deadline deadline) {
    deadlines.push_back(deadline);
}

std::vector<deadline> deadline_manager::get_deadlines() {
    return this->deadlines;
}

void deadline_manager::init_mail(std::string mail) {
    this->mail = mail;
}
void deadline_manager::delete_deadline(std::string name) {
    for(size_t i = 0; i < deadlines.size(); i++) {
        if (deadlines[i].get_name() == name) {
            deadlines.erase(std::next(deadlines.begin(), i));
            break;
        }
    }
}
