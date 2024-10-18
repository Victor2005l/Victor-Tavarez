#include <stdio.h>

int main() {
    // Variables
    float consumoLitrosPor100Km = 10.0; // Consumo en litros cada 100 km
    float distancia; // Distancia recorrida en km
    float costoPorGalon; // Costo por galón de gasolina
    float litrosConsumidos, galonesConsumidos, costoTotal;
    const float litrosPorGalon = 3.785; // 1 galón = 3.785 litros

    // Pedir al usuario la distancia y el costo por galón
    printf("Ingrese la distancia recorrida en kilometros: ");
    scanf("%f", &distancia);

    printf("Ingrese el costo por galon de gasolina: ");
    scanf("%f", &costoPorGalon);

    // Calcular los litros consumidos
    litrosConsumidos = (consumoLitrosPor100Km / 100) * distancia;
    printf("Litros consumidos: %.2f litros\n", litrosConsumidos);

    // Convertir los litros a galones
    galonesConsumidos = litrosConsumidos / litrosPorGalon;
    printf("Galones consumidos: %.2f galones\n", galonesConsumidos);

    // Calcular el costo total de la gasolina
    costoTotal = galonesConsumidos * costoPorGalon;
    printf("Costo total de la gasolina: %.2f\n", costoTotal);

    return 0;
}
