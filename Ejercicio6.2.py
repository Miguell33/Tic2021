'''
Defina una funci�n que reciba
2 n�meros enteros y una letra que representa una de las siguientes
operaciones:
S de suma,
R de resta,
M multiplicacio�n y
D divisi�n
La funci�n muestra por pantalla la operaci�n propuesta
y su resultado.
'''

def menu():
    interruptura=1
    print "Introduce dos numeros enteros:"
    numero1=input("numero1= ")
    while(interruptura==1):
        numero2=input("numero2= ")
        print "***************************************"
        print "*               MENU                  *"
        print "***************************************"
        print "1. SUMA"
        print "2. RESTA"
        print "3. MULTIPLICACION"
        print "4. DIVISION"
        opcion=input("Teclee la opcion elegida")
        if(opcion==1):
            resultado=numero1+numero2
            interruptura=0
        if(opcion==2):
            resultado=numero1-numero2
            interruptura=0
        if(opcion==3):
            resultado=numero1*numero2
            interruptura=0
        if(opcion==4):
            if(numero2<>0):
                resultado=numero1/numero2
                interruptura=0
            else:
                interruptura=1
                print "Has intentado dividir entre 0"
                print "Introduce un nuevo numero"
    print "El resultado es ", resultado

menu()
