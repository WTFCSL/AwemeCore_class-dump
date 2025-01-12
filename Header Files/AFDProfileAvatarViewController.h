//
//     Generated by private class-dump
//

@class AWEURLModel, AWEUILoadingView, UICollectionView, NSDictionary, AFDProfileAvatarFunctionManager, UIView, NSString, UIStackView, AWEWebViewController, NSArray, AFDButton, AWEUserModel, UIImageView;
@protocol AFDProfileAvatarZoomTransitionOuterContextProvider;

@interface AFDProfileAvatarViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AFDProfileAvatarZoomTransitionInnerContextProvider, AWETransitioningViewController, AFDProfileAvatarViewControllerProtocol> {
    BOOL _isPureMode;
    BOOL _isStartPanGuresture;
    UIView *_avatarGestureView;
    long long _numberTouchesOfPinch;
    double _startPinchTimestamp;
    UIStackView *_buttonsStackView;
    AFDButton *_downloadButton;
    AFDButton *_followButton;
    AFDButton *_shareButton;
    AFDButton *_likeButton;
    id<AFDProfileAvatarZoomTransitionOuterContextProvider> _transitionDelegate;
    AWEUserModel *_user;
    AWEURLModel *_avatarImageURL;
    AWEURLModel *_avatarImagePlaceholderURL;
    NSDictionary *_trackParams;
    AFDProfileAvatarFunctionManager *_functionManager;
    NSArray *_functionModels;
    UIView *_avatarContainer;
    UIImageView *_avatarImageView;
    AWEUILoadingView *_loadingView;
    UICollectionView *_collectionView;
    AWEWebViewController *_webViewController;
    struct CGPoint { double x; double y; } _startPanGestruePosition;
    struct CGPoint { double x; double y; } _lastPinchGesturePosition;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _standardTransform;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *avatarGestureView;
@property (nonatomic) struct CGPoint { double x; double y; } startPanGestruePosition;
@property (nonatomic) struct CGPoint { double x; double y; } lastPinchGesturePosition;
@property (nonatomic) long long numberTouchesOfPinch;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } standardTransform;
@property (nonatomic) double startPinchTimestamp;
@property (retain, nonatomic) UIStackView *buttonsStackView;
@property (retain, nonatomic) AFDButton *downloadButton;
@property (retain, nonatomic) AFDButton *followButton;
@property (retain, nonatomic) AFDButton *shareButton;
@property (retain, nonatomic) AFDButton *likeButton;
@property (weak, nonatomic) id<AFDProfileAvatarZoomTransitionOuterContextProvider> transitionDelegate;
@property (nonatomic) BOOL isPureMode;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWEURLModel *avatarImageURL;
@property (retain, nonatomic) AWEURLModel *avatarImagePlaceholderURL;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL isStartPanGuresture;
@property (retain, nonatomic) AFDProfileAvatarFunctionManager *functionManager;
@property (retain, nonatomic) NSArray *functionModels;
@property (retain, nonatomic) UIView *avatarContainer;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEWebViewController *webViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)zoomTransitionWantsTabBarAnimation;
- (id)zoomTransitionEndView;
- (id)trackParams;
- (BOOL)isPureMode;
- (void)setIsPureMode:(BOOL)arg0;
- (void)setTrackParams:(id)arg0;
- (id)followButton;
- (void)setFollowButton:(id)arg0;
- (void)p_dismiss:(BOOL)arg0;
- (void)p_fetchData;
- (void)p_setupViews;
- (void)p_dismiss;
- (void)setStandardTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0;
- (void)setLastPinchGesturePosition:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })lastPinchGesturePosition;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })standardTransform;
- (double)animationBackgroundFadeInDelay;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })zoomTransitionEndFrame;
- (double)actionAreaLongCellWidth;
- (void)updateActionViewWithType:(long long)arg0 status:(BOOL)arg1 animated:(BOOL)arg2;
- (void)virtualAvatarClicked;
- (id)functionModels;
- (BOOL)isStartPanGuresture;
- (id)functionManager;
- (double)actionAreaBottomOffset;
- (void)p_setupPureViews;
- (void)p_forcedDismiss;
- (void)applicationBecomeUnactiveted;
- (void)stampRecognized:(id)arg0;
- (void)p_addStampCoverIfNeeded;
- (void)p_updateOtherViewsWithAlpha:(double)arg0;
- (id)p_buttonBackgroundColor:(BOOL)arg0;
- (id)p_buttonForType:(long long)arg0;
- (void)p_updateFollowButton;
- (void)p_updateLikeButton;
- (void)p_updateDownloadButton:(BOOL)arg0;
- (long long)p_indexWithType:(long long)arg0;
- (struct CGPoint { double x0; double x1; })startPanGestruePosition;
- (void)setIsStartPanGuresture:(BOOL)arg0;
- (void)setStartPanGestruePosition:(struct CGPoint { double x0; double x1; })arg0;
- (void)p_updateBackgroundWithAlpha:(double)arg0;
- (void)setStartPinchTimestamp:(double)arg0;
- (void)setNumberTouchesOfPinch:(long long)arg0;
- (void)p_changeToAnchorPoint:(struct CGPoint { double x0; double x1; })arg0 withoutMovingForView:(id)arg1;
- (long long)numberTouchesOfPinch;
- (double)startPinchTimestamp;
- (void)p_setupNaviBar;
- (id)avatarGestureView;
- (void)p_clickTopRightShare:(id)arg0;
- (id)avatarImagePlaceholderURL;
- (id)avatarImageURL;
- (double)avatarCornerRadius;
- (void)p_setupButton:(id)arg0;
- (id)p_likeButtonImage;
- (void)p_clickButton:(id)arg0;
- (id)initWithUserModel:(id)arg0 placeholderImage:(id)arg1 avatarImage:(id)arg2 fromContext:(id)arg3 isPureMode:(BOOL)arg4 trackPramras:(id)arg5;
- (void)setAvatarGestureView:(id)arg0;
- (void)setAvatarImageURL:(id)arg0;
- (void)setAvatarImagePlaceholderURL:(id)arg0;
- (void)setFunctionManager:(id)arg0;
- (void)setFunctionModels:(id)arg0;
- (void)setUser:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)collectionView:(id)arg0 didUnhighlightItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 didHighlightItemAtIndexPath:(id)arg1;
- (id)user;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (void)viewDidAppear:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView;
- (double)animationDuration;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1;
- (BOOL)prefersStatusBarHidden;
- (void)dealloc;
- (void)viewDidLoad;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg0;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (void)handlePinchGesture:(id)arg0;
- (void)handlePanGesture:(id)arg0;
- (id)downloadButton;
- (id)webViewController;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)likeButton;
- (void)setLikeButton:(id)arg0;
- (id)shareButton;
- (void)setShareButton:(id)arg0;
- (id)avatarContainer;
- (void)setAvatarContainer:(id)arg0;
- (void)setWebViewController:(id)arg0;
- (double)avatarWidth;
- (id)buttonsStackView;
- (void)setButtonsStackView:(id)arg0;
- (void)setDownloadButton:(id)arg0;

@end
