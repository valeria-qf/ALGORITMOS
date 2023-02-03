import re

n = int(input('Number of cases: '))
somas = []
for i in range(0, int(n)):
    line = input('> ')
    numbers = re.findall('\d+', line)

    soma = 0
    for i in numbers:
        soma += int(i)
    somas.append(soma)

for i in somas:
    print('Sum: ', i)
