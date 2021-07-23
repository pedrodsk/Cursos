# -*- coding: utf-8 -*-
"""
Created on Sun Jul 11 19:20:55 2021

@author: Pedro
"""

import numpy as np

def sigmoid(soma):
    return 1/(1+np.exp(-soma))

def sigmoidDerivada(sig): #passar o valor da função sigmoid
    return sig*(1-sig)

entradas = np.array([ [0,0],[0,1],[1,0],[1,1] ])
saidas = np.array([ [0],[1],[1],[0] ])

pesos0 = np.array([ [-12.950,-1.031,-5.765],[5.766,-1.031,-12.944] ])

pesos1 = np.array([ [14.480],[-37.584],[14.479] ])

epocas = 10000
taxaAprendizagem = 0.3
momento = 1

for j in range(epocas):
    camadaEntrada = entradas
    somaSinapse0 = np.dot(camadaEntrada,pesos0)
    camadaOculta = sigmoid(somaSinapse0)
    
    somaSinapse1 = np.dot(camadaOculta,pesos1)
    camadaSaida = sigmoid(somaSinapse1) #resposta final de cada registro
    erroCamadaSaida = saidas - camadaSaida
    mediaAbsoluta = np.mean(np.abs(erroCamadaSaida))
    print("Erro",mediaAbsoluta)
    deltaSaida = erroCamadaSaida * sigmoidDerivada(camadaSaida)
    
    deltaCamadaOculta = deltaSaida.dot(pesos1.T) * sigmoidDerivada(camadaOculta)
    
    pesosNovo1 = camadaOculta.T.dot(deltaSaida)
    pesos1= (pesos1*momento)+(pesosNovo1*taxaAprendizagem)
    
    pesosNovo0 = camadaEntrada.T.dot(deltaCamadaOculta)
    pesos0 = (pesos0*momento) + (pesosNovo0*taxaAprendizagem)
