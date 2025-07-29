input = 'input.txt'
output_filename = 'output.txt'

with open(input, 'r', encoding='utf-8') as file:
    lines = file.readlines()

ans_lines = []
for line in lines:
    words = line.split()
    words_mas = [word.capitalize() for word in words]
    line1 = ' '.join(words_mas)
    ans_lines.append(line1)

with open(output_filename, 'w', encoding='utf-8') as out:
    for line in ans_lines:
        out.write(line + '\n')
