#ifndef TOOL_SELECTOR_H
#define TOOL_SELECTOR_H

#include <QWidget>
#include <QVBoxLayout>
#include <QQuickWidget>

class ToolSelector : public QWidget
{
    Q_OBJECT

public:
    ToolSelector(QWidget *parent = nullptr);

private:
    QVBoxLayout *m_layout;
    QQuickWidget *m_custom;
};

#endif
