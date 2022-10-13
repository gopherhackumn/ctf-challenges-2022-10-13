#!/usr/bin/env python3

from os import getenv
import sys

expected_password = getenv("STRANGE_LOOP_PASSWORD")
password_correct = False

while not password_correct:
    try:
        password = input("What is the password? ")

        if password == expected_password:
            password_correct = True

    # Catch some errors
    except (EOFError, KeyboardInterrupt):
        sys.exit(0)
    except:
        print("Problem encountered.")
        break

print("Congrats! The flag is:", getenv("STRANGE_LOOP_FLAG"))
