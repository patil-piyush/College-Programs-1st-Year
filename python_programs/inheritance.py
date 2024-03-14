pi = 3.14

class polygon:
    def __init__(self,length,breadth):
        self.length = length
        self.breadth = breadth
        self.area = 0
    
    def polyarea(self):
        self.area = (self.length)*(self.breadth)
        print("Area of polygon is : ",self.area)
    
    def circlearea(self):
        self.area = pi*(self.length)*(self.breadth)
        print("Area of circle is : ",self.area)
    
class circle(polygon):
    def __init__(self,radius):
        super().__init__(radius, radius)

class rectangle(polygon):
    def __init__(self,length,breadth):
        super().__init__(length,breadth)

class square(polygon):
    def __init__(self,length,breadth):
        super().__init__(length,breadth)

x = square(10,10)
x.polyarea()
y = rectangle(100,200)
y.polyarea()
z = circle(10)
z.circlearea()