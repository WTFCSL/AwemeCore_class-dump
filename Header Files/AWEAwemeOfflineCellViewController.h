//
//     Generated by private class-dump
//

@class NSString, UITableViewCell, AWEAwemeModel, AWEAwemeDetailBottomBarCoordinator, NSDictionary;
@protocol AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionLongPressDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEPlayInteractionViewControllerProtocol, AWEFeedTableViewCellControllerPlayerDelegate, AWEFeedTableViewCellProtocol;

@interface AWEAwemeOfflineCellViewController : AWEAwemeBaseViewController <AWEFeedTableViewCellViewControllerProtocol> {
    BOOL _canShowBottomBarInListCell;
    long long _indexPath;
    UITableViewCell<AWEFeedTableViewCellProtocol> *_superCell;
    AWEAwemeDetailBottomBarCoordinator *_bottomBarCoordinator;
}

@property (nonatomic) BOOL canShowBottomBarInListCell;
@property (retain, nonatomic) AWEAwemeDetailBottomBarCoordinator *bottomBarCoordinator;
@property (weak, nonatomic) id<AWEFeedTableViewCellControllerPlayerDelegate> playerDelegate;
@property (nonatomic) long long indexPath;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long type;
@property (readonly, nonatomic) id<AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEAwemePlayInteractionLongPressDelegate, AWEPlayInteractionViewControllerProtocol> interactionController;
@property (weak, nonatomic) UITableViewCell<AWEFeedTableViewCellProtocol> *superCell;
@property (copy, nonatomic) NSDictionary *extTrackLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)arg0 updateTiming:(long long)arg1;
- (void)setBottomBarHidden:(BOOL)arg0;
- (id)superCell;
- (void)setSuperCell:(id)arg0;
- (id)bottomBarCoordinator;
- (void)cellWillDisplay:(id)arg0 forRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)setAllUIElementsHidden:(BOOL)arg0 withAnimation:(BOOL)arg1;
- (void)setHideMusicInfoViewFlag:(BOOL)arg0;
- (id)currentBottomBarCoordinator;
- (id)extTrackLog;
- (BOOL)getCanShowBottomBarInListCell;
- (void)setCanShowBottomBarInListCell:(BOOL)arg0;
- (BOOL)canShowBottomBarInListCell;
- (void)setBottomBarCoordinator:(id)arg0;
- (id)createBottomBarOfflineContext;
- (void)prepareForDisplay;
- (void)setModel:(id)arg0;
- (id)init;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)setIndexPath:(long long)arg0;
- (long long)indexPath;
- (id)initWithMediaType:(long long)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)reset;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)configureWithModel:(id)arg0;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)layoutSubViews;

@end
