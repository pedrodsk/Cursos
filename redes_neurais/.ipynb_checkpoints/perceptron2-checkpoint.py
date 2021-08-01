# -*- coding: utf-8 -*-
"""
Created on Sat Jul  3 19:42:10 2021

@author: Pedro
"""
# =============================================================================
# segundo programa do curso de redes neurais com python. otimizado
# =============================================================================
import numpy as np #biblioteca para usar o dot
#%%
entradas = np.array([1,7,5]) 
pesos = np.array([0.8,0.1,0]) 
#%%
#funcao soma
def soma(e,p):
    return e.dot(p)

s = soma(entradas, pesos)

#funcao step
def stepFunction(soma):
    if(soma >= 1):
        return 1
    return 0

r = stepFunction(s)
