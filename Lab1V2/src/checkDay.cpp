#include "../include/checkDay.h"
#include <cstdlib>

bool checkDay(string day, int num) {
    if (day == "Понедельник" && num == 12) {
        return true;
    } else if (day == "Вторник" && num > 95) {
        return true;
    } else if (day == "Среда" && num == 34) {
        return true;
    } else if (day == "Четверг" && num == 0) {
        return true;
    } else if (day == "Пятница" && (abs(num) % 2 == 0)) {
        return true;
    } else if (day == "Суббота" && num == 56) {
        return true;
    } else if (day == "Воскресенье" && abs(num) == 666) {
        return true;
    }        
    
    return false;
}
