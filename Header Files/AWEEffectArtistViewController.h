//
//     Generated by private class-dump
//

@class UIView, NSString, AWEUserProfileEventCommonParamsHandler, AWEProfileTipView, AWEUserModel, AWEUILoadingView, UICollectionView, AWEEffectArtistDataController, UILabel;
@protocol AWEUserProfileTabVCDelegate;

@interface AWEEffectArtistViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEEffectArtistCellLongPressFunctionDelegate, AWEUserProfileTabBaseMethod> {
    BOOL _isCurrentUser;
    BOOL _fromHomePage;
    BOOL _hideData;
    BOOL _shouldShowprofileTipView;
    UICollectionView *_collectionView;
    NSString *_referString;
    id<AWEUserProfileTabVCDelegate> _userDelegate;
    AWEUserProfileEventCommonParamsHandler *_eventCommonParamsHandler;
    AWEEffectArtistDataController *_dataController;
    NSString *_userID;
    NSString *_secUserID;
    AWEUILoadingView *_loadingView;
    UILabel *_emptyLabel;
    AWEUserModel *_targetUser;
    AWEProfileTipView *_effectProfileTipView;
    UIView *_topGradientView;
    struct CGPoint { double x; double y; } _savedContentOffset;
}

@property (retain, nonatomic) AWEEffectArtistDataController *dataController;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (retain, nonatomic) AWEUserModel *targetUser;
@property (retain, nonatomic) AWEProfileTipView *effectProfileTipView;
@property (nonatomic) BOOL shouldShowprofileTipView;
@property (nonatomic) struct CGPoint { double x; double y; } savedContentOffset;
@property (retain, nonatomic) UIView *topGradientView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL fromHomePage;
@property (weak, nonatomic) id<AWEUserProfileTabVCDelegate> userDelegate;
@property (nonatomic) BOOL hideData;
@property (retain, nonatomic) AWEUserProfileEventCommonParamsHandler *eventCommonParamsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (id)referString;
- (void)setReferString:(id)arg0;
- (void)setDataController:(id)arg0;
- (double)contentOffsetY;
- (void)loadMoreData;
- (BOOL)shouldHideNoMoreText;
- (void)p_setUpUI;
- (id)userDelegate;
- (void)p_refreshData;
- (BOOL)fromHomePage;
- (BOOL)hideData;
- (void)adjustContentOffset:(struct CGPoint { double x0; double x1; })arg0 animated:(BOOL)arg1;
- (double)contentSizeHeight;
- (void)setFromHomePage:(BOOL)arg0;
- (void)setUserDelegate:(id)arg0;
- (void)setHideData:(BOOL)arg0;
- (void)setTargetUser:(id)arg0;
- (void)setSavedContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })savedContentOffset;
- (void)_startTimingForTrack;
- (void)_trackEventForStayTime;
- (void)p_trackTabAppear;
- (void)p_endRefreshingWithMore:(BOOL)arg0 list:(id)arg1 error:(id)arg2;
- (id)eventCommonParamsHandler;
- (void)setEventCommonParamsHandler:(id)arg0;
- (void)pinToTopCurrentEffectModel:(id)arg0;
- (void)hiddenCurrentEffectModel:(id)arg0;
- (void)removeEffectCoverCurrentEffectModel:(id)arg0;
- (void)p_buildEffectTipViewIfNeeded;
- (void)setShouldShowprofileTipView:(BOOL)arg0;
- (BOOL)shouldShowprofileTipView;
- (id)effectProfileTipView;
- (void)p_trackProfileTipViewIsShow:(BOOL)arg0;
- (id)p_getConfigedEffectCellAtIndexPath:(id)arg0;
- (void)p_trackPinToTopActionWithModel:(id)arg0;
- (void)p_trackHiddenActionWithModel:(id)arg0;
- (void)p_closeEffectProfileTipView;
- (id)initWithUserID:(id)arg0 secUserID:(id)arg1 targetUser:(id)arg2;
- (void)setEffectProfileTipView:(id)arg0;
- (id)userID;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (void)viewDidAppear:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)setUserID:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setCollectionView:(id)arg0;
- (void)reloadData;
- (void)applicationWillResignActive;
- (void)scrollViewDidScroll:(id)arg0;
- (id)contentView;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:(BOOL)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)dataController;
- (void)refreshData;
- (double)footerInset;
- (id)topGradientView;
- (void)setTopGradientView:(id)arg0;
- (id)targetUser;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg0;

@end
