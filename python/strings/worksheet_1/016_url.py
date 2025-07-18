import re

def extract_urls(text):
    
    pattern = r'https?://\S+'
    urls = re.findall(pattern, text)
    return urls


text = "Check this link: https://openai.com and http://github.com"
urls = extract_urls(text)

print("URLs found:", urls)
