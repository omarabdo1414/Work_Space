#password cuess training
tries = 5

mainpassword = "omarabdo1414"
password = input("Enter the password : ").strip()

while password != mainpassword :
    tries -= 1
    print (f"wrong password {' last ' if tries == 0  else  tries} chance left\nplease try again")
    password = input("Enter the password : ").strip()
    
    if tries == 0 :
        print ("you can't try again")
        break 
    
else :
    print ("correct password")