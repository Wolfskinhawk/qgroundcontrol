/****************************************************************************
 *
 *   (c) 2009-2016 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

#pragma once

#include <QAbstractListModel>

#include "Fact.h"

/// Provides a list model of values for incrementing/decrementing the value of a Fact
class FactValueSliderListModel : public QAbstractListModel
{
    Q_OBJECT
    
public:
    FactValueSliderListModel(Fact& fact, QObject* parent = NULL);
    ~FactValueSliderListModel();

    Q_INVOKABLE int resetInitialValue(void);
    Q_INVOKABLE double valueAtModelIndex(int index);
    Q_INVOKABLE int valueIndexAtModelIndex(int index);

private:
    // Overrides from QAbstractListModel
    int	rowCount(const QModelIndex & parent = QModelIndex()) const override;
    QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const override;
    QHash<int, QByteArray> roleNames(void) const override;

    Fact&   _fact;
    int     _cValues;
    int     _firstValueIndexInWindow;
    int     _initialValueIndex;
    int     _cPrevValues;
    int     _cNextValues;
    int     _windowSize;
    double  _initialValue;
    double  _initialValueRounded;
    double  _increment;

    static const int _valueRole;
    static const int _valueIndexRole;
};
