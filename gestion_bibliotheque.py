        #projet gestion d'ue bibliotheque
#ETAPE1 : planification de la structure des donnees
# 1.definir la structure du livre
     # utilisation d'un dictionnaire pour representer un livre
#dict = {
      #  'Titre' : '',
        #'Auteur' : '',
        #'Etat' : 'disponible'
  #  }
     # 2.creation d'une liste de livres
liste_livres = []

#ETAPE2 : creation des donctions
#1.fonction pour ajouter un livre
def ajoute_livre(titre,auteur):
    "   AJOUT DE LIVRES   "
    dict = {
        'Titre' : titre,
        'Auteur' : auteur,
        'Etat' : True
    }
    liste_livres.append(dict)
    print(f"le livre : {dict['Titre']} a été ajouté !!")

#2.fontion pour afficher un livre
def affiche_livre():
    "      AFFICHAGE DE LIVRES       "
    print("\nles livres disponnible sont : ")
    for index,dict in enumerate(liste_livres,1):
        if dict['Etat']:
            disponible = "disponible"
        print(f"{index}.Titre : {dict['Titre']}; Auteur : {dict['Auteur']}; Etat : {disponible}")

#3.fonction pour emprunter un livre
def emprunter_livre(titre):
    "   EMPRUNT DE LIVRES    "
    for dict in liste_livres:
        if dict['Titre'] == titre :
                dict['Etat'] = False
                print(f"le livre : {dict['Titre']} a été emprunté !!")
        #else:
            # print("entrez un titre valide svp !!!")
                
#4.fonction pour retourner un livre
def retourne_livre(titre):
     "   RETOURNE DE LIVRES    "
     for dict in liste_livres:
          if dict['Titre'] == titre:
               dict['Etat'] = True
               print(f"le livre : {dict['Titre']} a ete retourné avec success!!")
         # else:
               #print("entrez un titre valide svp !!!")

#5.fonction pour rechercher un livre
def recherche_livre(auteur):
     "       RECHERCHE DE LIVRES      "
     for dict in liste_livres:
           if dict['Auteur'] == auteur:
             print(f"l'auteur : {dict['Auteur']} existe dans ma liste")
     #else:
         # print("Auteur introuvable !!!")

#ETAPE3 : creation de l'interface utilisateur
#1.boucle principale
def menu():
    while True:
        print("\n!!! BIENVENUE DANS MA BIBLIOTHEQUE !!!")
        print("1. Ajouter un livre ") 
        print("2. Afficher les livres")
        print("3. Emprunter un livre")
        print("4. Retourner un livre")
        print("5. Recherher un livre")
        print("6. Quitter")
        choix = int(input(">Entre un choix stp : "))
#2. appel des fonction appropriee
        if choix == 1:
             titre = input(">Entrez le titre du livre svp ")
             auteur = input(">Entrez l'auteur du livre svp ")
             ajoute_livre(titre,auteur)
        elif choix == 2:
             affiche_livre()
        elif choix == 3:
             titre = input(">Entre le titre du livre a emprunté : ")
             emprunter_livre(titre)
        elif choix == 4:
             titre = input(">Entre le titre du livre a retourné : ")
             retourne_livre(titre)
        elif choix == 5:
             auteur = input(">Entre le nom de l'auteur du livre a recherché")
             recherche_livre(auteur)
        elif choix == 6:
             print("MERCI D'AVOIR VISITE MA BIBLIOTHEQUE")
             print("!!a bientot!!".upper())
             break
        else:
             print("entre un nombre valide stp")  
             break   
menu()       
#ETAPE4. tester le programme
#1. ajouter des livres
#ajoute_livre('au bonheur des dames','emile zola')
#ajoute_livre('egalite homme et femme','marie')
#ajoute_livre('respect de la femme','michelle')
#ajoute_livre('joie de vivre','carole')
#ajoute_livre('la musique mon tout','mafoi')

#2.affichage des livres
#affiche_livre()
#3.emprunter des livre
#emprunter_livre('joie de vivre')
#emprunter_livre('au bonheur des dames')
#emprunter_livre('la musique mon tout')
#affiche_livre()
#retourne_livre('la musique mon tout')
#retourne_livre('joie de vivre')

#4.recherche des livre
#recherche_livre('carole')
#recherche_livre('michelle')

