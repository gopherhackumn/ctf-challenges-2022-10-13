#!/usr/bin/env python3

from os import listdir
from os.path import join, dirname
from subprocess import check_output
import sys

print("Welcome to my library!")
print("Type the command 'help' for help.")
print()

while True:
    try:
        command = input("[command]: ")

        if command == "help":
            print("Available commands:")
            print(" - help: this help menu")
            print(" - list: list all available documents")
            print(" - show: show the contents of one document")

        elif command == "list":
            # Read a list of files
            for item in listdir(join(dirname(__file__), "docs")):
                print(" -", item)

        elif command == "show":
            print("Which file would you like to see?")
            filename = input("[filename]: ")

            output = check_output(f"cat /code/docs/{filename}", shell=True)
            print(output.decode("utf-8"))

        else:
            print("Not a valid command! Try again.")

        print()

    except (KeyboardInterrupt, EOFError):
        sys.exit(0)

    except:
        print("Encountered an error!")
        print()
