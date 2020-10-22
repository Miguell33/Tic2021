'''
1. Escriba una funcion llamada "multiplicacion"
que reciba como argumento cuatro numeros reales
distintos de cero y que devuelva su producto
'''

def multiplicacion():
    acumuladora=1
    print("Indroduce un numero: ")
    for cont in range(1,5):
        print "NUMERO ",cont,":" 
        numero=input()
        acumuladora=acumuladora*numero
    print "PRODUCTO= ",acumuladora

multiplicacion()
    
    
