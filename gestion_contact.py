#GESTIONNAIRE DE CONTacts
""" ce projet consiste a :
- definir les iformations de chaque contact
- creer des fonction pour ajouter , afficher et supprimer les contacts
- gerer les entree de l'utilisateur 
- tester le programme """

#listes pour stocker les conctats
carnet =[]

#definir les information de chaque contact
# les fonctions possibles
#ajout de contact
def ajout_contact(nom,num,email):
   "ajout de contacts"
   contact = {
    'nom' : nom,
    'numero' : num,
    "Email": email,
    }
   carnet.append(contact)
   print(f"le nom : {contact['nom']} le numero {contact['numero']} et l'email {contact['Email']} ont ete ajoute ")

#fonction affiche la liste des conctact
def afiche_contact():
   for i,contact in enumerate(carnet,1):
      print(f"{i}. {contact}")  
   if carnet == []:
      print("votre liste de contact est encore vide")
      print("veillez faire le choix 1 pour ajouter des contacts")

#fonction supprime les contact
def supprime_contact(nom):
      for contact in carnet:
         if contact["nom"] == nom:
           carnet.remove(contact)  
           print(f"le contact possedant le nom {nom} a ete supprime ")
         else:
           print(f"le nom {nom} est introuvable")

ajout_contact('mary','679 07','2gmail.com')
afiche_contact()
supprime_contact('mary')
afiche_contact()