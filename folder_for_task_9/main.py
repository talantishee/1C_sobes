import re

def remove_brackets(text):
    bracket = text.find('(')
    if bracket > -1:
        return text[0:bracket]
    else:
        return text


file_path = 'input.txt'

unique_lines = set()

with open(file_path, 'r', encoding='utf-8') as text:
    for line in text:
        line = line.strip()
        if line:
            cleaned_line = remove_brackets(line)
            unique_lines.add(cleaned_line)

print(f"Количество уникальных товаров: {len(unique_lines)}")