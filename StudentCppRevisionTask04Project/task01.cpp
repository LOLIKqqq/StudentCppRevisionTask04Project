#include "tasks.h"

/*	Task 01. Desks [рабочие столы]
*
*	В Академии решили набрать три новых группы и оборудовать аудитории для них новыми рабочими столами.
*	За каждым столом может сидеть только два учащихся. Известно количество учащихся в каждой из трёх групп.
*	Высчитайте наименьшее число рабочих столов, которое нужно приобрести для Академии.
*	Каждая группа сидит в своей отдельной аудитории.
*
*	Примечание
*	Попробуйте при решении задания использовать только встроенные операции языка C/C++
*
*	Формат входных данных [input]
*	Функция получает на вход три целых числа - количество учащихся в каждой из трёх групп.
*
*	Формат выходных данных [output]
*	Функция должна возвращать одно целое число (ответ на задачу)
*	или ноль, если пользовательские данные ошибочны.
*
*	[ input 1]: 20 21 22
*	[output 1]: 32
*
*	[ input 2]: 16 18 20
*	[output 2]: 27
*
*	[ input 3]: 19 15 23
*	[output 3]: 30
*
*	[ input 4]: -5 15 23
*	[output 4]: 0
*
*	[ input 5]: 19 0 23
*	[output 5]: 0
*/

int task01(int a, int b, int c) {
    cout << "Enter the number of students in the first group: ";
    cin >> a;

    cout << "Enter the number of students in the second group: ";
    cin >> b;

    cout << "Enter the number of students in the third group: ";
    cin >> c;

    int desksNeededGroup1 = ceil(a / 2.0);
    int desksNeededGroup2 = ceil(b / 2.0);
    int desksNeededGroup3 = ceil(c / 2.0);

    int totalDesksNeeded = desksNeededGroup1 + desksNeededGroup2 + desksNeededGroup3;

    cout << "Minimum number of desktops to be purchased: " << totalDesksNeeded << std::endl;
    return 0;
}
