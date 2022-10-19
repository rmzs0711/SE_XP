#include "test_engine.h"
#include "dedline_manager.h"
#include "dedline.h"
#include "QDate"

test_engine::test_engine()
{

}

void test_engine::test1() {
    QDate date = QDate(2022, 12, 21);
    std::string name = "Random deadline";
    std::string description = "Сделать дз по se";
    dedline test_dedline = dedline(date, name, description);
    assert(test_dedline.get_name() == name);
}

void test_engine::test2() {
    dedline_manager test_manager = dedline_manager();
    QDate date = QDate(2022, 12, 21);
    std::string name = "Random deadline";
    std::string description = "Сделать дз по se";
    dedline test_dedline = dedline(date, name, description);
    test_manager.add(test_dedline);
    assert(test_manager.get_dedlines().size() == 1);
}

void test_engine::test3() {
    dedline_manager test_manager = dedline_manager();
    std::string mail = "5661685.a@mail.com";
    test_manager.init_mail(mail);
}

void test_engine::test4() {
    dedline_manager test_manager = dedline_manager();
    QDate date = QDate(2022, 12, 21);
    std::string name = "Random deadline";
    std::string description = "Сделать дз по se";
    dedline test_dedline = dedline(date, name, description);
    test_manager.delete_deadline(test_dedline.get_name());
    assert(test_manager.get_dedlines().empty());
}
