dictt = {
    'а': 0,
    'е': 0,
    'ё': 0,
    'и': 0,
    'о': 0,
    'у': 0,
    'ы': 0,
    'э': 0,
    'ю': 0,
    'я': 0,
    'А': 0,
    'Е': 0,
    'Ё': 0,
    'И': 0,
    'О': 0,
    'У': 0,
    'Ы': 0,
    'Э': 0,
    'Ю': 0,
    'Я': 0
}

text = open("input.txt", encoding='utf-8')
len_of_file = 0
for i in text.read():
    len_of_file+=1
    if i in dictt.keys():
        dictt[i] += 1

sorted_dict = dict(sorted(dictt.items(), key=lambda item: item[1], reverse=True))



for i, j in sorted_dict.items():
    print(f'{i}: {j}/{len_of_file}')

