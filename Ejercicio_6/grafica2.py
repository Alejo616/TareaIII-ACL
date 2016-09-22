import matplotlib.pylab as plt
import numpy as np

x,y=np.loadtxt("datos-salida-2colum.txt",unpack=True,usecols=(1,0))
plt.figure()
plt.scatter(x,y)
plt.xlabel('x')
plt.ylabel('f(x)')
plt.show() 
