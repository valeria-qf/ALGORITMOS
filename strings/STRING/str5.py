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
