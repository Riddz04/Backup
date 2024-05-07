import numpy as np
arr = np.array([1,2,3,2,2,3,0])
result = np.bincount(arr)
print(result)
