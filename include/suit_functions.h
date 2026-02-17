#ifndef SUIT_FUNCTIONS_H
#define SUIT_FUNCTIONS_H

// определяем каждое состояние через битовые сдвиги
const int invisible = 1 << 0; // невидимость
const int silence = 1 << 1; // беззвучие
const int ir_suppression = 1 << 2; // подавление волн инфракрасного спектра
const int radio_suppression = 1 << 3; // подавление радиоволн
const int power_saving = 1 << 4; // энергосберегательный режим

// функция для изменения состояния на противоположное
void toggle_state(int& suit_state, int state_number);

// функция для проверки активности состояния
bool is_state_active(int suit_state, int state_number);

// функция для подсчета активных состояний
int count_state_active(int suit_state);

// функция обнаружения
bool is_detected(int suit_state);

#endif