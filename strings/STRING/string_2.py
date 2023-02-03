import re
import textwrap

result = ''
line = ' '

print('enter a blankspace to finish')
while line != '':
        line = input('> ')
        line = re.sub(' ?<hr> ?', '\n' + '-' * 80 + '\n', line)
        result += line

result = textwrap.wrap(result, width = 80, )
for i in result:
    i = re.sub(' ?<br> ?', '\n', i)
    print(i)