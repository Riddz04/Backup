import pandas as pd
details = {
    'subjects' : ["bio","phy","chem"],
    'marks':["96","95","95"]
}
marksheet = pd.DataFrame(details)
print(marksheet)