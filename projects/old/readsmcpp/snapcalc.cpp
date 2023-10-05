# include <iostream>


int gcd(int a, int b){
    std::cin >> a;
    std::cin >> b;
    int r=a%b;
    while(r) {
        a=b;
        b=r;
        r=a%b;
    }
    return b;
}

int main(){
    int snap;
    std::cout << "Snap: ";
    std::cin >> snap;
    int btm = 4;

    // Find the snap
    for(int snapx=0; snapx==(int)(snap/btm); snapx+=1){
    //for(snapx in range(int(snap/btm)))
        int currentSnap = snap/gcd(snapx,snap);
        //for i in range(200): # Convert to a while without inf loop
        //   if snapt%btm != 0:
        //snapx = int(snapx/2)
        currentSnap = snap/gcd(snapx, snap);
        std::cout << "Current Snap:";
        std::cout << currentSnap;
        std::cout << "snapx:";
        std::cout << snapx;
        system("pause");
    }

}
/*
// Find the snap
for snapx in range(int(snap/btm)):
    snapt = snap/gcd(snapx,snap)
    //for i in range(200): # Convert to a while without inf loop
    //   if snapt%btm != 0:
    //snapx = int(snapx/2)
    snapt = snap/gcd(snapx, snap)
    print("snapt:",snapt,"snapx:",snapx)

*/
// remove the snapt that isnt a mutiple of 4 on snaps which are multiples of 3
// fix 20
