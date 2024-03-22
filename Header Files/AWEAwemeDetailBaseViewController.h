//
//     Generated by private class-dump
//

@class NSDictionary, NSString, UITableViewCell, AWEAwemeModel, AWEAwemeDetailBottomBarCoordinator, AWEUserModel, UIView;
@protocol AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEGrootBottomViewProtocol, AWEAwemePlayInteractionLongPressDelegate, AWEPlayInteractionViewControllerProtocol, AWEFeedTableViewCellControllerPlayerDelegate, AWEFeedTableViewCellProtocol;

@interface AWEAwemeDetailBaseViewController : AWEAwemeBaseViewController <UIGestureRecognizerDelegate, AWEFeedRecordSpeciesTipViewProtocol, AWEFeedTableViewCellViewControllerProtocol> {
    BOOL _canShowBottomBarInListCell;
    long long _indexPath;
    UIView<AWEGrootBottomViewProtocol> *_grootSpeciesShootTipView;
    AWEUserModel *_homepageUser;
    AWEAwemeDetailBottomBarCoordinator *_bottomBarCoordinator;
}

@property (nonatomic) BOOL canShowBottomBarInListCell;
@property (retain, nonatomic) AWEAwemeDetailBottomBarCoordinator *bottomBarCoordinator;
@property (retain, nonatomic) UIView<AWEGrootBottomViewProtocol> *grootSpeciesShootTipView;
@property (retain, nonatomic) AWEUserModel *homepageUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEFeedTableViewCellControllerPlayerDelegate> playerDelegate;
@property (nonatomic) long long indexPath;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long type;
@property (readonly, nonatomic) id<AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEAwemePlayInteractionLongPressDelegate, AWEPlayInteractionViewControllerProtocol> interactionController;
@property (weak, nonatomic) UITableViewCell<AWEFeedTableViewCellProtocol> *superCell;
@property (copy, nonatomic) NSDictionary *extTrackLog;

+ (Class)aAWECommerceModuleServiceDOUYINHTSAdapterClass;

- (id)awemeModel;
- (void)updateCurrentAwemeModel:(id)arg0;
- (void)updateBottomBarWithAweme:(id)arg0 updateTiming:(long long)arg1;
- (void)setBottomBarHidden:(BOOL)arg0;
- (id)bottomBarCoordinator;
- (BOOL)canHandleGestureInCell:(id)arg0;
- (id)aAWECommerceModuleServiceDOUYINHTSAdapter;
- (void)cellWillDisplay:(id)arg0 forRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)addInteract;
- (id)currentBottomBarCoordinator;
- (BOOL)rootViewTapGestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (BOOL)getCanShowBottomBarInListCell;
- (void)setCanShowBottomBarInListCell:(BOOL)arg0;
- (void)updateByExchangeNotification:(id)arg0;
- (void)videoPrivacyChanged:(id)arg0;
- (void)trackAdModelShow;
- (BOOL)isFromGeneralSearchOrVideoSearch;
- (void)adTrackShowWithMonitorData:(id)arg0;
- (BOOL)enableXiGuaVideoInHotSpot;
- (BOOL)isFromChat;
- (id)grootSpeciesShootTipView;
- (BOOL)canShowBottomBarInListCell;
- (BOOL)isListCell;
- (id)createBottomBarCommonContext;
- (id /* block */)createCommentInputViewContextBlock;
- (id /* block */)createFeedViewedViewContextBlock;
- (id /* block */)createPoiEmphraseCollectViewContextBlock;
- (id /* block */)createFollowRequestContextBlock;
- (id /* block */)createAWEECommerceBuyButtonViewBarContextBlock;
- (id /* block */)createAWEProgressSectionViewContextBlock;
- (id /* block */)createInterestDiscoverBottomBarContext;
- (id)homepageUser;
- (void)setHomepageUser:(id)arg0;
- (void)addAndUpdateGrootRecordTopViewIfNeed:(id)arg0 model:(id)arg1;
- (void)addAndUpdateGrootRecordTopViewIfNeed:(id)arg0 model:(id)arg1 before:(id /* block */)arg2 complete:(id /* block */)arg3;
- (void)viewDidClickedWithActionType:(unsigned long long)arg0;
- (void)setGrootSpeciesShootTipView:(id)arg0;
- (void)setBottomBarCoordinator:(id)arg0;
- (void)prepareForDisplay;
- (void)setModel:(id)arg0;
- (void)viewSafeAreaInsetsDidChange;
- (void).cxx_destruct;
- (void)setIndexPath:(long long)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (long long)indexPath;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)reset;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)configureWithModel:(id)arg0;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)layoutSubViews;

@end