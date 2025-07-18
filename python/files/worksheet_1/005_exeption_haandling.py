import logging

logging.basicConfig(level=logging.INFO, format='%(levelname)s: %(message)s')

filename = "data.txt"

try:
    with open(filename, 'r') as file:
        content = file.read()
        logging.info("File read successfully.")
except FileNotFoundError as e:
    logging.error(f"File '{filename}' not found. Please check the file path.")
