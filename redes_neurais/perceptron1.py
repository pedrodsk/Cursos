# =============================================================================
# primeiro programa do curso de redes neurais com python.
# =============================================================================

entradas = [5,2,1]
pesos = [0.2,0.5,0.1]

def soma(e,p):
    s=0
    for i in range(3):
        #print(entradas[i])
        #print(pesos[i])
        s += e[i]*p[i]
    return s

s = soma(entradas,pesos)

def stepFunction(soma):
    if(soma >= 1):
        return 1
    return 0

r = stepFunction(s)