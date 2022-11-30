#include "test_engine.h"
#include "deadline_manager.h"
#include "deadline.h"
#include "QDate"

test_engine::test_engine()
{

}

void test_engine::test1() {
    QDate date = QDate(2022, 12, 21);
    std::string name = "Random deadline";
    std::string description = "Сделать дз по se";
    deadline test_deadline = deadline(date, name, description);
    assert(test_deadline.get_name() == name);
}

void test_engine::test2() {
    deadline_manager test_manager = deadline_manager();
    QDate date = QDate(2022, 12, 21);
    std::string name = "Random deadline";
    std::string description = "Сделать дз по se";
    deadline test_deadline = deadline(date, name, description);
    test_manager.add(test_deadline);
    assert(test_manager.get_deadlines().size() == 1);
}

void test_engine::test3() {
    deadline_manager test_manager = deadline_manager();
    std::string mail = "5661685.a@mail.com";
    test_manager.init_mail(mail);
}

void test_engine::test4() {
    deadline_manager test_manager = deadline_manager();
    QDate date = QDate(2022, 12, 21);
    std::string name = "Random deadline";
    std::string description = "Сделать дз по se";
    deadline test_deadline = deadline(date, name, description);
    test_manager.delete_deadline(test_deadline.get_name());
    assert(test_manager.get_deadlines().empty());
}
