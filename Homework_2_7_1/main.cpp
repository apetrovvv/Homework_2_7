#include <iostream>

#define MODE 0

#if !defined MODE
#error MODE is not defined!
#endif
#if (MODE == 1)
void add(int x, int y){
    std::cout << "Результат сложения: " << x+y << std::endl;
}
#endif

int main(){
    #if (MODE == 0)
        std::cout << "Работаю в режиме тренировки" <<std::endl;
    #elif (MODE == 1)
        std::cout << "Работаю в боевом режиме" <<std::endl;
        int x=0, y=0;
        std::cout << "Введите число 1: ";
        std::cin >> x;
        std::cout << "Введите число 2: ";
        std::cin >> y;
        add(x, y);
    #else
        std::cout << "Неизвестный режим. Завершение работы" <<std::endl;
    #endif
}

