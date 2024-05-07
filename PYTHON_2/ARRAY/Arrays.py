from array import * 
vals = array('i',[1,2,3,4,5])
for i in range(5):
    print(vals[i])
newArr = array(vals.typecode,(a*a for a in vals))#this is for copying an array in a new one