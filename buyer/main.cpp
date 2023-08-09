// Класс Покупатель: Фамилия, Имя, Отчество, Адрес, Номер кредитной карточки, Номер банковского счета;
// Конструктор; Методы: установка значений атрибутов, получение значений атрибутов, вывод информации.
// Создать массив объектов данного класса. Вывести список покупателей в алфавитном порядке и список покупателей,
// у которых номер кредитной карточки находится в заданном диапазоне.
#include "buyer.h"

int main()
{
    vector <Buyer> vec
    {
        Buyer("Ivanov", "Ivan", "Ivanovic", "Pushkina 1 kv 1", 1212, 2121),
        Buyer("Bvanov", "Ivan", "Ivanovic", "Pushkina 1 kv 1", 1212, 2121),
        Buyer("Alexee", "Alex", "Alexeevic", "Pushkina 1 kv 1", 1212, 2121),
        Buyer("Vladim", "Vladimir", "Vladimirovic", "Pushkina 1 kv 1", 1212, 2121),
        Buyer("Cvanov", "Ivan", "Ivanovic", "Pushkina 1 kv 1", 1212, 2121)
    };

    Buyers buyers(vec);
    cout << "Алфавитный порядок" << endl;
    buyers.sortBuyers();
    buyers.out();
    buyers.selectedOut();
    return 0;
}
