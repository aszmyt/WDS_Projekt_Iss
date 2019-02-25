#include <QApplication>
#include <QWidget>
#include "pobierz_dane.h"

int main(int argc,char * argv[]){
  QApplication app(argc,argv);

 
  PobierzDane *widget = new PobierzDane;


  widget->show();


  return app.exec();
}
