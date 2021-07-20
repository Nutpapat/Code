""""PSIT"""

def main():
    """ Main function """
    #Starting variables
    len_y, len_x = tuple([int(i) for i in input().split()])
    island = [[int(i) for i in input().split()] for _ in range(len_y)]
    island_count = 0

    #If an area of land is found, scan for all connected land area to count an island.
    for coor_y in range(len_y):
        for coor_x in range(len_x):
            if island[coor_y][coor_x] == 1:
                island[coor_y][coor_x] = 2
                scan_island(island, coor_y, coor_x)
                island_count += 1

    #Output
    print(island_count)

def scan_island(island, coor_y, coor_x):
    """ Scan an area of land and its surrounding. Turn scanned land area from 1 to 2. """
    if island[max(coor_y-1, 0)][max(coor_x-1, 0)] == 1:
        #Scan: Upper Left
        island[max(coor_y-1, 0)][max(coor_x-1, 0)] = 2
        scan_island(island, max(coor_y-1, 0), max(coor_x-1, 0))

    if island[max(coor_y-1, 0)][coor_x] == 1:
        #Scan: Upwards
        island[max(coor_y-1, 0)][coor_x] = 2
        scan_island(island, max(coor_y-1, 0), coor_x)

    if island[coor_y][max(coor_x-1, 0)] == 1:
        #Scan: Leftwards
        island[coor_y][max(coor_x-1, 0)] = 2
        scan_island(island, coor_y, max(coor_x-1, 0))

    if island[max(coor_y-1, 0)][min(coor_x+1, len(island[0])-1)] == 1:
        #Scan: Upper Right
        island[max(coor_y-1, 0)][min(coor_x+1, len(island[0])-1)] = 2
        scan_island(island, max(coor_y-1, 0), min(coor_x+1, len(island[0])-1))

    if island[min(coor_y+1, len(island)-1)][max(coor_x-1, 0)] == 1:
        #Scan: Lower Left
        island[min(coor_y+1, len(island)-1)][max(coor_x-1, 0)] = 2
        scan_island(island, min(coor_y+1, len(island)-1), max(coor_x-1, 0))

    if island[min(coor_y+1, len(island)-1)][coor_x] == 1:
        #Scan: Downwards
        island[min(coor_y+1, len(island)-1)][coor_x] = 2
        scan_island(island, min(coor_y+1, len(island)-1), coor_x)

    if island[coor_y][min(coor_x+1, len(island[0])-1)] == 1:
        #Scan: Rightwards
        island[coor_y][min(coor_x+1, len(island[0])-1)] = 2
        scan_island(island, coor_y, min(coor_x+1, len(island[0])-1))

    if island[min(coor_y+1, len(island)-1)][min(coor_x+1, len(island[0])-1)] == 1:
        #Scan: Lower Right
        island[min(coor_y+1, len(island)-1)][min(coor_x+1, len(island[0])-1)] = 2
        scan_island(island, min(coor_y+1, len(island)-1), min(coor_x+1, len(island[0])-1))

main()
