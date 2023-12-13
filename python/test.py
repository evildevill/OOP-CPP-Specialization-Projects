x="Go"
if(x=="Go"):
  print('Go ')
else:
  print('Stop')
print('Mike')

x=1
x>-5
print(x>-5)

x=5
while(x!=2):
  print(x)
  x=x-1

class Points(object):
  def __init__(self,x,y):

    self.x=x
    self.y=y

  def print_point(self):

    print('x=',self.x,' y=',self.y)

p1=Points(1,2)
p1.print_point()

for i,x in enumerate(['A','B','C']):
    print(i+1,x)

class Points(object):

  def __init__(self,x,y):

    self.x=x
    self.y=y

  def print_point(self):

    print('x=',self.x,' y=',self.y)

p2=Points(1,2)

p2.x='A'

p2.print_point()

def step(x):
    if x>0:
        y=1
    else:
        y=0
    return y

print(step(1))

a=1

def do(x):
    a=100
    return(x+a)

print(do(1))