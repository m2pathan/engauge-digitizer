/******************************************************************************************************
 * (C) 2014 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#ifndef DLG_EQUATIONS_H
#define DLG_EQUATIONS_H

#include <QDialog>

class Equation;
class QHBoxLayout;
class QSplitter;
class QVBoxLayout;

/// This dialog lets the user apply curve fitting to a set of equations to fit the currently active equation.
/// This dialog does not work for a relation. The philosophy is - keep the interface so simple that anybody 
/// (even someone without math skills) can use this. The assumption is that math experts will use their
/// own toolkits of choice, like Excel, R, and so on.
class DlgEquations : public QDialog
{
  Q_OBJECT;

 public:
  /// Single constructor
  DlgEquations();

 private:
  
  // Display equation getting fitted
  Equation *m_equation;

  // Display curve and fitted equation
  //  GraphicsScene *m_scene;
  //  GraphicsView *m_view;

  // Splitter for equation and curve graph
  QSplitter *m_splitter;

  // Overall layout is QVBoxLayout, with QHBoxLayout on the non-button controls, and another QHBoxLayout for the buttons
  QVBoxLayout *m_layoutOverall;
  QHBoxLayout *m_layoutNonButtons;
};

#endif // DLG_EQUATIONS_H
