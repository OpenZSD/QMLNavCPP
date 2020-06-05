#include "ToolSelectionBar.h"
#include <QQuickItem>
#include <QDebug>

ToolSelectionBar::ToolSelectionBar(QWidget *parent)
    : QQuickWidget(parent)
{
    setSource(QUrl("qrc:/qml/SectionList.qml"));
    auto *root = rootObject();
    setResizeMode(QQuickWidget::SizeRootObjectToView	);
}
