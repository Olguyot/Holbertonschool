import os
import sys
import time

#quick and dirty to create README.md from source

def find_all(name, path):
    result = []
    for root, dirs, files in os.walk(path):
        if name in files:
            result.append(os.path.join(root, name))
    return result

def get_inside_li(path):
    result = []
    with open(path) as f:
        lines = f.readlines()
    for line in lines:
        tmp = ""
        if "<li>" in line:
            tmp = line.split("<li>")[1]
            if "</li>" in tmp:
               tmp = tmp.split("</li>")[0]
        if tmp != "":
            result.append(tmp)
    return(result)

def get_all_questions(path):
    if os.path.exists(path + "README.md"):
        os.remove(path + "README.md")
    readmes = find_all("README.md", path)
    result = "<h1>Learning Objectives</h1>\n"
    for readme in readmes:
        result += readme.split("/")[-2]
        for line in get_inside_li(readme):
            result += "<li>" + line + "</li>\n"
    with open(path + "README.md", "w") as f:
        f.write(result)
    #print(result)
get_all_questions("./System_engineeringDevOps/System_engineeringDevOps-Bash/")
get_all_questions("./System_engineeringDevOps/System_engineeringDevOps-CI_CD/")
get_all_questions("./System_engineeringDevOps/System_engineeringDevOps-Networking/")
get_all_questions("./System_engineeringDevOps/System_engineeringDevOps-Scripting/")
get_all_questions("./System_engineeringDevOps/System_engineeringDevOps-Security/")
get_all_questions("./System_engineeringDevOps/System_engineeringDevOps-Web_stack/")
get_all_questions("./System_engineeringDevOps/System_engineeringDevOps-Web_stack_debugging/")
#Low
get_all_questions("./Low-level_programmingAlgorithm/Low-level_programmingAlgorithm-Data_structures_and_Algorithms/")
get_all_questions("./Low-level_programmingAlgorithm/Low-level_programmingAlgorithm-Hatching_out/")
get_all_questions("./Low-level_programmingAlgorithm/Low-level_programmingAlgorithm-Linux_and_Unix_system_programming/")
#high
get_all_questions("./Higher-level_programming/Higher-level_programming-Databases/")
get_all_questions("./Higher-level_programming/Higher-level_programming-JavaScript/")
get_all_questions("./Higher-level_programming/Higher-level_programming-Python/")

#parent
get_all_questions("./Higher-level_programming/")
get_all_questions("./Low-level_programmingAlgorithm/")
get_all_questions("./System_engineeringDevOps/")





