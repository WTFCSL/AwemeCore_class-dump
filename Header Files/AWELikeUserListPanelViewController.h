//
//     Generated by private class-dump
//

@class AWELikeListDataController, NSString, UIView, AWEUserListPanelHeaderView, NSArray, AWEUILoadingView, UITableView, MASConstraint, UIPanGestureRecognizer, UILabel;
@protocol AWECommentGesProtocol;

@interface AWELikeUserListPanelViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, AWELikeUserListPanelViewControllerProtocol> {
    BOOL _isShowing;
    BOOL _fromCommentVC;
    BOOL _isBGColorWhite;
    BOOL _isShowInContainerView;
    BOOL _hasRefreshed;
    BOOL _isFamiliarItemAwemeModel;
    BOOL _shouldSkipSlideTrack;
    BOOL _isAnimating;
    BOOL _hideTabbarByCommentVC;
    id<AWECommentGesProtocol> _gesDelegate;
    UITableView *_tableView;
    NSString *_referString;
    NSString *_accountType;
    long long _currentAwemeItemUserFollowStatus;
    NSArray *_insertLikerIDs;
    id /* block */ _didDismissBlock;
    UIView *_bottomCoverView;
    UIView *_effectView;
    AWEUserListPanelHeaderView *_headerView;
    AWEUILoadingView *_loadingView;
    UILabel *_errorLabel;
    MASConstraint *_baseViewBottom;
    double _baseViewBottomOffset;
    MASConstraint *_baseViewTop;
    MASConstraint *_baseViewHeight;
    UIView *_tabbarSnapshot;
    UILabel *_emptyLabel;
    UILabel *_bottomPrivacyActionLabel;
    AWELikeListDataController *_dataController;
    UIView *_baseView;
    UIPanGestureRecognizer *_panGes;
    struct CGPoint { double x; double y; } _lastLocation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *bottomCoverView;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) AWEUserListPanelHeaderView *headerView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UILabel *errorLabel;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (retain, nonatomic) MASConstraint *baseViewBottom;
@property (nonatomic) double baseViewBottomOffset;
@property (retain, nonatomic) MASConstraint *baseViewTop;
@property (retain, nonatomic) MASConstraint *baseViewHeight;
@property (nonatomic) BOOL hideTabbarByCommentVC;
@property (retain, nonatomic) UIView *tabbarSnapshot;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (retain, nonatomic) UILabel *bottomPrivacyActionLabel;
@property (retain, nonatomic) AWELikeListDataController *dataController;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (weak, nonatomic) id<AWECommentGesProtocol> gesDelegate;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL fromCommentVC;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL isBGColorWhite;
@property (nonatomic) BOOL isShowInContainerView;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *accountType;
@property (nonatomic) BOOL hasRefreshed;
@property (nonatomic) BOOL isFamiliarItemAwemeModel;
@property (nonatomic) BOOL shouldSkipSlideTrack;
@property (nonatomic) long long currentAwemeItemUserFollowStatus;
@property (copy, nonatomic) NSArray *insertLikerIDs;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)dismissWithAnimated:(BOOL)arg0;
- (id)insertLikerIDs;
- (void)setInsertLikerIDs:(id)arg0;
- (id /* block */)didDismissBlock;
- (void)setDidDismissBlock:(id /* block */)arg0;
- (void)dismissWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setIsShowing:(BOOL)arg0;
- (void)setReferString:(id)arg0;
- (void)setDataController:(id)arg0;
- (void)onUIThemeChange;
- (void)setIsBGColorWhite:(BOOL)arg0;
- (void)setIsShowInContainerView:(BOOL)arg0;
- (void)setGesDelegate:(id)arg0;
- (void)setShouldSkipSlideTrack:(BOOL)arg0;
- (void)setFromCommentVC:(BOOL)arg0;
- (BOOL)hasRefreshed;
- (BOOL)shouldSkipSlideTrack;
- (id)gesDelegate;
- (BOOL)fromCommentVC;
- (BOOL)isBGColorWhite;
- (BOOL)isShowInContainerView;
- (void)setHasRefreshed:(BOOL)arg0;
- (BOOL)isFamiliarItemAwemeModel;
- (void)setIsFamiliarItemAwemeModel:(BOOL)arg0;
- (long long)currentAwemeItemUserFollowStatus;
- (void)setCurrentAwemeItemUserFollowStatus:(long long)arg0;
- (id)initWithUserList:(id)arg0 awemeModel:(id)arg1 requestData:(BOOL)arg2;
- (void)showOnView:(id)arg0 animated:(BOOL)arg1;
- (void)closeBtnClicked:(id)arg0;
- (id)panGes;
- (void)setPanGes:(id)arg0;
- (void)p_setupUI;
- (void)selfPanned:(id)arg0;
- (void)selfTapped:(id)arg0;
- (void)setBaseViewBottom:(id)arg0;
- (void)setBaseViewBottomOffset:(double)arg0;
- (double)baseViewBottomOffset;
- (id)baseViewBottom;
- (void)p_endRefreshing;
- (void)p_addNotification;
- (void)p_loadMoreData;
- (void)p_highlightInsertedUsers;
- (void)p_setupFooter;
- (id)p_indexPathForUserID:(id)arg0;
- (void)p_endRefreshingWithError:(id)arg0 isRefresh:(BOOL)arg1;
- (id)p_labelFont;
- (id)p_labelTextColor;
- (id)p_maskLayerWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)baseViewTop;
- (id)bottomCoverView;
- (void)setBaseViewTop:(id)arg0;
- (double)p_panelHeight;
- (void)setBaseViewHeight:(id)arg0;
- (void)p_refreshUI;
- (void)setBottomCoverView:(id)arg0;
- (id)baseViewHeight;
- (void)setTabbarHiddenIfNeed:(BOOL)arg0;
- (BOOL)hideTabbarByCommentVC;
- (void)setTabbarSnapshot:(id)arg0;
- (void)setHideTabbarByCommentVC:(BOOL)arg0;
- (id)tabbarSnapshot;
- (void)onAwemeDiggChanged:(id)arg0;
- (id)bottomPrivacyActionLabel;
- (id)p_actionLabelColor;
- (void)p_setupBottomPrivacyActionLabel:(BOOL)arg0;
- (void)tapBottomPrivacyActionLabel;
- (void)setBottomPrivacyActionLabel:(id)arg0;
- (BOOL)isAnimating;
- (void)dismiss;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (id)effectView;
- (void)setTableView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (struct CGPoint { double x0; double x1; })lastLocation;
- (BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)baseView;
- (void)setLastLocation:(struct CGPoint { double x0; double x1; })arg0;
- (id)accountType;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)isShowing;
- (void)setHeaderView:(id)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)setEffectView:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setBaseView:(id)arg0;
- (void)setAccountType:(id)arg0;
- (id)headerView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setIsAnimating:(BOOL)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)dataController;
- (void)refreshData;
- (id)errorLabel;
- (void)setErrorLabel:(id)arg0;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg0;

@end