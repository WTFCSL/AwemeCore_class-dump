//
//     Generated by private class-dump
//

@class AWECityModel;

@interface AWECitySelectCurrentSection : AWECitySelectSection {
    BOOL _showL2Only;
    AWECityModel *_currentCity;
}

@property (nonatomic) BOOL showL2Only;
@property (retain, nonatomic) AWECityModel *currentCity;

- (id)viewForHeader;
- (void)clickedAtIndexPath:(id)arg0;
- (BOOL)showL2Only;
- (id)initWithTableView:(id)arg0 appearance:(id)arg1 disable:(BOOL)arg2 showL2Only:(BOOL)arg3 pageType:(long long)arg4;
- (void)setShowL2Only:(BOOL)arg0;
- (unsigned long long)numberOfItems;
- (void)setTableView:(id)arg0;
- (void).cxx_destruct;
- (id)cellForIndexPath:(id)arg0;
- (double)heightForHeader;
- (id)currentCity;
- (void)setCurrentCity:(id)arg0;

@end
