import re

def sort(array):

    less = []
    equal = []
    greater = []

    if len(array) > 0:
        pivot = len(array[0])
        for i in array:
            if len(i) < pivot:
                less.append(i)
            elif len(i) == pivot:
                equal.append(i)
            elif len(i) > pivot:
                greater.append(i)
            
        return sort(greater)+equal+sort(less)

    else:
        return array

n = int(input('> '))
for i in range(n):
    line = input('> ')
    matches = re.findall('\w+', line)
    print(sort(matches))