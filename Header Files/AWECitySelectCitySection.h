//
//     Generated by private class-dump
//

@class AWEFirstLetterAndCitiesModel;

@interface AWECitySelectCitySection : AWECitySelectSection {
    BOOL _shouldShowL3;
    AWEFirstLetterAndCitiesModel *_model;
}

@property (retain, nonatomic) AWEFirstLetterAndCitiesModel *model;
@property (nonatomic) BOOL shouldShowL3;

- (id)viewForHeader;
- (BOOL)shouldShowL3;
- (void)clickedAtIndexPath:(id)arg0;
- (void)setShouldShowL3:(BOOL)arg0;
- (unsigned long long)numberOfItems;
- (void)setModel:(id)arg0;
- (void)setTableView:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)cellForIndexPath:(id)arg0;
- (double)heightForHeader;

@end