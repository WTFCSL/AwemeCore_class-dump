//
//     Generated by private class-dump
//

@protocol AWEMixVideoDetailInformationViewDelegate <NSObject>

@optional

- (id)currentAwemeModel;
- (void)scrollViewDidShowNav:(BOOL)arg0;
- (void)mixVideoListDidClickTabIsVideo:(BOOL)arg0;
- (void)syncFromDataController:(id)arg0;
- (BOOL)needLocatedAlignment;
- (void)loadMoreMixVideoListWithNoData:(BOOL)arg0 listArray:(id)arg1;
- (void)requestMixVideoListWithNoData:(BOOL)arg0 listArray:(id)arg1;
- (void)mixVideoPanelListDidSelectAtIndex:(long long)arg0 aweme:(id)arg1;
- (void)collectionLabelClicked;
- (void)requestMixVideoListWithNoData:(BOOL)arg0;
- (void)mixVideoDetailListViewRefreshData;
- (void)setupEnterMethodFromMoreMixClicked:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;

@end