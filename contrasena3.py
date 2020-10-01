'''Escribe un programa'''
def contrasena():
    nombre=raw_input("Introduce el nombre: ")
    apellido=raw_input("Intrduce el apellido: ")
    print nombre," ",apellido," eres el impostor?"
    print "Las tres letras iniciales ",nombre[0:3]
    
contrasena()
