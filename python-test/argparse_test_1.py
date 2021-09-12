import argparse

parser = argparse.ArgumentParser()
parser.add_argument("square", type=int, help="display a square of a given number")
parser.add_argument("-v", help="increase output verbosity", action="store_true")
args = parser.parse_args()
answer = args.square**2
if args.v:
    print("the square of {} equals {}".format(args.square, answer))
else:
    print(answer)


