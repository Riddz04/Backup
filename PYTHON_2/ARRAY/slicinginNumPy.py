import numpy as np

# Create a 2D NumPy array
arr = np.array([[1, 2, 3],
                [4, 5, 6],
                [7, 8, 9]])

# Create an nditer object to iterate over the array
it = np.nditer(arr, flags=['multi_index'])

# Iterate over the array and square each element
while not it.finished:
    idx = it.multi_index
    arr[idx] = arr[idx] ** 2
    it.iternext()

print("Squared array:")
print(arr)
