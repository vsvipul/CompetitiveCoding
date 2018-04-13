def next_power_of_2(x):  
    return 1 if x == 0 else 2**(x - 1).bit_length()
    
a=int(input(),2)
b=next_power_of_2(a)
c=b-a
print(bin(b)[2:],' ',bin(c)[2:])
