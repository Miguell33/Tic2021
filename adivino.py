# -*- coding: cp1252 -*-
'''
dime un numero al azar entre 1 y 10 y lo adivino
'''
import random

def adivino():
    maxn=100
    numero=random.randint(1,maxn)
    intento=input("intentalo: ")
    while intento!=numero:
        if intento>numero:
            print "A donde vas flipao"
        if intento<numero:
              print "Te has quedado corto guapo"
        intento=input("intentalo ")
    print "Ahora has acertado"

adivino()
             
