num = input("Introduzca n: ")
i = 1
ni = 2
suma = 0
acc = 0
while i <= num:
    suma += ni
    acc += suma
    i += 1
print("Suma: " + str(acc))
