import random
import string

letters = (
    [chr(c) for c in range(ord('а'), ord('я') + 1)] +
    [chr(c) for c in range(ord('А'), ord('Я') + 1)]
)

nums = list(string.digits)

symbols = letters + nums

result = ''.join(random.sample(symbols, 10))
print(result)