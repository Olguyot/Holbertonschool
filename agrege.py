import os
import sys

# Objectif : Consolider un fichier README.md à l'aide de tous les README.md du niveau inférieur.
# Effectuer cette tâche de manière recursive.
# Dans chaque README, on doit retrouver : "NOM du dossier\n" "Learning Objective\n" "Liste question"

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
    readmes = find_all("README.md", path)
    result = "<h1>Learning Objectives</h1>\n"
    for readme in readmes:
        for line in get_inside_li(readme):
            result += "<li>" + line + "</li>\n"
    with open(path + "README.md", "w") as f:
        f.write(result)
#recupérer tout ce qu'il y a dans les balises li dans une liste
#print(find_all("README.md","./System_engineeringDevOps/System_engineeringDevOps-Bash/"))
#get_inside_li("./System_engineeringDevOps/System_engineeringDevOps-Scripting/0x15-API/README.md")
#get_all_questions("./System_engineeringDevOps/System_engineeringDevOps-Bash/")
#sys
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





