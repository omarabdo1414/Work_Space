admins = ["Omar","Tare","Ama","Ala"]

name = input("Please enter your name : ").strip().capitalize()

if name in admins : 
    print (f"Hello Again MR/{name}")
    option = input("Do you want to delete or Update you name : ").strip().capitalize()
    
    if option == "Update" :
        the_new_name = input("which name do you want update to : ").strip().capitalize()
        admins[admins.index(name)] = the_new_name
        print ("Name is Updated successfully")
        print (admins)
    elif option == "Delete" :
        admins.remove(name)
        print("Name is Deleted successfully")
        print(admins)
    else :
        print("Please enter the right option")
else :
    print ("you're not an admin")
    status = input("Do you want to join admins or not 'please Type yes or no' : ").strip().capitalize()
    if status == "Yes" :
         admins.append(name)
         print(admins)
    elif status == "No" :
        print("you're not in the list thanks for your time sir")
        print (admins)
    else : print("Wrong option please try again")
    