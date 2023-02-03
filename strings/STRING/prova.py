import re

n = int(input('Number of cases: '))
somas = []
numbers = []

for i in range(0, n):
    line = (input('> '))
    number = re.findall('\d+', line)
    numbers = [int(n) for n in number]
    soma = sum(numbers)
    somas.append(soma)

for i in somas:
    print('Sum: ', i)

#_------------------------------------------------

import re
import textwrap

result = ''
line = ' '

while line != '':
    if (line != ''):
        line = input('> ')

        line = re.sub(' ?<hr> ?', '\n' + '-' * 80 + '\n', line)
        result += line

result = textwrap.wrap(result, width = 80, )
for i in result:
    i = re.sub(' ?<br> ?', '\n', i)
    print(i)

#-----------------------------------------

import re

line1 = input('> ')
line2 = input('> ')
cpf = ''
decimal = ''
soma = ''
soma2 = ''
numbers2 = ''

numbers = re.findall('\d|\.', line1)
number2 = re.findall('\d', line2)
max = 11

for i in range (max):
    if (numbers[i] != '.'):
        cpf += numbers[i]
    else: 
        max +=1

for i in range (max, 17):
    if numbers[i] == '.':  # se for igual a '.' dá break
        soma =  int(soma)
        count = 0
        for j in range(i + 1, 17):
            decimal += numbers[j]
            count += 1
            if count > 2:
                break
            
        decimal = int(decimal)
        decimal = decimal/100
        soma += decimal

        break
    soma += numbers[i]

soma = float(soma)
print(cpf)
print(soma)

# ---------------------------------------------------------

import re
n = input('Number of cases: ')
result = ''

for i in range(0, int(n)):
    line = input('>')

    if (re.search('\d+', line)):
        line = re.sub('o', '0', line, flags = re.IGNORECASE)
        line = re.sub('l', '1', line)
        line = re.sub(',', '', line)
        line = re.sub(' ', '', line)
        line = re.sub('^0*0$', '0', line)
        if (int(line) < 0 or int(line) > 2147483647):
            result += 'error \n' 
        else:
            result += line + '\n'
        
    else:
        result += 'error \n'

print(result)

#--------------------------------------------

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