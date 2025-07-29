with open("input.txt", 'r', encoding='utf-8') as file:
    lines = file.readlines()

total_lines = []
summary_cnt = 0
summary_cost = 0
for line in lines:
    mass = line.split(';')
    total_lines.append(f'{mass[0]};{float(mass[1])};{float(mass[2])};{float(mass[1])*float(mass[2])}')
    summary_cnt += float(mass[1])
    summary_cost += float(mass[1])*float(mass[2])

with open("input.txt", 'w', encoding='utf-8') as out:
    for line in total_lines:
        out.write(f'{line}\n')
    out.write(f'ИТОГО: \nКол-во товара: {summary_cnt}\nИтоговая сумма: {summary_cost}')


