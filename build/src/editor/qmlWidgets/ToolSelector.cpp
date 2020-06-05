#include "ToolSelector.h"

ToolSelector::ToolSelector(QWidget *parent)
    : QWidget(parent)
{
    m_layout = new QVBoxLayout(this);
    m_custom = new QQuickWidget(this);
    m_layout->addWidget(m_custom);
    m_layout->setContentsMargins(0,0,0,0);
    m_custom->setSource(QUrl("qrc:/qml/TestBlock.qml"));
    m_custom->setResizeMode(QQuickWidget::SizeRootObjectToView);
}
