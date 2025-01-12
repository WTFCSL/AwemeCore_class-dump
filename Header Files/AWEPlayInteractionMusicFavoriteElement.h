//
//     Generated by private class-dump
//

@class LOTAnimationView, AWEPlayInteractionMusicFavoriteViewModel, AWEFeedVideoButton, AWEPlayInteractionFavoriteResourceConfig;

@interface AWEPlayInteractionMusicFavoriteElement : AWEPlayInteractionRightElement {
    BOOL _isFavoriteAnimationFinished;
    BOOL _shouldDelayUpdate;
    AWEFeedVideoButton *_favoriteButton;
    LOTAnimationView *_favoriteAnimationView;
    AWEPlayInteractionMusicFavoriteViewModel *_viewModel;
    AWEPlayInteractionFavoriteResourceConfig *_resourceConfig;
}

@property (retain, nonatomic) AWEFeedVideoButton *favoriteButton;
@property (retain, nonatomic) LOTAnimationView *favoriteAnimationView;
@property (retain, nonatomic) AWEPlayInteractionMusicFavoriteViewModel *viewModel;
@property (retain, nonatomic) AWEPlayInteractionFavoriteResourceConfig *resourceConfig;
@property (nonatomic) BOOL isFavoriteAnimationFinished;
@property (nonatomic) BOOL shouldDelayUpdate;

+ (Class)aAWEPadModuleAdapterClass;

- (void)initializeElement;
- (id)aAWEPadModuleAdapter;
- (void)buttonClicked:(BOOL)arg0;
- (void)viewController_willDisplay;
- (void)viewController_viewDidDisappear;
- (id)activateInfoWithData:(id)arg0;
- (void)bindEvent;
- (id)showStringFromNumber:(id)arg0;
- (void)updateFavoriteCount;
- (void)announceAccessibility:(id)arg0;
- (void)setFavoriteAnimationView:(id)arg0;
- (id)favoriteAnimationView;
- (void)playFavoriteAnimation;
- (void)viewController_viewWillAppear;
- (void)p_stopFavoriteAnimation;
- (void)p_playFavoriteAnimation;
- (void)layoutElementView;
- (void)viewController_didEndDisplaying;
- (void)setupFavoriteStatus;
- (void)playUnfavoriteAnimation;
- (BOOL)feedVideoButtonUIOpt;
- (void)adaptePadElementSizeWithConfig:(struct { double x0; double x1; double x2; double x3; double x4; })arg0;
- (BOOL)shouldDelayUpdate;
- (void)updateAccesibilityLabel;
- (void)updateIconImageIfNeed;
- (id)resourceConfig;
- (BOOL)updateIconLottieIfNeed;
- (void)setIsFavoriteAnimationFinished:(BOOL)arg0;
- (void)setShouldDelayUpdate:(BOOL)arg0;
- (void)setResourceConfig:(id)arg0;
- (BOOL)isFavoriteAnimationFinished;
- (id)p_favoriteImageName:(BOOL)arg0;
- (void)p_playUnfavoriteAnimation;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)reset;
- (void)viewDidLoad;
- (id)favoriteButton;
- (void)setFavoriteButton:(id)arg0;

@end
