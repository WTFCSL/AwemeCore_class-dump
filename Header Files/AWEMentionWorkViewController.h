//
//     Generated by private class-dump
//

@class AWEUserWorkCellViewModelPool, NSString, UICollectionView, AWEFeedRefreshFooter, AWEUserMentionDataController, AWEUserModel, AWEUILoadingView;
@protocol AWEUserProfileTabVCDelegate, AWEMentionWorkContainerContentProtocol;

@interface AWEMentionWorkViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate, UICollectionViewDelegateFlowLayout, AWEZoomTransitionOuterContextProvider, AWEUserProfileTabBaseMethod> {
    BOOL _isCurrentUser;
    BOOL _isInTabContainer;
    BOOL _isFromUserHomePage;
    id<AWEUserProfileTabVCDelegate> _delegate;
    id<AWEMentionWorkContainerContentProtocol> _mentionContainerContentDelegate;
    id /* block */ _requestDataCompletionBlock;
    NSString *_userID;
    NSString *_secUserID;
    AWEUserModel *_targetUser;
    UICollectionView *_collectionView;
    AWEFeedRefreshFooter *_footer;
    AWEUserMentionDataController *_dataController;
    AWEUILoadingView *_loadingView;
    long long _minShowLineCount;
    AWEUserWorkCellViewModelPool *_viewModelPool;
}

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (retain, nonatomic) AWEUserModel *targetUser;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEFeedRefreshFooter *footer;
@property (retain, nonatomic) AWEUserMentionDataController *dataController;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) long long minShowLineCount;
@property (retain, nonatomic) AWEUserWorkCellViewModelPool *viewModelPool;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL isInTabContainer;
@property (nonatomic) BOOL isFromUserHomePage;
@property (weak, nonatomic) id<AWEUserProfileTabVCDelegate> delegate;
@property (weak, nonatomic) id<AWEMentionWorkContainerContentProtocol> mentionContainerContentDelegate;
@property (copy, nonatomic) id /* block */ requestDataCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (id)zoomTransitionStartViewForOffset:(long long)arg0;
- (void)setDataController:(id)arg0;
- (double)contentOffsetY;
- (double)numberOfCellsPerRow;
- (void)adjustContentOffset:(struct CGPoint { double x0; double x1; })arg0 animated:(BOOL)arg1;
- (double)contentSizeHeight;
- (void)setTargetUser:(id)arg0;
- (void)updateLoadingViewFrame;
- (id)viewModelPool;
- (BOOL)isInTabContainer;
- (BOOL)needAutoLoadMore:(id)arg0;
- (void)loadMoreData:(BOOL)arg0;
- (void)endRefreshingWithMore:(BOOL)arg0 error:(id)arg1 list:(id)arg2 isPreload:(BOOL)arg3 beginDate:(id)arg4;
- (id /* block */)requestDataCompletionBlock;
- (long long)minShowLineCount;
- (void)setMinShowLineCount:(long long)arg0;
- (void)refreshDataIfNeed;
- (BOOL)isFromUserHomePage;
- (void)setIsInTabContainer:(BOOL)arg0;
- (void)setIsFromUserHomePage:(BOOL)arg0;
- (void)setRequestDataCompletionBlock:(id /* block */)arg0;
- (void)setViewModelPool:(id)arg0;
- (id)initWithUserID:(id)arg0 secUserID:(id)arg1 targetUser:(id)arg2;
- (void)dynamicCoverSettingsChanged:(id)arg0;
- (void)setMentionContainerContentDelegate:(id)arg0;
- (id)mentionContainerContentDelegate;
- (id)userID;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)setFooter:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(long long)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void)viewDidAppear:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (double)screenWidth;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)setUserID:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg0;
- (id)contentView;
- (id)footer;
- (id)delegate;
- (double)screenHeight;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (double)cellWidth;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:(BOOL)arg0;
- (void)setupUI;
- (double)cellHeight;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)dataController;
- (void)refreshData;
- (id)targetUser;

@end