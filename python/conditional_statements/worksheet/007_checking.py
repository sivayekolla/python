power_on = True
overcurrent = True
overvoltage = False

if overcurrent and overvoltage:
    print("Critical Failure")
elif overcurrent:
    print("Shut Down: Overcurrent")
elif overvoltage:
    print("Shut Down: Overvoltage")
elif power_on:
    print("System Safe")
else:
    print("System Off")
