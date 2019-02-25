#ifndef POBIERZ_DANE_H
#define POBIERZ_DANE_H

#include <QWidget>
#include <QWebView>

#include "ui_pobierz_dane.h"

class QWebView;

class PobierzDane : public QWidget, public Ui::PobierzDane{

  Q_OBJECT

    public:
  PobierzDane(QWidget *parent = 0);




  private slots:
  void on_odswiez_clicked();
  void zaladuj();


 private:
  QWebView *webView;




};

#endif
