#ifndef BUTTON_STYLE_H
#define BUTTON_STYLE_H

#include <QWidget>
#include <QProxyStyle>
#include <QPalette>

QT_BEGIN_NAMESPACE
class QPainterPath;
QT_END_NAMESPACE

class button_style : public QProxyStyle
{
    Q_OBJECT

public:
    button_style();

    QPalette standardPalette() const override;


    void polish(QWidget *widget) override;
    void unpolish(QWidget *widget) override;
    int pixelMetric(PixelMetric metric, const QStyleOption *option,
                    const QWidget *widget) const override;
    int styleHint(StyleHint hint, const QStyleOption *option,
                  const QWidget *widget, QStyleHintReturn *returnData) const override;

    void drawPrimitive(PrimitiveElement element, const QStyleOption *option,
                       QPainter *painter, const QWidget *widget) const override;

    void drawControl(ControlElement control, const QStyleOption *option,
                     QPainter *painter, const QWidget *widget) const override;

private:
    static QPainterPath roundRectPath(const QRect &rect);
    mutable QPalette m_standardPalette;
};

#endif // BUTTON_STYLE_H
