mySkills = {
    "language": {
     "C++" : "20%",
     "C programming" : "50%"
    },
    "Math" : {
        "linear" : "50%",
        "diff" : "60%"
    }
}

for main_key,main_value in mySkills.items():
    print(f"{main_key} my progress is : ")
    for child_key,child_value in main_value.items():
        print(f"{child_key} --> {child_value}")