#ifndef CPP_LEARNING_ADVERTISING_H
#define CPP_LEARNING_ADVERTISING_H

namespace ads
{

struct Ads
{
    int adsShown = 0;
    double adsClicked = 0.0;
    double averageProfitPerClickedAds = 0.0;
};

void printStatistic(Ads stat);
double getProfitOfTheDay(Ads stat);

} // ads


#endif //CPP_LEARNING_ADVERTISING_H
