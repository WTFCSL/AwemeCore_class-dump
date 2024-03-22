//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, NSDictionary, NSMutableDictionary, AWEFavoriteTagDataController, AWEFavoriteAwemeDataController, NSMutableSet, UITableView, AWEUILoadingView, UILabel, UIImageView;
@protocol AWEUserProfileTabVCDelegate;

@interface AWEFavoriteTableStyleViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEFavoriteCollectionViewInTableViewProtocol, AWERouterViewControllerProtocol, AWEUserProfileCollectionViewControllerProtocol> {
    BOOL _isInHomePage;
    BOOL _hasViewAppeared;
    BOOL _isRequesting;
    NSString *_referString;
    NSString *_enterMethod;
    NSDictionary *_logExtra;
    id<AWEUserProfileTabVCDelegate> _userDelegate;
    AWEFavoriteTagDataController *_dataController;
    UITableView *_tableView;
    AWEFavoriteAwemeDataController *_awemeDataController;
    NSString *_mixIDs;
    NSArray *_titleModels;
    NSMutableDictionary *_collecionCellShownFlag;
    NSMutableSet *_formatCellShownFlag;
    AWEUILoadingView *_loadingView;
    NSMutableDictionary *_viewControllerDictionary;
    UILabel *_topTipsLabel;
    UIImageView *_lockImageView;
    UIView *_topGradientView;
    NSString *_enter_fromReferString;
}

@property (retain, nonatomic) AWEFavoriteTagDataController *dataController;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEFavoriteAwemeDataController *awemeDataController;
@property (copy, nonatomic) NSString *mixIDs;
@property (retain, nonatomic) NSArray *titleModels;
@property (retain, nonatomic) NSMutableDictionary *collecionCellShownFlag;
@property (retain, nonatomic) NSMutableSet *formatCellShownFlag;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) NSMutableDictionary *viewControllerDictionary;
@property (nonatomic) BOOL hasViewAppeared;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) UILabel *topTipsLabel;
@property (retain, nonatomic) UIImageView *lockImageView;
@property (retain, nonatomic) UIView *topGradientView;
@property (copy, nonatomic) NSString *enter_fromReferString;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (weak, nonatomic) id<AWEUserProfileTabVCDelegate> userDelegate;
@property (nonatomic) BOOL isInHomePage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ requestDataCompletionBlock;

- (id)referString;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)setEnterMethod:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)enterMethod;
- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setReferString:(id)arg0;
- (void)awe_themeReload;
- (void)setDataController:(id)arg0;
- (void)setIsRequesting:(BOOL)arg0;
- (BOOL)isRequesting;
- (double)contentOffsetY;
- (void)p_setupUI;
- (id)userDelegate;
- (void)adjustContentOffset:(struct CGPoint { double x0; double x1; })arg0 animated:(BOOL)arg1;
- (double)contentSizeHeight;
- (void)setUserDelegate:(id)arg0;
- (id)topTipsLabel;
- (void)setTopTipsLabel:(id)arg0;
- (id)mixIDs;
- (void)setMixIDs:(id)arg0;
- (void)p_backBtnClicked:(id)arg0;
- (void)p_trackWithModel:(id)arg0 event:(id)arg1;
- (id)awemeDataController;
- (void)setAwemeDataController:(id)arg0;
- (id)p_paramsForTrackWithModel:(id)arg0;
- (void)p_trackForCollectionClick:(id)arg0;
- (void)p_trackFormatEvent:(id)arg0 formatModel:(id)arg1;
- (void)setIsInHomePage:(BOOL)arg0;
- (void)__refreshData;
- (BOOL)isInHomePage;
- (id)viewControllerDictionary;
- (void)setViewControllerDictionary:(id)arg0;
- (void)setEnter_fromReferString:(id)arg0;
- (void)__handleAWEFavoriteActionNotification:(id)arg0;
- (void)setCollecionCellShownFlag:(id)arg0;
- (void)setFormatCellShownFlag:(id)arg0;
- (void)setTitleModels:(id)arg0;
- (id)titleModels;
- (id)collecionCellShownFlag;
- (void)showHeaderContent:(BOOL)arg0;
- (id)__headerCell:(id)arg0 indexPath:(id)arg1;
- (void)p_trackForTitleShown:(unsigned long long)arg0;
- (void)__collectionView:(id)arg0 didSelectFavoriteTypeAwemeAtIndexPath:(id)arg1 dataList:(id)arg2;
- (void)__collectionView:(id)arg0 didSelectFavoriteTypeMusicAtIndexPath:(id)arg1 dataList:(id)arg2;
- (void)__collectionView:(id)arg0 didSelectFavoriteTypeMixAtIndexPath:(id)arg1 dataList:(id)arg2;
- (void)__collectionView:(id)arg0 didSelectFavoriteTypePOIAtIndexPath:(id)arg1 dataList:(id)arg2;
- (void)__collectionView:(id)arg0 didSelectFavoriteTypeGoodsAtIndexPath:(id)arg1 dataList:(id)arg2;
- (void)__collectionView:(id)arg0 didSelectFavoriteTypeMovieAtIndexPath:(id)arg1 dataList:(id)arg2;
- (void)__collectionView:(id)arg0 didSelectFavoriteTypeEffectsAtIndexPath:(id)arg1 dataList:(id)arg2;
- (void)__collectionView:(id)arg0 didSelectFavoriteTypeChallengeAtIndexPath:(id)arg1 dataList:(id)arg2;
- (void)__collectionView:(id)arg0 didSelectFavoriteTypePlayletAtIndexPath:(id)arg1 dataList:(id)arg2;
- (void)__collectionView:(id)arg0 didSelectFavoriteTypeBatManAtIndexPath:(id)arg1 dataList:(id)arg2;
- (void)__collectionView:(id)arg0 didSelectFavoriteTypeNovelAtIndexPath:(id)arg1 dataList:(id)arg2;
- (void)p_pushToNewViewControllerWithType:(unsigned long long)arg0;
- (void)p_trackForTitleClick:(unsigned long long)arg0;
- (id)enter_fromReferString;
- (void)p_trackForCollectionViewCellClick:(unsigned long long)arg0;
- (id)p_paramsForTrackWithModel:(id)arg0 isNearbyPOI:(BOOL)arg1;
- (id)p_enterFromWithType:(unsigned long long)arg0;
- (id)formatCellShownFlag;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 favoriteType:(unsigned long long)arg2 dataList:(id)arg3;
- (void)didClickTitleViewWithType:(unsigned long long)arg0;
- (void)didScrollToTailViewWithType:(unsigned long long)arg0;
- (void)trackForCollectionShowWithType:(unsigned long long)arg0 indexpath:(id)arg1 dataList:(id)arg2;
- (void)p_trackForCollectionViewCellShown:(unsigned long long)arg0;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg0;
- (id)contentView;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)dataController;
- (void)refreshData;
- (id)topGradientView;
- (void)setTopGradientView:(id)arg0;
- (BOOL)hasViewAppeared;
- (void)setHasViewAppeared:(BOOL)arg0;
- (id)lockImageView;
- (void)setLockImageView:(id)arg0;

@end
