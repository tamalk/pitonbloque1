n = input()
a = 0
suma = 0
while a <= n:
    suma = suma + (a+1)
    a += 1
    if a == n:
        avg = float(suma)/n
        dec = abs(avg) - abs(int(avg))
        if dec == 0:
            print(int(avg))
        else:
            print(avg)
