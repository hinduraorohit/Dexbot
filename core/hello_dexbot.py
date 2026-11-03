name = "Dexbot"
battery_percentage = 87

print(f"{name} is online. Battery percentage is {battery_percentage}.")
if battery_percentage < 20:
	print("low battery. running to dock.")
else:
	print("ready for missions")
