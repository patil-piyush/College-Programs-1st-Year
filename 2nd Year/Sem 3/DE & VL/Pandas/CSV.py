"""
import pandas as pd

df = pd.read_csv('path of the csv file')

print(df.to_string()) 
"""

#------------------------------------------------------------------------------------------------

"""
import pandas as pd

df = pd.read_csv('/home/pccoe/Piyush/pandas operations/data.csv')

#prints first and last 5 enteries
print(df) 
"""

#------------------------------------------------------------------------------------------------

"""
import pandas as pd

#check your system's maximum rows with the pd.options.display.max_rows statement
print(pd.options.display.max_rows) 

"""

#------------------------------------------------------------------------------------------------

"""
#Increase the maximum number of rows to display the entire DataFrame

import pandas as pd

pd.options.display.max_rows = 9999

df = pd.read_csv('data.csv')

print(df)
"""
