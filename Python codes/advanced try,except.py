the_file = None 
Tries = 5

while Tries > 0 :
    try :
        print("Enter file name with path")
        print(r"Example : C:\Users\fg\OneDrive\Desktop\Python codes\'your file name'")
        print(f"{Tries} Tries left") 
        file_name = input("Enter the file path : - ").strip() 
        
        the_file = open(file_name,'r')
        print(the_file.read())
        
    except FileNotFoundError :
        print("file name is not found\nplease try again")
        Tries -= 1
        
    except :
        print("Error Detected")
        
    finally :
        the_file.close()
else :
    print("No tries left\nPlease try again after 30 seconds")