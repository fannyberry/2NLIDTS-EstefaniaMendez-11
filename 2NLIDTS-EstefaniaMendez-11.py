def suma_recursiva(n):
    if n <= 9:
        return n
    return suma_recursiva(n // 10) + n % 10


def suma_iterativa(n):
    suma = 0
    while n > 9:
        suma += n % 10
        n //= 10
    return suma + n


cantidad = int(input("¿Cuantos númers va a insertar? "))

for i in range(1, cantidad + 1):
    n = int(input(f"Número {i}: "))
    print("suma recursiva:", suma_recursiva(n))
    print("suma iterativa:", suma_iterativa(n))