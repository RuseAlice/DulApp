//
// Created by gionson on 4/4/21.
//

#ifndef SMARTDROBE_HAINA_H
#define SMARTDROBE_HAINA_H

enum Culoare{Alb, Negru, Albastru, Verde, Galben, Rosu, Portocaliu, Bloemarin, Gri, Bej, Maro};
enum Stil{casual, sport, elegant, business, formal};
enum Material{poliester, bumbac, stofa, denim, matase, in, fas, lana};
class Haina {
    private string denumire;
    private Culoare culoare;
    private Stil stil;
    private Material material;
    private int nrPurtari=0;
    private bool disponibil;

    public string getDenumire(){return denumire;}
    public void setDenumire(string denumire){this.denumire=denumire;}
    public Culoare getCuloare(){return culoare;}
    public void setCuloare(Culoare culoare){this.culoare=culoare;}
    public Stil getStil(){return stil};
    public void setStil(Stil stil){this.stil=stil;}
    public Material getMaterial(){return material;}
    public void setMaterial(Material material){this->material=material;}
    public int getNrPurtari(){return nrPurtari;}
    public void setNrPurtari(int nr_purtari){this->nrPurtari=nr_purtari;}
    public bool getDisponibilitate(){return disponibil;}
    public void setDisponibilitate(bool disp){this->disponibil=disp;}
//comentariu

};


#endif //SMARTDROBE_HAINA_H
