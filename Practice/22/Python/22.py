maze = [
    "####B######################",
    "# #       #   #      #    #",
    "# # # ###### #### ####### #",
    "# # # #       #   #       #",
    "#   # # ######### # ##### #",
    "# # # #   #       #     # #",
    "### ### ### ############# #",
    "# #   #     # #           #",
    "# # #   ####### ###########",
    "# # # #       # #         C",
    "# # ##### ### # # ####### #",
    "# # #     ### # #       # #",
    "#   ##### ### # ######### #",
    "######### ### #           #",
    "# ####### ### #############",
    "A           #   ###   #   #",
    "# ############# ### # # # #",
    "# ###       # # ### # # # #",
    "# ######### # # ### # # # F",
    "#       ### # #     # # # #",
    "# ######### # ##### # # # #",
    "# #######   #       #   # #",
    "# ####### ######### #######",
    "#         #########       #",
    "#######E############D######"
]

finish = False

def checkPath(direction,x,y):
	if (direction != 3 and maze[y - 1][x] == ' '):
		findPath(1, x, y - 1)
	if (direction != 4 and maze[y][x + 1] == ' '):
		findPath(2, x + 1, y)
	if (direction != 1 and maze[y + 1][x] == ' '):
		findPath(3, x, y + 1)
	if (direction != 2 and maze[y][x - 1] == ' '):
		findPath(4, x - 1, y)

def findPath(direction,x,y):
	while checkNear(direction,x, y):
		if direction == 1:
		    y -= 1
		elif direction == 2:
		    x += 1
		elif direction == 3:
		    y += 1
		elif direction == 4:
		    x -= 1
	checkFinish(x, y);
	checkPath(direction, x, y);

def checkNear(direction,x,y):
	if direction == 1 and maze[y - 1][x] == ' ' and maze[y][x + 1] == '#' and maze[y][x - 1] == '#':
		return True
	elif direction == 2 and maze[y][x + 1] == ' ' and maze[y - 1][x] == '#' and maze[y + 1][x] == '#':
		return True
	elif direction == 3 and maze[y + 1][x] == ' ' and maze[y][x + 1] == '#' and maze[y][x - 1] == '#':
		return True
	elif direction == 4 and maze[y][x - 1] == ' ' and maze[y - 1][x] == '#' and maze[y + 1][x] == '#':
		return True
	else:
	    return False

def checkFinish(x,y):
    letters = ('A','B','C','D','E','F')
    for i in letters:
        if maze[y - 1][x] == i:
            print(i,end = " ")
            global finish
            finish = True
        if maze[y][x + 1] == i:
            print(i,end = " ")
            global finish
            finish = True
        if (maze[y + 1][x] == i):
            print(i,end = " ")
            global finish
            finish = True
        if (maze[y][x - 1] == i):
            print(i,end = " ")
            global finish
            finish = True

x, y = map(int,input().split())
if (x < 0 or x >= 27 or y < 0 or y >= 25) or (maze[y][x] == '#'):
	print("Не верные координаты")
else:
	checkPath(0,x,y)
	if finish == False:
		print("Выхода нет")


