#imported pandas as pd (alias)
import pandas as pd

#created a array
a = [1, 7, 2]

#loading above array in the series
myvar = pd.Series(a)

print(myvar)

#----------------------------------------------------------------------------------

"""
#imported pandas as pd (alias)
import pandas as pd

#created a array
a = [1, 7, 2]

#loading above array in the series
myvar = pd.Series(a)

#returns the 2nd element in the series
print(myvar[1])

"""

#----------------------------------------------------------------------------------

"""
import pandas as pd

#creating labels 
#method 1 - by passing index in the series function

a = [1, 7, 2]

myvar = pd.Series(a, index = ["x", "y", "z"])

print(myvar)
"""

#--------------------------------------------------------------------------------

"""
import pandas as pd

#creating labels 
#method 2 - by creating a dictionary and loading it into the series

calories = {"day1": 420, "day2": 380, "day3": 390}

myvar = pd.Series(calories)

print(myvar)
"""
