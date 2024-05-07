from numpy import *
arr1 = array([1,2,3,4,5])
#arr2 = arr1.view() #this creates a diff address for a new array consisting of sae var #shallow copy
arr2 = arr1.copy()#this is deep copy
arr1[1] = 7
print(arr1)
print(arr2)
print(id(arr1))
print(id(arr2))