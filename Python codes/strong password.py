import string
import random
s1 =list(string.ascii_lowercase)
s2 =list(string.ascii_uppercase)
s3=list(string.digits)
s4=list(string.punctuation) 

apnumber =int(input("How many characters do you want in your password? : "))

while True :
    try:
      apnumber = int(apnumber)
      if apnumber < 6 :
        print ("Needed at least 6 characters")
        apnumber =int(input("please enter the number again : "))
      else : 
        break 
    except :
        print ("numbers only")
        apnumber =int(input("please enter the number again : "))
        
random.shuffle(s1)
random.shuffle(s2)
random.shuffle(s3)
random.shuffle(s4)

part1 = round (apnumber * (30/100))
part2 = round (apnumber * (20/100))

password = []

for i in range (part1) :
    password.append(s1[i])
    password.append(s2[i])
for i in range (part2) :
    password.append(s3[i])
    password.append(s4[i])

random.shuffle(password)
    
password = "".join(password[:])
print(password)    