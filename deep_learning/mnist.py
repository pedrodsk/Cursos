import matplotlib.pyplot as plt
from keras.datasets import mnist
from keras.layers import Dense, Flatten
from keras.utils import np_utils
from keras.layers import Conv2D, MaxPooling2D

(X_treinamento, y_treinamento), (X_teste, y_teste) = mnist.load_data()

plt.imshow(X_treinamento[4])
plt.show()