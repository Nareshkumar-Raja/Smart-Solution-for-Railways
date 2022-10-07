Python 3.7.0 (v3.7.0:1bf9cc5093, Jun 27 2018, 04:59:51) [MSC v.1914 64 bit (AMD64)] on win32
Type "copyright", "credits" or "license()" for more information.
>>> import time
>>> i=0
>>> while (i<=1440):
	i=i+1
	time.sleep(10)

import random
temp=random.randint(0,30)
humid=random.randit(1,100)
if temp<=15:
print(temp,"the temperature is low")
elif temp<=25:
print(temp,"the temperature is normal")
else:
print(temp,"the temperature is high")
if humid<=50:
print(temp,"the temperature is low")
elif humid<=80:
print(temp,"the temperature is medium")
else:
print(temp,"the temperature is high")
