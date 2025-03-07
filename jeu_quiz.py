# creez une liste pour stocker les question reponses
#fonction affiche les question et verifie les reponses
#algo pour genere le score

liste = [
    {"question" : ">Quel est mon age? ","reponse" :"13"},
    {"question":">Quelle est ma  couleur prefere ? ","reponse" : "jaune"},
    {"question" : ">quel est mon repas prefere ? ","reponse":"eru"}
]
print("\n")
score = 0
for question in liste:
    reponse = input(question["question"] + " ")
    if reponse == question["reponse"]:
     print("votre reponse est correcte")
     score += 1
     
    else:
      print("reponse incorrecte")
print ("votre score finale est : ",score)
