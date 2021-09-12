weekday = ["Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"]

while True:
    today = input("-> Today is: ")
    if today in weekday:
        break
    else:
        print(f"** Your input was wrong, you can select one of them as below. \n {weekday}")

assert today == "Friday", "Stay in the school, good good study!"

print ("You can go outside to buy fruit!")
