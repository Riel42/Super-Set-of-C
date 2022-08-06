#include <iostream>

using namespace std;

int main(){
    const float PI = 3.14159;
    float area, raio;

    scanf("%f",&raio);

    area = PI*raio*raio;

    printf("A=%.4f\n",area);
}
