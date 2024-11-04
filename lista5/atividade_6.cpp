#include <stdio.h>

void converter_tempo(int segundos, int *horas, int *minutos, int *segundos_restantes) {
    *horas = segundos / 3600; // 1 hora = 3600 segundos
    *minutos = (segundos % 3600) / 60; // 1 minuto = 60 segundos
    *segundos_restantes = segundos % 60; // segundos restantes
}

int main() {
    int segundos;
    int horas, minutos, segundos_restantes;

    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    converter_tempo(segundos, &horas, &minutos, &segundos_restantes);

    printf("Resultado: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos_restantes);

    return 0;
}
