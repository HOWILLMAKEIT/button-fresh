#ifndef WINMAXBUTTON_H
#define WINMAXBUTTON_H

#include "interactivebuttonbase.h"
#include<QPainterPath>
class WinMaxButton : public InteractiveButtonBase
{
public:
    WinMaxButton(QWidget* parent = nullptr);

protected:
    void paintEvent(QPaintEvent*event);
};

#endif // WINMAXBUTTON_H
