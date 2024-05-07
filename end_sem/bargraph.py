import pandas as pd
from matplotlib import pyplot as plt
x = [150,200,100,300]
positions = range(len(x))
c=['m','b','y','g']
plt.bar(positions,x,width = 0.5,color=c)
plt.show()