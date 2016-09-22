import matplotlib.pylab as plt
import numpy as np

x,y=np.loadtxt("masa_relativista.txt",unpack=True,usecols=(1,2))
plt.figure()
plt.scatter(x,y)
plt.xlabel('v/c')
plt.ylabel('Masa (kg)')
plt.show() 
 
