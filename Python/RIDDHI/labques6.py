number = [10,11,12,13,14,15,16,17,18,19,20]
is_even = list(filter(lambda x : x%2==0,number))
is_square = list(map(lambda y : y**2,is_even))
pairs = zip(is_even,is_square)
print(pairs)