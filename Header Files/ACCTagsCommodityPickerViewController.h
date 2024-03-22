//
//     Generated by private class-dump
//

@class NSArray, NSMutableArray, ACCTagsListDataController;

@interface ACCTagsCommodityPickerViewController : ACCTagsItemPickerViewController {
    NSMutableArray *_commodities;
    ACCTagsListDataController *_dataController;
    NSArray *_recommendCommodities;
}

@property (retain, nonatomic) NSMutableArray *commodities;
@property (retain, nonatomic) ACCTagsListDataController *dataController;
@property (copy, nonatomic) NSArray *recommendCommodities;

- (void)setDataController:(id)arg0;
- (void)loadMoreWithKeyword:(id)arg0 completion:(id /* block */)arg1;
- (void)searchWithKeyword:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchRecommendData;
- (id)tagTypeString;
- (void)restoreRecommendData;
- (id)searchBarPlaceHolder;
- (id)emptyResultText;
- (id)itemTrackerParamsForItemAtIndexPath:(id)arg0;
- (id)tagModelForIndexPath:(id)arg0;
- (id)recommendCommodities;
- (void)setRecommendCommodities:(id)arg0;
- (void)setCommodities:(id)arg0;
- (id)commodities;
- (BOOL)needFooter;
- (id)dataSource;
- (id)headerText;
- (void).cxx_destruct;
- (long long)type;
- (Class)cellClass;
- (double)headerHeight;
- (id)itemTitle;
- (long long)indexOfItem:(id)arg0;
- (id)cellIdentifier;
- (double)cellHeight;
- (id)dataController;

@end
