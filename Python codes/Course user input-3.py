name = input("please enter your name : ").strip().capitalize()
country = input("please enter your country : ").strip().capitalize()
cprice = 100
countriesone = ["Egypt","Bahrain","KSA","Kwait","Oman","Jorden","Syria","Palastain","Tuniss","Moroco","Eraqe","Lobnan",]
countriesonediscount = 70
countriestwo = ["USA","UK","Spain","France","Germany","Italy",]
countriestwodiscount = 40
    
print (f"\t\t\tHello MR/MRS: {name}\t")
if country in countriesone : 
    print (f"\t\n sir Because you are from {country} you got a discount on our course Equal to %{countriesonediscount}")
    print (f"\t\nso the prince of our course now is ${cprice - countriesonediscount}")
elif country in countriestwo :
    print (f"\t\nsir Because you are from {country} you got a discount on our course Equal to %{countriestwodiscount}")
    print (f"\t\nSo the prince of our course now is ${cprice - countriestwodiscount}")
else :
    print (f"\n\t\tThe price of our course is {cprice}")
print("Happy to see you with us sir ")