#include <QSplashScreen>

class Banner : public QSplashScreen
{
public:
    enum BannerValues
    {
        BANNER_HEIGHT = 400,
        BANNER_WIDTH = 640
    };

    Banner();
    void presentBanner();
    void hideBanner();
};
