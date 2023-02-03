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

