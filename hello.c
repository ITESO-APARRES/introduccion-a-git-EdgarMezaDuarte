/*
    Archivo Hello.c que usamos para nuestro 
    ejercicio de git basico
    Vuelvo a hacer el ejercicio Paso 2
*/
#include <studio.h>

int main(void){
    decirHola("Juan");
    return 0;
}

void decirHola(char* nombre){
    printf("Hola %s, ¿como estas?", nombre);
}
