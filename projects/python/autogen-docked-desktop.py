fileName = input("Enter the file name: ")
runCommand = input("Enter the command to run: ")
iconPath = ""
parameters = ""

file = open(fileName + ".desktop", "a")

file.write('''[Desktop Entry]
Version=1.0
Type=Application
Terminal=false
Exec=kdocker '''+parameters+runCommand+'''
Name='''+fileName+'''
Icon='''+iconPath)

