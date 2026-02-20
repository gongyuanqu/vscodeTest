def reverse_string(s: str) -> str:
    return s[::-1].upper()

if __name__ == "__main__":
    import sys
    if len(sys.argv) > 1:
        text = " ".join(sys.argv[1:])
    else:
        text = input("Enter text: ")
    print(f"Reversed string result: {reverse_string(text)}")






