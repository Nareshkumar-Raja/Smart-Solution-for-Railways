import time
i=0
while (i<=1440):
    i=i+1
    time.sleep(10)
    import random
    temp=random.randint(0,30)
    humid=random.randint(1,100)
    if temp<=15:
        print(temp, "the temperature is low")
    elif temp<=25:
        print(temp, "the temperature is normal")
    else:
        print(temp, "the temperature is high")
    if humid<=50:
        print(humid, "the humidity is low")
    elif humid<=80:
        print(humid, "the humidity is normal")
    else:
        print(humid, "the humidity is high")
