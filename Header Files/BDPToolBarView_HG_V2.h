//
//     Generated by private class-dump
//

@class UIView, NSString, BDPMorePanel_HG, CALayer, BDPUniqueID, UIButton, BDPPrivacyAccessAnimator, BDPBubbleView;
@protocol BDPToolBarViewDelegate;

@interface BDPToolBarView_HG_V2 : UIView <BDPToolBarViewProtocol> {
    BOOL _forcedMoreEnable;
    BOOL _needGameCenter;
    BOOL _shouldShowGameCenterBtn;
    long long _toolbarStyle;
    long long _toolBarThemeStyle;
    id<BDPToolBarViewDelegate> _delegate;
    BDPBubbleView *_bubbleView;
    UIButton *_gameCenterButton;
    BDPUniqueID *_uniqueID;
    BDPPrivacyAccessAnimator *_privacyIconAnimator;
    UIButton *_moreButton;
    UIButton *_closeButton;
    UIView *_reddotView;
    CALayer *_separatorLayer;
    UIView *_ovalCapsule;
    NSString *_reddotObserverToken;
    BDPMorePanel_HG *_panel;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) UIButton *gameCenterButton;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *reddotView;
@property (retain, nonatomic) CALayer *separatorLayer;
@property (retain, nonatomic) UIView *ovalCapsule;
@property (nonatomic) BOOL shouldShowGameCenterBtn;
@property (copy, nonatomic) NSString *reddotObserverToken;
@property (retain, nonatomic) BDPPrivacyAccessAnimator *privacyIconAnimator;
@property (weak, nonatomic) BDPMorePanel_HG *panel;
@property (nonatomic) long long toolbarStyle;
@property (nonatomic) long long toolBarThemeStyle;
@property (nonatomic) BOOL forcedMoreEnable;
@property (weak, nonatomic) id<BDPToolBarViewDelegate> delegate;
@property (retain, nonatomic) BDPBubbleView *bubbleView;
@property (readonly, nonatomic) BOOL needGameCenter;
@property (readonly, nonatomic) BOOL showCustomerService;
@property (copy, nonatomic) NSString *navigationStyle;
@property (readonly, nonatomic) UIView *rightToolbar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUniqueID:(id)arg0 needGameCenter:(BOOL)arg1;
- (void)setToolBarThemeStyle:(long long)arg0;
- (void)setForcedMoreEnable:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })moreButtonFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originToolBarViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })closeButtonFrame;
- (void)recieveEnterFullScreenNotification:(id)arg0;
- (void)recieveEnterSmallScreenNotification:(id)arg0;
- (BOOL)shouldShowGameCenterBtn;
- (BOOL)shouldShowGameCenterBtn;
- (void)showGameCenterBtn;
- (id)gameCenterButton;
- (id)reddotView;
- (id)privacyIconAnimator;
- (void)gameCenterButtonClicked:(id)arg0;
- (void)moreBtnClicked:(id)arg0;
- (void)closeButtonClicked:(id)arg0;
- (BOOL)forcedMoreEnable;
- (void)showMorePanel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originMoreButtonFrame;
- (long long)toolBarThemeStyle;
- (BOOL)needGameCenter;
- (void)setPrivacyIconAnimator:(id)arg0;
- (void)setGameCenterButton:(id)arg0;
- (void)setReddotView:(id)arg0;
- (long long)defaultThemeStyle;
- (void)eventWithName:(id)arg0 params:(id)arg1;
- (id)_getGameCenterConfig;
- (unsigned long long)getGameBootType;
- (BOOL)toolbarIsShowing;
- (BOOL)shouldPreloadGameCenter;
- (id)_getGameCenterURL;
- (BOOL)shouldShowBubbleMassage;
- (void)showBubbleMessageIfNeed;
- (void)gameCenterButtonClicked:(id)arg0 targetType:(id)arg1;
- (void)removeReddotInfoIfNeed;
- (id)_getGameCenterTargetConfig;
- (id)_getGameCenterURLWithConfig:(id)arg0;
- (void)_jumpToNoGameWithURL:(id)arg0;
- (void)_jumpAndCloseGameWithURL:(id)arg0;
- (id)_buildGameOrAppURLWithConfig:(id)arg0;
- (id)_buildOtherCenterWithConfig:(id)arg0;
- (void)bubbleCloseBtnClicked:(id)arg0;
- (void)setupBubbleViewWithReddot:(id)arg0;
- (void)_jumpToGameCenterWithURL:(id)arg0;
- (id)reddotObserverToken;
- (id)ovalCapsule;
- (id)separatorLayer;
- (void)updateUIForDarkLightMode;
- (void)setReddotObserverToken:(id)arg0;
- (void)setSeparatorLayer:(id)arg0;
- (void)setOvalCapsule:(id)arg0;
- (void)setShouldShowGameCenterBtn:(BOOL)arg0;
- (void).cxx_destruct;
- (id)moreButton;
- (id)uniqueID;
- (void)applicationWillEnterForeground;
- (void)setUniqueID:(id)arg0;
- (void)setMoreButton:(id)arg0;
- (id)delegate;
- (long long)toolbarStyle;
- (void)setToolbarStyle:(long long)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setHidden:(BOOL)arg0;
- (void)setupViews;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)panel;
- (id)bubbleView;
- (void)setBubbleView:(id)arg0;
- (id)initWithUniqueID:(id)arg0;
- (double)viewWidth;
- (void)setPanel:(id)arg0;

@end