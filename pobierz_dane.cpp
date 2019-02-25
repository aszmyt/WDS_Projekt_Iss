#include <QtGui>
#include <QMessageBox>
#include <QWebElement>
#include <QWebFrame>
#include <QMessageBox>
#include "pobierz_dane.h"

PobierzDane::PobierzDane(QWidget *parent) : QWidget(parent){
  setupUi(this);

  connect(wyjscie,SIGNAL(clicked()),this,SLOT(close()));

  webView = new QWebView;
  QWebSettings * globalSettings = QWebSettings::globalSettings();
  globalSettings->setAttribute(QWebSettings::AutoLoadImages, false);
  //  globalSettings->setAttribute(QWebSettings::JavascriptEnabled, false);
  globalSettings->setAttribute(QWebSettings::JavaEnabled, false);
  globalSettings->setAttribute(QWebSettings::PluginsEnabled, false);
  globalSettings->setAttribute(QWebSettings::JavascriptCanOpenWindows, false);
  globalSettings->setAttribute(QWebSettings::JavascriptCanCloseWindows, false);
  globalSettings->setAttribute(QWebSettings::JavascriptCanAccessClipboard, false);
  globalSettings->setAttribute(QWebSettings::DeveloperExtrasEnabled, false);
  globalSettings->setAttribute(QWebSettings::SpatialNavigationEnabled, false);
  globalSettings->setAttribute(QWebSettings::PrintElementBackgrounds, false);

   odswiez->setEnabled(false);
   webView->load(QUrl("http://www.satflare.com/track.asp?q=25544#TOP"));

  connect(webView,SIGNAL(loadFinished(bool)),this,SLOT(zaladuj()));
 
}

void PobierzDane::zaladuj(){
  // webView->show();


  odswiez->setEnabled(true);
}


void PobierzDane::on_odswiez_clicked(){
  
  QWebElement strona=webView->page()->mainFrame()->documentElement().findFirst("td[id=DisplayEventTime]");
QWebElement strona1=webView->page()->mainFrame()->documentElement().findFirst("td[id=DisplayWorkingSatLatitude]");
QWebElement strona2=webView->page()->mainFrame()->documentElement().findFirst("td[id=DisplayWorkingSatLongitude]");
QWebElement strona3=webView->page()->mainFrame()->documentElement().findFirst("td[id=DisplayWorkingSatAltitude]");
QWebElement strona4=webView->page()->mainFrame()->documentElement().findFirst("td[id=DisplayWorkingSatAzimuth]");
  



 QString scr,scr1,scr2,scr3,scr4;
 scr =  strona.toPlainText();
  scr1 =  strona1.toPlainText();
 scr2 =  strona2.toPlainText();
 scr3 =  strona3.toPlainText();
 scr4 =  strona4.toPlainText();
  lineEdit->setText(scr);
  
 lineEdit_2->setText(scr1);
 lineEdit_3->setText(scr2);
 lineEdit_4->setText(scr3);
 lineEdit_5->setText(scr4);
  

}


