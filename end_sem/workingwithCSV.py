import pandas as pd
df = pd.read_csv('timezone.csv',usecols=['Value','Group'],nrows=10)
print(df)