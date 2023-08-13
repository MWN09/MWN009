
def read_whole_file(path):
    """ Read the whole text file """
    with open(path) as file_object:
        contents = file_object.read()
        print(contents.rstrip())

def read_line_by_line(path):
    """ Read the text file line by line """
    with open(path) as file_object:
        for line in file_object:
            print(line.rstrip())
            
def making_a_listI(path):
    """ Stroe each line in a list """
    with open(path) as file_object:
        lines = file_object.readlines()
        
    for line in lines:
        print(line.rstrip())
    print(lines)

file_path = 'E:/Personal/pi_digits.txt'

read_whole_file(file_path)

read_line_by_line(file_path)

making_a_listI(file_path)
