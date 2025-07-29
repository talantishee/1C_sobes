month_order = {
    'январь': 1,
    'февраль': 2,
    'март': 3,
    'апрель': 4,
    'май': 5,
    'июнь': 6,
    'июль': 7,
    'август': 8,
    'сентябрь': 9,
    'октябрь': 10,
    'ноябрь': 11,
    'декабрь': 12
}
data = {}

with open("input.txt", 'r', encoding='utf-8') as file:
    for line in file:
        line = line.strip()

        month_name, sum_str = line.split(';')
        month_name = month_name.strip().lower()
        sum_value = float(sum_str.strip())
        data[month_name] = sum_value

ordered_months = sorted(data.items(), key=lambda x: month_order[x[0]])

increase_count = 0
decrease_count = 0

for i in range(1, len(ordered_months)):
    prev_sum = ordered_months[i - 1][1]
    curr_sum = ordered_months[i][1]
    if curr_sum > prev_sum:
        increase_count += 1
    elif curr_sum < prev_sum:
        decrease_count += 1

print(f"Количество увеличений: {increase_count}")
print(f"Количество уменьшений: {decrease_count}")
