import argparse

def search_file(filename, search_term):
    """
    Prints lines from the file that contain the search term.
    """
    try:
        with open(filename, 'r') as f:
            for line in f:
                if search_term in line:
                    print(line.strip())
    except FileNotFoundError:
        print(f"Error: The file '{filename}' was not found.")
    except Exception as e:
        print(f"An error occurred: {e}")


def ma():
    parser = argparse.ArgumentParser(
        description="Search for a term in a file and print matching lines."
    )
    
    parser.add_argument(
        "filename",
        help="Path to the input file"
    )
    
    parser.add_argument(
        "search_term",
        help="String to search for in the file"
    )
    
    args = parser.parse_args()
    
    search_file(args.filename, args.search_term)


if __name__ == "__main__":
    ma()
