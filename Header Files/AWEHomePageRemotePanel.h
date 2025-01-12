//
//     Generated by private class-dump
//

@class NSTimer, NSString, AWEHomePageRemotePanelConfig, UIView, AWEHomePageRemoteModel, NSArray, AWEHomePageRemoteManager, CAGradientLayer, UICollectionView, DUXButton, UILabel;
@protocol AWEHomePageRemotePanelDelegate;

@interface AWEHomePageRemotePanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource, AWEHomePageRemoteManagerDelegate, UIGestureRecognizerDelegate, AWEAlertProtocol, AWEUserMessage, AWEHomePageRemotePanelProtocol> {
    BOOL _configFromSettings;
    BOOL _isShowing;
    BOOL _isDismissing;
    AWEHomePageRemoteModel *_remoteModel;
    AWEHomePageRemoteManager *_remoteManager;
    id<AWEHomePageRemotePanelDelegate> _delegate;
    double _panelWidth;
    long long _customThemeStyle;
    NSString *_enterMethod;
    AWEHomePageRemotePanelConfig *_panelConfig;
    double _countDownTime;
    NSTimer *_timer;
    UIView *_contentView;
    UICollectionView *_collectionView;
    UIView *_bottomBlackMaskView;
    UIView *_maskView;
    CAGradientLayer *_gradientMask;
    UIView *_topView;
    DUXButton *_closeButton;
    UILabel *_titleLabel;
    UIView *_dragView;
    double _contentBottomPadding;
    long long _showAnimateType;
    long long _dismissAnimateType;
    NSString *_previousModuleType;
    NSString *_previousBusinessType;
    NSString *_previousBusinessId;
    NSArray *_consumedBusinessIDs;
    id /* block */ _onClose;
    double _totalStayTime;
    double _lastEnterTime;
    struct CGPoint { double x; double y; } _feedButtonAnchorPoint;
    struct CGPoint { double x; double y; } _animateAnchorPoint;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _oldPanelFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _panOriginFrame;
}

@property (retain, nonatomic) AWEHomePageRemoteModel *remoteModel;
@property (retain, nonatomic) AWEHomePageRemoteManager *remoteManager;
@property (weak, nonatomic) id<AWEHomePageRemotePanelDelegate> delegate;
@property (nonatomic) double panelWidth;
@property (nonatomic) long long customThemeStyle;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isDismissing;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) AWEHomePageRemotePanelConfig *panelConfig;
@property (nonatomic) double countDownTime;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *bottomBlackMaskView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) CAGradientLayer *gradientMask;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) DUXButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *dragView;
@property (nonatomic) double contentBottomPadding;
@property (nonatomic) struct CGPoint { double x; double y; } feedButtonAnchorPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } oldPanelFrame;
@property (nonatomic) struct CGPoint { double x; double y; } animateAnchorPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } panOriginFrame;
@property (nonatomic) long long showAnimateType;
@property (nonatomic) long long dismissAnimateType;
@property (copy, nonatomic) NSString *previousModuleType;
@property (copy, nonatomic) NSString *previousBusinessType;
@property (copy, nonatomic) NSString *previousBusinessId;
@property (copy, nonatomic) NSArray *consumedBusinessIDs;
@property (copy, nonatomic) id /* block */ onClose;
@property (nonatomic) double totalStayTime;
@property (nonatomic) double lastEnterTime;
@property (readonly, nonatomic) BOOL configFromSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)setEnterMethod:(id)arg0;
- (id)alertIDForEvent:(id)arg0;
- (long long)alertPriorityForEvent:(id)arg0;
- (void)showWithCloseCallback:(id /* block */)arg0;
- (id)enterMethod;
- (void)setIsShowing:(BOOL)arg0;
- (void)addNotifications;
- (void)dismissWithReason:(long long)arg0;
- (void)setCountDownTime:(double)arg0;
- (double)countDownTime;
- (void)setPanelConfig:(id)arg0;
- (id)panelConfig;
- (void)rootVCWillAppear;
- (void)loadRemoteDataIfNeed;
- (void)loadRemoteUIIfNeed;
- (id)initRemotePanelWithDelegate:(id)arg0;
- (void)dismissWithReason:(long long)arg0 withAnimateType:(long long)arg1;
- (void)updatePanelThemeStyle:(long long)arg0;
- (void)prepareShowPanel;
- (BOOL)canShowPanel;
- (void)showPanelOnView:(id)arg0 withBottomPadding:(double)arg1 withShowAnimateType:(long long)arg2 withDismissAnimateType:(long long)arg3 withEnterMethod:(id)arg4;
- (BOOL)configFromSettings;
- (id)remoteModel;
- (BOOL)isUILighten;
- (id)previousModuleType;
- (void)setPreviousModuleType:(id)arg0;
- (id)previousBusinessType;
- (void)setPreviousBusinessType:(id)arg0;
- (id)previousBusinessId;
- (void)setPreviousBusinessId:(id)arg0;
- (id)consumedBusinessIDs;
- (void)setConsumedBusinessIDs:(id)arg0;
- (void)setRemoteManager:(id)arg0;
- (void)businessRemoveAlertIfNeed;
- (id)getHomePageRemoteTrackContext;
- (void)setRemoteModel:(id)arg0;
- (long long)homePageRemoteCurrentThemeStyle;
- (id)homePageRemoteIdentity;
- (void)initRemote;
- (void)p_invalidateTimer;
- (void)p_addAlertIfNeed;
- (void)showPanelOnView:(id)arg0 withBottomPadding:(double)arg1 withShowAnimateType:(long long)arg2 withDismissAnimateType:(long long)arg3 withEnterMethod:(id)arg4 withCountDownTime:(double)arg5;
- (void)p_panelWillShow;
- (void)setShowAnimateType:(long long)arg0;
- (void)setDismissAnimateType:(long long)arg0;
- (void)setAnimateAnchorPoint:(struct CGPoint { double x0; double x1; })arg0;
- (double)calculateCollectionViewHeight;
- (void)setContentBottomPadding:(double)arg0;
- (struct CGPoint { double x0; double x1; })p_getFeedButtonAnchorPoint;
- (void)setFeedButtonAnchorPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setOldPanelFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (long long)showAnimateType;
- (void)p_panelDidShow;
- (void)showPanelWithAnimateType:(long long)arg0 withCompletion:(id /* block */)arg1;
- (id)bottomBlackMaskView;
- (void)p_timeToClose;
- (void)setTotalStayTime:(double)arg0;
- (void)setLastEnterTime:(double)arg0;
- (long long)dismissAnimateType;
- (void)dismissWithReason:(long long)arg0 withAnimateType:(long long)arg1 withStartProgress:(double)arg2;
- (void)dismissPanelWithAnimateType:(long long)arg0 withReason:(long long)arg1 withStartProgress:(double)arg2;
- (void)p_removeAlertIfNeed;
- (struct CGPoint { double x0; double x1; })animateAnchorPoint;
- (struct CGPoint { double x0; double x1; })feedButtonAnchorPoint;
- (void)p_setAnchorPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)dismissCompletion:(long long)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })oldPanelFrame;
- (void)setPanOriginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })panOriginFrame;
- (void)resetContentViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)recoverContentViewFrame;
- (double)contentBottomPadding;
- (void)p_didPan:(id)arg0;
- (void)setBottomBlackMaskView:(id)arg0;
- (void)p_clickCloseButton;
- (void)p_clickMask;
- (void)setCustomThemeStyle:(long long)arg0;
- (id)gradientMask;
- (void)setGradientMask:(id)arg0;
- (double)totalStayTime;
- (double)lastEnterTime;
- (void)showPanelOnView:(id)arg0 withBottomPadding:(double)arg1 withShowAnimateType:(long long)arg2 withDismissAnimateType:(long long)arg3 withCountDownTime:(double)arg4;
- (long long)customThemeStyle;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (id)timer;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)appDidEnterBackground:(id)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)isDismissing;
- (id)titleLabel;
- (id)maskView;
- (void)setCollectionView:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)isShowing;
- (id)contentView;
- (id)delegate;
- (void)setTimer:(id)arg0;
- (void)appWillEnterForeground:(id)arg0;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (void)removeNotifications;
- (void)setMaskView:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)topView;
- (void)setupUI;
- (void)setIsDismissing:(BOOL)arg0;
- (void)setTopView:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)dragView;
- (void)setDragView:(id)arg0;
- (id)remoteManager;
- (double)panelWidth;
- (void)setPanelWidth:(double)arg0;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg0;

@end
