#ifndef STYLE_CUSTOM_H
#define STYLE_CUSTOM_H

#include <QProxyStyle>

class QStyleCustomPrivate;
class QStyleCustom : public QProxyStyle
{
    Q_OBJECT
    Q_DECLARE_PRIVATE(QStyleCustom)

public:
    QStyleCustom();
    ~QStyleCustom();

    void drawPrimitive (PrimitiveElement element, const QStyleOption *option,
                        QPainter *painter, const QWidget *widget) const override;

    void drawControl (ControlElement element, const QStyleOption *option, QPainter *painter,
                      const QWidget *widget) const override;

protected:
    QStyleCustom(QStyleCustomPrivate &dd);
    QStyleCustomPrivate *d_ptr;
};

#endif // STYLE_CUSTOM_H
