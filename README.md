# SE_XP

Имеется класс deadline для создания дедлайнов. В нём имеется дата, название и описание. Если хотите добавить свой вид дедлайнов
то необходимо отнаследоваться от этого класса.

Имеется класс deadline_manager для хранения и взаимодействия с дедлайнами, а также в нём хранится почта пользователя.
Имеется вектор дедлайнов и функция для добавления и удаления дедлайнов.

Для тестирования был создан класс test_engine для тестирования всех функций в выше описанных классах.

Логика всех взаимодействий с пользователем происходит через класс mainwindow. Тут же описан весь графический интерфейс.

Рефакторинг:

Изменили названия переменных на более читаемые и исправили грамматические ошибки.

Изменили менеджмент времени дедлайнов, теперь определение статуса дедлайнов происходит по 
запросу refresh у менеджера дедлайнов. Исправили UB в удалении элемента из актуальных дедлайнов 
и добавлении его в пропущенные

Добавили интерфейс для изменения информации о существующих дедлайнах, их описании и дате создания

Удалили функции, которые исчерпали свою актуальность из-за продолжения развития продукта

К каждому изменению мы добавляли и прогоняли тесты