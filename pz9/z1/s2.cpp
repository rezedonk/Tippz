with open('input.txt', 'r', encoding='utf-8') as f:
    s = f.read().rstrip('\n')

for ch in set('useragreement'):
    s = s.replace(ch, '')
    s = s.replace(ch.upper(), '')

with open('output.txt', 'w', encoding='utf-8') as f:
    f.write(s)
