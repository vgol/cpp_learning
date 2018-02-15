#include <iostream>
#include "advertising.h"


int main()
{
    ads::Ads adsStat {};

    std::cout << "Enter how many ads was shown to users: ";
    std::cin >> adsStat.adsShown;

    std::cout << "Enter percentage of clicked ads: ";
    std::cin >> adsStat.adsClicked;

    std::cout << "Enter average earn from clicked ads: ";
    std::cin >> adsStat.averageProfitPerClickedAds;

    ads::printStatistic(adsStat);
}

void ads::printStatistic(ads::Ads stat)
{
    std::cout << "Ads shown: " << stat.adsShown << "\n"
              << "Percentage of clicked Ads: " << stat.adsClicked << "\n"
              << "Average earn from clicked ads: " << stat.averageProfitPerClickedAds << "\n"
              << "Day's profit: " << ads::getProfitOfTheDay(stat) << "\n";
}

double ads::getProfitOfTheDay(Ads stat)
{
    return stat.adsShown * stat.adsClicked * stat.averageProfitPerClickedAds;
}