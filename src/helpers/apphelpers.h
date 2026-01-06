#pragma once
#include <QTreeWidgetItem>
#include <QColor>
namespace AppHelpers
{
    void setRowColor(QTreeWidgetItem *item, bool enabled);
    QColor toPastel(const QColor &c);
}