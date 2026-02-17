#include "suit_functions.h"

const int State_Mask[] = {
    invisible,
    silence,
    ir_suppression,
    radio_suppression,
    power_saving
};

// функция для изменения состояния на противоположное
void toggle_state(int& suit_state, int state_number){
    if (state_number >= 1 && state_number <= 5){
        suit_state ^= (1 << state_number); // XOR инвертриует бит
    }
}
// функция для проверки активности состояния
bool is_state_active(int suit_state, int state_number){
    if (state_number >= 1 && state_number <= 5){
        if (suit_state & (1 << state_number)){ // проверка на включение состояния
            return true;
        }
    }
    return false;
}

// функция для подсчета количества активных состояний
int count_state_active(int suit_state){
    int count = 0;

    // проверяем каждое состояние
    if (suit_state & invisible) count++;
    if (suit_state & silence) count++;
    if (suit_state & ir_suppression) count++;
    if (suit_state & radio_suppression) count++;
    if (suit_state & power_saving) count++;
    
    return count;
}

// функция обнаружения
bool is_detected(int suit_state){
    if (!(suit_state & invisible) && !(suit_state & power_saving)){
        return true;
    }
    if (!(suit_state & silence) && (suit_state & radio_suppression)){
        return true;
    }
    return false;
}