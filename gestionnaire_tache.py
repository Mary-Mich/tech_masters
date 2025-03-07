#initialisation de la liste de tache
liste = []

#creation des fonctions
#ajouter une tache
def ajouter_tache(Tache): 
    liste.append(Tache)
    print(f"la tache {Tache} a ete ajoute.")
    pass
#afficher des taches
def afficher_tache():
    for indice,Tache in enumerate(liste,1):
        etat = "non termine"
        if Tache[1]:
            etat = "termine"
        print(f"\n{indice}. la tache {Tache[0]} est dans l'etat : {etat}.")

#supprimer une tache
def supprime_tache(index):
      if 0 <= index <= len(liste):
          Tache = liste.pop(index)
          print(f"\nla tache {Tache} a ete supprimer avec sucess.")
      else:
        print("\nentre un index valide")
        
#marquer une tache comme termine
def tache_termine(index):
    if 0 <= index <= len(liste):
            liste[index][1] = True
            print(f"\nla tache {liste[index][0]} est termine")
    else:
            print("entre un index valide")
    
#menu principal
def menu():
   while True:
     print("\n\n BIENVENUE A TOI dans mon gestionnaire de tache !!".upper())
     print("""
          menu:
            1.Ajouter une tache
            2.Aficher les taches
            3.Supprimer une tache 
            4.Marquer une tache comme termine
            5.Quitter
          """)
     Choix = int(input(">entrer votre choix svp : "))

     if Choix == 1:
        description = input("\n>entrer la description de votre tache : ")
        tache = [description,False]
        ajouter_tache(tache)
     elif Choix == 2:
         afficher_tache() 
     elif Choix == 3:
         num = int(input("\n>Entrer le numero de la tache a supprime : "))
         supprime_tache(num - 1)
     elif Choix == 4:
         num = int(input('\n>Entre le numero de la tache a marquer comme termine : '))
         tache_termine(num)
     elif Choix == 5:
         print("\n merci et su revoir".upper())
         break
     else:
       print (">Entre un choix valide")
       
#boucle principal
menu()


