import keyboard  # using module keyboard


while True:  # making a loop
    try:  # used try so that if user pressed other than the given key error will not be shown
        if keyboard.is_pressed('x') or keyboard.is_pressed('c') or keyboard.is_pressed(',') or keyboard.is_pressed('.'):
            print('You Pressed A Key!')
            break  # finishing the loop
    except:
        break  # if user pressed a key other than the given key the loop will break