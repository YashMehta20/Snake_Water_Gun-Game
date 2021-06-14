import random

def gameWin(comp,you):
    if(comp==you):
        return None
    if(comp=='s'):
        if(you=='w'):
            return False
        if(you=='g'):
            return True

    if(comp=='w'):
        if(you=='g'):
            return False
        if(you=='s'):
            return True

    if(comp=='g'):
        if(you=='s'):
          return False
        if(you=='w'):
         return True


print(" Welcome to Snake,Water and Gun Game! ")
comp=print("Computer's Turn:Snake(s) Water(w)  Gun(g)?")
randoNo=random.randint(1,3)
if(randoNo==1):
    comp='s'
elif(randoNo==2):
    comp='w'
elif(randoNo==3):
    comp='g'

you=input("Player's 2 Turn:Snake(s) Water(w) Gun(g)?")

a=gameWin(comp,you)
print(f"Computer Choose {comp}")
print(f"You Choose {you}")

if(a==None):
    print("The gane is a Tie")
elif(a==True):
    print("You win")
else:
    print("You Loose")
