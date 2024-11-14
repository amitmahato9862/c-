import requests
from bs4 import BeautifulSoup

# A script that fetches the title of a webpage
response = requests.get('https://google.com')
soup = BeautifulSoup(response.text, 'html.parser')
print(soup.title.string)
