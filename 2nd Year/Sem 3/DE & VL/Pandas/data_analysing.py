# The head() method returns the headers and a specified number of rows, starting from the top

"""
# Get a quick overview by printing the first 10 rows of the DataFrame:

import pandas as pd

df = pd.read_csv('data.csv')

print(df.head(10))
"""

# ---------------------------------------------------------------------------------------------------
# if the number of rows is not specified, the head() method will return the top 5 rows

"""
# Print the first 5 rows of the DataFrame:

import pandas as pd

df = pd.read_csv('data.csv')

print(df.head())
"""

# -------------------------------------------------------------------------------------------------------

# The tail() method returns the headers and a specified number of rows, starting from the bottom.

"""
# Print the last 5 rows of the DataFrame:

print(df.tail()) 
"""
