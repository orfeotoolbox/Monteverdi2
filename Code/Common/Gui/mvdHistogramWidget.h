/*=========================================================================

  Program:   Monteverdi2
  Language:  C++


  Copyright (c) Centre National d'Etudes Spatiales. All rights reserved.
  See Copyright.txt for details.

  Monteverdi2 is distributed under the CeCILL licence version 2. See
  Licence_CeCILL_V2-en.txt or
  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt for more details.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
#ifndef __mvdHistogramWidget_h
#define __mvdHistogramWidget_h

//
// Configuration include.
//// Included at first position before any other ones.
#include "ConfigureMonteverdi2.h"


/*****************************************************************************/
/* INCLUDE SECTION                                                           */

//
// Qt includes (sorted by alphabetic order)
//// Must be included before system/custom includes.
#include <QtGui>

//
// System includes (sorted by alphabetic order)

//
// ITK includes (sorted by alphabetic order)

//
// OTB includes (sorted by alphabetic order)

//
// Monteverdi includes (sorted by alphabetic order)
#include "Core/mvdCore.h"

/*****************************************************************************/
/* PRE-DECLARATION SECTION                                                   */

//
// External classes pre-declaration.
namespace
{
}

class QwtPlot;
class QwtPlotGrid;
class QwtPlotCurve;

namespace mvd
{

//
// Internal classes pre-declaration.
namespace Ui
{
class HistogramWidget;
};


/*****************************************************************************/
/* CLASS DEFINITION SECTION                                                  */

/**
 * \class HistogramWidget
 *
 * \brief Widget template skeleton to copy-paste when adding a new
 * widget class.
 */
class Monteverdi2_EXPORT HistogramWidget :
    public QWidget
{

  /*-[ QOBJECT SECTION ]-----------------------------------------------------*/

  Q_OBJECT;

  /*-[ PUBLIC SECTION ]------------------------------------------------------*/

//
// Public constants

//
// Public methods.
public:

  /** \brief Constructor. */
  HistogramWidget( QWidget* parent =NULL, Qt::WindowFlags flags =0 );

  /** \brief Destructor. */
  virtual ~HistogramWidget();

  /**
   * \brief 
   */
  void SetData( RgbwChannel channel,
		double * const x,
		double * const y,
		size_t size );

  /*-[ PUBLIC SLOTS SECTION ]------------------------------------------------*/

//
// Public SLOTS.
public slots:

  /*-[ SIGNALS SECTION ]-----------------------------------------------------*/

//
// Signals.
signals:

  /*-[ PROTECTED SECTION ]---------------------------------------------------*/

//
// Protected methods.
protected:

  /*-[ PRIVATE SECTION ]-----------------------------------------------------*/

//
// Protected attributes.
protected:

//
// Private methods.
private:

//
// Private attributes.
private:
  /**
   * \brief 
   */
  static const CountType CURVE_COUNT = 3;

  /**
   */
  static const char* CURVE_NAMES[ HistogramWidget::CURVE_COUNT ];

  /**
   */
  static const QColor CURVE_COLORS[ HistogramWidget::CURVE_COUNT ];

  /**
   * \brief uic generated.
   */
  Ui::HistogramWidget* m_UI;

  /**
   */
  QwtPlotGrid* m_PlotGrid;

  /**
   * \brief
   */
  QwtPlotCurve* m_PlotCurves[ CURVE_COUNT ];

  /*-[ PRIVATE SLOTS SECTION ]-----------------------------------------------*/

//
// Slots.
private slots:
};

} // end namespace 'mvd'

/*****************************************************************************/
/* INLINE SECTION                                                            */

namespace mvd
{
} // end namespace 'mvd'

#endif // __mvdHistogramWidget_h