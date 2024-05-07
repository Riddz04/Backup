import pandas as pd
from matplotlib import pyplot as plt
x =[1,2,3]
y =[4,9,6]
z =[10,5,13]
plt.plot(x,y)
plt.plot(x,z)
plt.title("test graph")
plt.xlabel("x")
plt.ylabel("y and z")
plt.legend(['this is y','thix is z'])
plt.show()