counter = 0
print("ENter -1 to terminate the program")
user_input = int(input("Input: "))

while (user_input != -1):
  counter = counter + 1
  user_input = int(input("Input: "))
  
print(f'program terminated after {counter} inputs')