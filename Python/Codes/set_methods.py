from traceback import print_tb

a = {1,2,3,4,5,6,7,8,9,10,11}
b = {1,2,5,3,12,46}
print(b)
a.intersection_update(b)
print(a)