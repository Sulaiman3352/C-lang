#include <stdio.h>


int Solver(float radius1, float radius2)   
{

    float area1, area2, ring_area;

    // Вычислите площади окружностей
    area1 = 3.14159 * radius1 * radius1;
    area2 = 3.14159 * radius2 * radius2;

   // Вычислите площадь кольца
    ring_area = area1 - area2;


    return ring_area; 
};

int main() {
      
    float radius1, radius2;

    // Введите радиусы кругов
    printf("Введите радиус большего круга: ");
    scanf("%f", &radius1);
    printf("радиус большего круга = %0.2f\n", radius1);

    printf("Введите радиус меньшего круга: ");
    scanf("%f", &radius2);
    printf("радиус меньшего круга = %0.2f\n", radius2);


    float result;

    result = Solver(radius1,radius2);
   
    // Выведите результат
    printf("Площадь кольца, образованного окружностями, равна: %.2f\n", result);

    return 0;
}

