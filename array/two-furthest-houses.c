// Return Max distance between two houses of different colors
int maxDistance(int* colors, int colorsSize) {
    int max = 0;
    for(int i = 0; i<colorsSize; i++){
        if(colors[i] != colors[0] && i>max)  // compare with with the first house and change distance
            max=i;
        if(colors[i] != colors[colorsSize-1] && (colorsSize-1-i)>max)  // compare with last house (colorsSize - 1)
            max=colorsSize-1-i;
    }
    return max;
}
