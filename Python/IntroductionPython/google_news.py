import bs4
from bs4 import BeautifulSoup as soup
from urllib.request import urlopen


my_url="https://news.google.com/news/rss" # google news
# To open the Given URL
client_news = urlopen(my_url)

# read and close
xml_page = client_news.read()
client_news.close()

soup_page = soup(xml_page, "xml")
news_list = soup_page.findAll("item")

for news in news_list:
    print(news.title.text)
    print(news.link.text)
    print(news.pubDate.text)
    print("*" * 10)
