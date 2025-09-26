#include "./include/checkDay.h"

int main() {
    std::string day;
    int num;

    std::cout << "Введите день недели (Первая буква заглавная)\n";
    std::cin >> day;
    std::cout << "Введите проверяемое число\n";
    std::cin >> num;

    const bool result = checkDay(day, num);

   std::cout << result << "\n";
}