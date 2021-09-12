import sys
import argparse

parser = argparse.ArgumentParser()
parser.parse_args()
print(f"the arguments is: {sys.argv}")
print(f"the arguments number is: {len(sys.argv)}")

