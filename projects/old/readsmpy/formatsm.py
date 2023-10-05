comments = ['#', '/', ':']

# Remove comments
with open('Flower Dance.sm') as sm, open('notedata.txt', 'w') as notedata:
    for line in sm:
        if not any(comment in line for comment in comments):
            notedata.write(line)


# 2: hold start, 3: hold end, M: mine
chords = ["single","jump","hand","quad","empty"]
chordcount = []

# Count chords
with open("notedata.txt") as f:
    for line in f:
      #print(chords[line.count("1")-1])
      chordcount.append(chords[line.count("1")-1])
for chordtype in chords:
  print(chordtype+":",chordcount.count(chordtype))

measuresnaps = 0
x = 0

# Count snaps in a measure
with open("notedata.txt") as f:
  for line in f:
    if not any(comma in line for comma in (",")):
      measuresnaps += 1
    if any(comma in line for comma in (",")):
      x += 1
      print("Measure"+str(x)+":",measuresnaps)
      measuresnaps = 0
