//
//     Generated by private class-dump
//

@class AWEDCFeedSearchBarManager, UIView;

@interface AWEDCFeedTopAreaController : AWEDCFeedBaseController {
    UIView *_custormView;
    AWEDCFeedSearchBarManager *_searchBarManager;
    UIView *_separatorView;
}

@property (retain, nonatomic) UIView *custormView;
@property (retain, nonatomic) AWEDCFeedSearchBarManager *searchBarManager;
@property (retain, nonatomic) UIView *separatorView;

- (void)containerScrollViewDidScroll:(id)arg0;
- (id)containerViewModel;
- (void)containerViewWillAppear:(BOOL)arg0;
- (void)containerCollectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)onFetchListDataEndWithReason:(unsigned long long)arg0 response:(id)arg1 error:(id)arg2;
- (void)onLoadMoreListDataEndWithReason:(unsigned long long)arg0 response:(id)arg1 error:(id)arg2;
- (void)trigerSearchMagnifierClick;
- (id)topAreaConfig;
- (void)setSearchBarAlpha:(id)arg0;
- (void)showSeparatorView:(id)arg0;
- (void)setSearchBarPlaceHolderText:(id)arg0;
- (void)trigerSearchBarClick;
- (void)trigerSearchButtonClick;
- (void)trigerFetchGuessWord;
- (void)updateViewFrameIfNeededWithScrollView:(id)arg0;
- (void)setCustormView:(id)arg0;
- (id)custormView;
- (void)setSearchBarManager:(id)arg0;
- (id)searchBarManager;
- (void)setupNoti;
- (void).cxx_destruct;
- (void)setSeparatorView:(id)arg0;
- (id)separatorView;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewDidLoad;

@end
