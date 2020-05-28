#include "Banner.h"
#include <QPixmap>
#include <QTimer>

namespace
{
    QPixmap getBanner()
    {
        return QPixmap(":/img/banner.png");
    }
}

Banner::Banner()
    : QSplashScreen(getBanner())
{
    resize(Banner::BANNER_WIDTH, Banner::BANNER_HEIGHT);
}

void Banner::presentBanner()
{
    show();
    QTimer::singleShot(5000, [this](){
        this->hideBanner();
    });
}

void Banner::hideBanner()
{
    close();
}
