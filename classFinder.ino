int classe[3][5][11] = 
{
  {
  {{},{},{},{},{},{},{},{},{},{},{}},
  {{},{},{},{},{},{},{},{},{},{},{}},
  {{},{},{},{},{},{},{},{},{},{},{}},
  {{},{},{},{},{},{},{},{},{},{},{}},
  {{},{},{},{},{},{},{},{},{},{},{}}
  },

  {
  {{},{},{},{},{},{},{},{},{},{},{}},
  {{},{},{},{},{},{},{},{},{},{},{}},
  {{},{},{},{},{},{},{},{},{},{},{}},
  {{},{},{},{},{},{},{},{},{},{},{}},
  {{},{},{},{},{},{},{},{},{},{},{}}
  },

  {
  {{},{},{},{},{},{},{},{},{},{},{}},
  {{},{},{},{},{},{},{},{},{},{},{}},
  {{},{},{},{},{},{},{},{},{},{},{}},
  {{},{},{},{},{},{},{},{},{},{},{}},
  {{},{},{},{},{},{},{},{},{},{},{}}
  }
};
String cours[25] = {" ","Dessin technique","Initiation techno","Microprocesseur","Dynamique","Programation graphique","Instrument d'optique","Fibre optique","Communication numerique","Electromagnetisme","Metrologie et capteur","Technique du vide",
"Chaine de mesure","Mecatronique","Propriete des materiaux","Photonique","Laser et interpherometrie","Fabrication mecanique","Robotique","Conception d'un prototype","Microfabrication","Optoelectronique","Acoustique applique","Projet final","Traitement analogique et numerique"
};

void setup() {
Serial.begin(9600);

  for(int i=0; i<25; i++)
  {
  Serial.print(String(i)+": "); Serial.println(cours[i]);
  }
}

void loop() {

}
