//
//     Generated by private class-dump
//

@class IESLiveSearchListDataManager, NSString, UICollectionView, TabResponse, UIView, UILabel, IESLiveWebpLoadingView;
@protocol IESLiveSquareService, IESLiveContainerRouter, IESLiveReturnBackRouter;

@interface IESLiveSearchResultFeedViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {
    BOOL _fromDefaultWord;
    IESLiveWebpLoadingView *_centerLoadingIndicator;
    UICollectionView *_collectionView;
    UIView *_blankView;
    UILabel *_blankTitle;
    UIView *_searchBlankView;
    UIView *_frequencyLoginView;
    UIView *_frequencyView;
    UIView *_netErrorView;
    IESLiveSearchListDataManager *_listDataManager;
    id<IESLiveReturnBackRouter> _returnRouter;
    id<IESLiveContainerRouter> _containerRouter;
    id<IESLiveSquareService> _squareService;
    NSString *_keyword;
    NSString *_enterMethod;
    TabResponse *_tabModel;
    double _minimumLineSpacing;
    double _minimumInteritemSpacing;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _sectionInset;
}

@property (weak, nonatomic) IESLiveWebpLoadingView *centerLoadingIndicator;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *blankView;
@property (retain, nonatomic) UILabel *blankTitle;
@property (retain, nonatomic) UIView *searchBlankView;
@property (retain, nonatomic) UIView *frequencyLoginView;
@property (retain, nonatomic) UIView *frequencyView;
@property (retain, nonatomic) UIView *netErrorView;
@property (retain, nonatomic) IESLiveSearchListDataManager *listDataManager;
@property (retain, nonatomic) id<IESLiveReturnBackRouter> returnRouter;
@property (retain, nonatomic) id<IESLiveContainerRouter> containerRouter;
@property (weak, nonatomic) id<IESLiveSquareService> squareService;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL fromDefaultWord;
@property (retain, nonatomic) TabResponse *tabModel;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)netErrorView;
- (void)setNetErrorView:(id)arg0;
- (id)blankView;
- (void)setBlankView:(id)arg0;
- (id)containerRouter;
- (void)setContainerRouter:(id)arg0;
- (void)setTabModel:(id)arg0;
- (id)tabModel;
- (id)returnRouter;
- (void)setReturnRouter:(id)arg0;
- (id)initWithTabModel:(id)arg0;
- (void)goLogin;
- (id)squareService;
- (BOOL)isNewFeedDrawStyle;
- (void)setSquareService:(id)arg0;
- (void)configBlankView;
- (void)configSearchBlankView;
- (void)configFrequencyLoginView;
- (void)configFrequencyView;
- (void)configNetErrorView;
- (id)listDataManager;
- (void)setSearchBlankView:(id)arg0;
- (void)setBlankTitle:(id)arg0;
- (id)searchBlankView;
- (void)refreshSearchBlankViewContrains;
- (void)setFrequencyLoginView:(id)arg0;
- (id)frequencyLoginView;
- (void)fetchDataWithKeyWord:(id)arg0 enterMethod:(id)arg1;
- (void)setFrequencyView:(id)arg0;
- (void)noNetRetry;
- (BOOL)fromDefaultWord;
- (void)prepareForEnterLive:(id)arg0 enterBlock:(id /* block */)arg1;
- (void)setFromDefaultWord:(BOOL)arg0;
- (id)frequencyView;
- (void)showCenterLoading;
- (void)hideCenterLoading;
- (id)blankTitle;
- (void)showSearchBlankView;
- (void)hideSearchBlankView;
- (void)fetchDataWithKeyWord:(id)arg0 enterMethod:(id)arg1 defaultWord:(BOOL)arg2;
- (void)setCenterLoadingIndicator:(id)arg0;
- (id)centerLoadingIndicator;
- (void)hideCollectionView;
- (BOOL)haveResultData;
- (void)setListDataManager:(id)arg0;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(long long)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (void)viewDidLoad;
- (void)setMinimumInteritemSpacing:(double)arg0;
- (void)setMinimumLineSpacing:(double)arg0;
- (void)setSectionInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInset;
- (void)setKeyword:(id)arg0;
- (id)keyword;

@end
