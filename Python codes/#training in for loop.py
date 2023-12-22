#training one
mynumbers = [1,2,3,4,5,6,7,8,9,10]
for number in mynumbers:
    print(number)
    
    if number %2 == 0:
        print (f"the number {number} is even")
    else :
        print ((f"the number {number} is odd"))
myrange = range(1,11)
for number in myrange: print(number)

#training two dictionary
myskills = {
    "python" : "30%",
    "c+language" : "20%",
    "cprog" : "40%",
    "math" : "50%",
    "linear" : "90%"
}
#print(myskills['python'])

for skill in myskills:
    print(f"My progress in {skill} is {myskills[skill]}")

# training three nested for loop

people = {
    "omar" : {
        "python" : "30%",
        "c ++" : "20%",
        "cprog" : "40%",
    },
    "aly" : {
        "python" : "20%",
        "c ++" : "30%",
        "cprog" : "50%",
    },
    "eslam" : {
        "python" : "80%",
        "c ++" : "60%",
        "cprog" : "70%",
    },
    "saad" : {
        "python" : "60%",
        "c ++" : "20%",
        "cprog" : "90%",
    }
}

for name in people : 
    print (f" skill and progress for {name} is : ")
    for skill in people[name] : 
        print (f" - {skill.upper()} ==> { people[name][skill] }")