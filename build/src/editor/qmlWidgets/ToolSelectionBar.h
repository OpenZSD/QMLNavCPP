#ifndef TOOL_SELECTION_BAR_H
#define TOOL_SELECTION_BAR_H

#include <QQuickWidget>
#include <QWidget>
#include <QObject>

class ToolSelectionBar : public QQuickWidget
{
    Q_OBJECT

public:
    ToolSelectionBar(QWidget *parent = nullptr);
protected:
    //virtual void resizeEvent(QResizeEvent *event) override;
};

#endif
