import re

V = int(input())
hex_value = hex(V)
result = re.search(r'0x(.*)',hex_value)
print(result.group(1).upper())