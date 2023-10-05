def gcd(a, b):
  r=a%b
  while r:
      a=b
      b=r
      r=a%b
  return(b)

snap = int(input("Snap: "))
btm = 4

# Find the snap
for snapx in range(int(snap/btm)):
    snapt = snap/gcd(snapx,snap)
    #for i in range(200): # Convert to a while without inf loop
    #   if snapt%btm != 0:
    #snapx = int(snapx/2)
    snapt = snap/gcd(snapx, snap)
    print("snapt:",snapt,"snapx:",snapx)


"""
remove the snapt that isnt a mutiple of 4 on snaps which are multiples of 3
fix 20
"""