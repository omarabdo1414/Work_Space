#linear search
def linear_search(list, item):
    for i in range(len(list)):
        if list[i] == item:
            return i

    return None

my_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

print (linear_search(my_list, 3))
print (linear_search(my_list, 7))
print (linear_search(my_list, 21))