myfavpages = []
maximumpages = 5

while maximumpages > 0 :
    page = input("Enter the page name : ").strip().capitalize()
    myfavpages.append(page)
    maximumpages -= 1
    
    print (f"you added {page} to the list")
    print (f"{maximumpages} places left to add to the list")
    print (myfavpages)
    
else :
    print ("Bookmark is full, no places left to add")
    if len(myfavpages) > 0 :
        #sorting the list
        myfavpages.sort()
        index = 0 
        print("printing the list of pages")
        while index < len(myfavpages) :
            print (myfavpages[index])
            index += 1
    
    option = input("do you want to delete a page from the list? (yes or no) : ").strip().capitalize()
    
    if option == "Yes":
        delete = input("whice page will be deleted : ").strip().capitalize()
        if delete in myfavpages : 
            myfavpages.remove(delete)
            newpage = input("Enter the new page name : ").strip().capitalize()
            myfavpages.append(newpage)
            maximumpages -= 1
            print(myfavpages)
        else : 
            print ("The page you choosed is not in the list")
    elif option == "no":
        print ("Okay no deleted pages now :)")
print ("Happy to see you with us wir")

myfavpages.sort()
print(myfavpages)