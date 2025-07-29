import re


with open('input.txt', 'r', encoding='utf-8') as file:
    lines = file.readlines()

sentence_endings = r'[.!?]\s+'

for line_number, line in enumerate(lines, start=1):
    sentences = re.split(sentence_endings, line.strip())

    for sentence in sentences:
        sentence = sentence.strip()
        if not sentence:
            continue
        first_char = sentence[0]
        if first_char.isalpha() and not first_char.isupper():
            words = sentence.split()
            for word in words:
                clean_word = re.sub(r'\W+', '', word)
                if clean_word:
                    if not clean_word[0].isupper():
                        print(f"Строка {line_number}: слово '{word}' написано с маленькой буквы.")
                        break
