with open('input.txt', 'r', encoding='utf-8') as f:
    s = f.read().rstrip('\n')

bad = set('useragreement')  # повторные буквы set сам уберёт
res = ''

for ch in s:
    if ch.lower() not in bad:
        res += ch

with open('output.txt', 'w', encoding='utf-8') as f:
    f.write(res)
