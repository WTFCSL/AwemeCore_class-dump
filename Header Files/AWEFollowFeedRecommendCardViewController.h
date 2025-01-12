//
//     Generated by private class-dump
//

@class UIView, NSString, AWEAwemeModel, UITableViewCell, AWEGradientView, BDImageView, AWEUILoadingView, NSMutableArray, DUXButton, NSDictionary, UILabel, AWEFollowFeedMultiCardContainerViewController;
@protocol AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionLongPressDelegate, AWEPlayInteractionViewControllerProtocol, AWEFollowFeedRecommendCardProtocol, AWEFeedTableViewCellControllerPlayerDelegate, AWEFeedTableViewCellProtocol;

@interface AWEFollowFeedRecommendCardViewController : UIViewController <AWEFollowFeedMultiCardDragContainerDataSource, AWEFollowFeedMultiCardContainerDelegate, AWEUserMessage, AWEZoomTransitionOuterContextProvider, AWEFeedTableViewCellViewControllerProtocol, AWEConcernRecommendCardViewControllerProtocol> {
    BOOL _isShowBackupUserList;
    BOOL _hasInitFetched;
    BOOL _canPlayCard;
    BOOL _didTrackStayTime;
    BOOL _lastSkylightIsOpen;
    id<AWEFeedTableViewCellControllerPlayerDelegate> _playerDelegate;
    long long _indexPath;
    AWEAwemeModel *_model;
    NSString *_referString;
    long long _type;
    id<AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEAwemePlayInteractionLongPressDelegate, AWEPlayInteractionViewControllerProtocol> _interactionController;
    id /* block */ _pageStateChangedBlock;
    AWEUILoadingView *_loadingView;
    NSMutableArray *_userList;
    NSMutableArray *_backupUserList;
    AWEFollowFeedMultiCardContainerViewController *_dragContainerVC;
    DUXButton *_nextButton;
    DUXButton *_followButton;
    BDImageView *_backgroundCover;
    AWEGradientView *_gradientBackgroundView;
    UILabel *_topCopywritingLabel;
    NSString *_topCopywriting;
    double _startDisplayTime;
    UIView *_curSelectedItemView;
    UIView *_fakeNextButton;
    UIView *_fakeFollowButton;
    UIView<AWEFollowFeedRecommendCardProtocol> *_fakeCard;
    unsigned long long _recommendType;
}

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) NSMutableArray *userList;
@property (retain, nonatomic) NSMutableArray *backupUserList;
@property (retain, nonatomic) AWEFollowFeedMultiCardContainerViewController *dragContainerVC;
@property (retain, nonatomic) DUXButton *nextButton;
@property (retain, nonatomic) DUXButton *followButton;
@property (retain, nonatomic) BDImageView *backgroundCover;
@property (retain, nonatomic) AWEGradientView *gradientBackgroundView;
@property (retain, nonatomic) UILabel *topCopywritingLabel;
@property (copy, nonatomic) NSString *topCopywriting;
@property (nonatomic) BOOL isShowBackupUserList;
@property (nonatomic) BOOL hasInitFetched;
@property (nonatomic) BOOL canPlayCard;
@property (nonatomic) double startDisplayTime;
@property (nonatomic) BOOL didTrackStayTime;
@property (weak, nonatomic) UIView *curSelectedItemView;
@property (retain, nonatomic) UIView *fakeNextButton;
@property (retain, nonatomic) UIView *fakeFollowButton;
@property (retain, nonatomic) UIView<AWEFollowFeedRecommendCardProtocol> *fakeCard;
@property (nonatomic) unsigned long long recommendType;
@property (nonatomic) BOOL lastSkylightIsOpen;
@property (copy, nonatomic) id /* block */ pageStateChangedBlock;
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

+ (Class)aAWEPadModuleAdapterClass;

- (id)referString;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishBlockUser:(id)arg0 status:(long long)arg1;
- (id)zoomTransitionStartViewForOffset:(long long)arg0;
- (void)setReferString:(id)arg0;
- (void)setPlayerDelegate:(id)arg0;
- (id)playerDelegate;
- (id)aAWEPadModuleAdapter;
- (unsigned long long)recommendType;
- (void)setGradientBackgroundView:(id)arg0;
- (void)addNotifications;
- (void)setUserList:(id)arg0;
- (id)backgroundCover;
- (void)setBackgroundCover:(id)arg0;
- (void)setRecommendType:(unsigned long long)arg0;
- (id)followButton;
- (void)trackStayTime;
- (void)setFollowButton:(id)arg0;
- (void)setTopCopywriting:(id)arg0;
- (void)updateUIWhenSkylightOpen:(BOOL)arg0 animated:(BOOL)arg1;
- (void)updateTopCopywritingAlpha:(double)arg0;
- (long long)numberOfCardsInContainer:(id)arg0;
- (id)container:(id)arg0 cardViewAtIndex:(long long)arg1;
- (void)container:(id)arg0 dataSourceIsEmpty:(BOOL)arg1;
- (void)container:(id)arg0 didDisplayCardView:(id)arg1 atIndex:(long long)arg2;
- (void)container:(id)arg0 didEndDisplayCardView:(id)arg1 atIndex:(long long)arg2;
- (void)container:(id)arg0 didSelectedCardAtIndex:(long long)arg1;
- (id)dragContainerVC;
- (id)topCopywritingLabel;
- (void)hideFollowFeedRecommendCardTopCopywritingView;
- (void)setHasInitFetched:(BOOL)arg0;
- (void)addFakeCard;
- (void)removeFakeCard;
- (void)setStartDisplayTime:(double)arg0;
- (void)setDidTrackStayTime:(BOOL)arg0;
- (BOOL)didTrackStayTime;
- (double)startDisplayTime;
- (void)dismissCurrentCardForDirection:(long long)arg0;
- (id)backupUserList;
- (void)trackRecommendUser:(id)arg0 index:(long long)arg1 event:(id)arg2;
- (void)followUser:(id)arg0 completion:(id /* block */)arg1;
- (void)setCanPlayCard:(BOOL)arg0;
- (void)resetCardView:(id)arg0;
- (void)playCardView:(id)arg0;
- (void)pauseCardView:(id)arg0;
- (void)stopCardView:(id)arg0;
- (void)updateRecommendTypeWithAweme:(id)arg0;
- (void)setIsShowBackupUserList:(BOOL)arg0;
- (id)topCopywriting;
- (id)fakeNextButton;
- (id)fakeFollowButton;
- (id)generateCardView;
- (void)setFakeCard:(id)arg0;
- (id)fakeCard;
- (void)setFakeNextButton:(id)arg0;
- (void)setFakeFollowButton:(id)arg0;
- (BOOL)lastSkylightIsOpen;
- (void)setLastSkylightIsOpen:(BOOL)arg0;
- (BOOL)isShowBackupUserList;
- (void)fetchDatasIfSlient:(BOOL)arg0;
- (void)cardCloseBtnClickedAtIndex:(long long)arg0;
- (void)setCurSelectedItemView:(id)arg0;
- (void)enterAwemeDetailTableViewControllerWithModel:(id)arg0;
- (void)enterPersonalHomepageWithUser:(id)arg0 index:(long long)arg1;
- (BOOL)canPlayCard;
- (void)updateFollowButtonWithUser:(id)arg0;
- (BOOL)hasInitFetched;
- (id)curSelectedItemView;
- (void)updateUser:(id)arg0 status:(long long)arg1;
- (void)nextButtonClicked;
- (void)followButtonClicked;
- (id /* block */)pageStateChangedBlock;
- (void)setPageStateChangedBlock:(id /* block */)arg0;
- (void)setBackupUserList:(id)arg0;
- (void)setDragContainerVC:(id)arg0;
- (void)setTopCopywritingLabel:(id)arg0;
- (void)prepareForDisplay;
- (void)setModel:(id)arg0;
- (void)viewSafeAreaInsetsDidChange;
- (void).cxx_destruct;
- (id)model;
- (void)setIndexPath:(long long)arg0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)stop;
- (long long)type;
- (long long)indexPath;
- (void)setType:(long long)arg0;
- (id)interactionController;
- (void)updateBackground;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)reset;
- (void)viewDidLoad;
- (id)userList;
- (id)nextButton;
- (void)setNextButton:(id)arg0;
- (void)configureWithModel:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)gradientBackgroundView;

@end
