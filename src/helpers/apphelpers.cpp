#include "apphelpers.h"

namespace AppHelpers
{

    void setRowColor(QTreeWidgetItem *item, bool enabled)
    {
        QColor colEnabled(200, 255, 200);
        QColor colDisabled(255, 220, 220);

        QColor bg = enabled ? colEnabled : colDisabled;

        for (int c = 0; c < item->columnCount(); ++c)
            item->setBackground(c, bg);
    }

    QColor toPastel(const QColor &c)
    {

        int r = (c.red() + 255) / 2;
        int g = (c.green() + 255) / 2;
        int b = (c.blue() + 255) / 2;
        QColor pastel;
        pastel.setRgb(r, g, b);
        return pastel;
    }

}
