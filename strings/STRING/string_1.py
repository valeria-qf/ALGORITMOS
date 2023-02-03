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