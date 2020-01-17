hora = input("Hora: ")

entera = int(hora)
decimal = abs(hora) - abs(int(hora))

hours = entera
minut = decimal * 60

mins = int(minut)
sec = abs(minut) - abs(int(minut))

seca = sec * 60
secs = round(seca, 0)
secsi = int(secs)
if (secsi != 0) and (mins != 0):
    print(str(hours) + " horas " + str(mins) + " minutos y " + str(secsi) + " segundos")
if (secsi == 0) and (mins != 0):
    print(str(hours) + " horas " + str(mins) + " minutos")
if (secsi != 0) and (mins == 0):
    print(str(hours) + " horas y " + str(secsi) + " segundos")
if (secsi == 0) and (mins == 0):
    print(str(hours) + " horas")
