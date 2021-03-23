import re

pat = re.compile(r'hello',re.I) 

x = re.findall(pat,"Hello")

print(x)


