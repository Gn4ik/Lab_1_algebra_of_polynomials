# Lab_1_algebra_of_polynomials
# Состав группы Одинцов Михаил, Ермилова Дарья, Гнитиенко Кирилл
В рамках данного технического задания предлагается разработать программную систему для выполнения алгебраических операций над полиномами от трех переменных.

# Цель проекта: 
создание программной системы, способной обрабатывать, анализировать и выполнять операции над полиномами от трех переменных с учетом их сложной структуры и разнообразия возможных алгебраических операций.

# Основные задачи системы:
1. Хранение, организация и управление полиномами от трех переменных.
2. Вычисление значений полиномов в заданных точках.
3. Выполнение алгебраических операций над полиномами, включая умножение, деление,сложение и вычитание.
4. Предоставление возможности работы с несколькими таблицами данных для хранения полиномов с использованием различных структур таблиц.

# Предлагаемый план реализации:

1. Реализация операций над отдельным полиномом:
   - Вычисление значения полинома в точке.
   - Умножение полинома на константу.

2. Реализация операций над выражениями полиномов ( полиномы в выражении заменяются их именами):
   - Сложение, вычитание, умножение на константу, умножение полиномов, деление полиномов.
   - Операции должны выполняться в постфиксной форме.

3. Операции над таблицами:
   - Добавление, удаление полинома из всех таблиц одновременно.
   - Поиск полинома в активной таблице в процессе вычисления выражений.
   - Вывод активной таблицы на экран в формате с двумя столбцами: имя полинома и строковое представление полинома.

4. Общие действия:
   - Разработать интерфейс пользователя для взаимодействия с программой (ввод данных, выбор операций).
   - Реализовать функции для обработки введенных данных и выполнения операций с полиномами.
   - Реализовать проверку на уникальность имен данных ( на то что данные введенные пользователем уже не находятся в таблице)

# Ожидаемые результаты проекта:
- Разработка структур данных для хранения полиномов и их мономов.
- Реализация алгоритмов операций над полиномами, включая алгебраические операции и операции с таблицами.
- Создание пользовательского интерфейса для удобного взаимодействия пользователя с программой.
- Проведение тестирования системы для проверки функциональности и корректности выполнения операций.

# Общая структура проекта:
тут будут директории

# Ограничения:
- Степень монома не превосходит 10.


# Используемые инструменты:
- Программа будет написана на языке С++ с использованием Visual Studio
- Система контроля версий Git.
- Фреймворк для написания автоматических тестов Google Tests.
  
# Модель

## Объекты:
1 Полином
- Полином - список, хранящий сумму мономов.
- Моном - единица полинома, состоящая из произведения константы и переменных, возведенных в соответствующие степени.

2 Таблицы, хранящие полиномы, а также ключи доступа - имена мономов
- Таблица это набор записей, состоящих из полей, одно из которых является ключом, а остальные образуют тело записи.
- Таблица будет состоять из двух столбцов: в первом столбце будут содержаться ключи, с помощью которых можно будет найти нужный полином, хранящийся во втором столбце.
Каждый полином имеет уникальный ключ

## Вспомагательные объекты

# Стек 
-Структура данных, в которой мы можем работать (добавлять и удалять) только первый элемент

# Очередь
-Структура хранения, в которой элементы хранятся в виде звеньев
-Звенья представляют собой сам элемент и ссылку на следующий

## Алгоритмы:
1 Разбор и сохранение введенной пользователем строки в полином
- Строка разбивается на мономы и сохраняется в виде списка;
- Моном можно сохранить в виде структуры из 4 полей: коэффициент, степени x, y, z.
  
2 Добавление имени полиному и сохранение его во все таблицы.
- Полиному будет присваиваться уникальное имя, задаваемое пользователем, с помощью которого его будет возможно найти в таблице;
- Уникальность имени будет проверяться с помощью прохождения по всем ключам в таблице;
  
3 Поиск полинома в активной таблице
- Поиск полинома будет происходить в процессе вычисления выражений, составленных из имен полиномов: по соответствующим ключам будут найдены полиномы, их строковое представление будет передано на вычисление выражения.
  
4 Удаление полинома из всех таблиц
- По заданному имени производится поиск полинома в таблицах, выполняется удаление, происходит перепаковка таблицы.
  
5 Операции над выражениями из полиномов
- Выполняются, используя постфиксную форму, т. е. будет реализован стек, в который будут сохраняться операторы и операнды выражения.
- Если операнд представлен в виде имени полинома, то будет произведен поиск в таблице и вычисление продолжится. Если операндом будет необъявленный объект, то вычисление отменится, с указанием на несуществующее имя.
- При успешном вычислении выражения формируется новый полином, его результат и имя сохраняются во все таблицы.



