import pyshorteners

link_input = input("URL to shorten")

link = link_input

shortener = pyshorteners.Shortener()

url = shortener.tinyurl.short(link)

print(url)