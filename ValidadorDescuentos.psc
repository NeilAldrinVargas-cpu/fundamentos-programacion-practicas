Algoritmo ValidadorDescuentos
    Definir precio_base, monto_final Como Real
    Definir es_vip Como Caracter
    
    Escribir "Ingrese el precio original del producto:"
    Leer precio_base
    Escribir "¿El cliente es VIP? (SI/NO):"
    Leer es_vip
    
    Si es_vip == "SI" Entonces
        monto_final <- precio_base - (precio_base * 0.15)
        Escribir "¡Cliente VIP detectado! Se aplica 15% de descuento."
    Sino
        monto_final <- precio_base
        Escribir "Cliente regular. No aplica descuento."
    FinSi
    
    Escribir "El monto final a pagar es: ", monto_final, " Bs"
FinAlgoritmo