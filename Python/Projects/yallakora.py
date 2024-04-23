import requests
from bs4 import BeautifulSoup
import csv

# number = input("Please Enter the number of the sheet: ")
page = requests.get(f"https://codeforces.com/group/MWSDmqGsZm/contests")

def main(page):
    src = page.content
    soup = BeautifulSoup(src, "lxml")
    print(soup)
    
main(page)