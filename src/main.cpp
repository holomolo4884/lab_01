#include "suit_functions.h"

int main(){
    int suit_state = 0; // начальное состояние костюма

    // включаем необходимые системы для миссии
    toggle_state(suit_state, 1); // включаем невидимость
    toggle_state(suit_state, 2); // включаем беззвучие
    toggle_state(suit_state, 3); // включаем подавление ИК
    toggle_state(suit_state, 4); // включаем подавление радио

    bool detected = is_detected(suit_state); // проверка обнаружения

    bool invisible_active = is_state_active(suit_state, 1); // проверка активности невидимости
    bool silence_active = is_state_active(suit_state, 2); // проверка активности беззвучия

    int active_states = count_state_active(suit_state); // подсчет активных состояний

    if (active_states > 3){
        toggle_state(suit_state, 5); // включаем энергосбережение
    }

    detected = is_detected(suit_state); // проверка обнаружения

    return 0;
}
