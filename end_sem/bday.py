import datetime
bday = datetime.date(2005, 10, 4)
tday = datetime.date.today()
age = tday-bday
print(age.days)
x = datetime.datetime.now()
y = datetime.datetime(2001, 4, 8)
z = x-y
print(z.days)