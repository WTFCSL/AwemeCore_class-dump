//
//     Generated by private class-dump
//

@class UILabel, UIButton, UIView, BDImageView, UILongPressGestureRecognizer, AWEChallengeDetailBackgroundColorView, NSString, DUXButton, AWESearchBar, AWECollectionButton, UIScrollView, AWENavigationBar, AWEChallengeModel, UIImageView;
@protocol AWEAdChallengeFlyBoxView;

@interface AWEChallengeDetailContainerViewHolder : AWEBaseDetailContainerViewHolder {
    BOOL _halfScreen;
    BOOL _isNewLayoutUI;
    BOOL _isFavorited;
    BOOL _isActionBtnDisplaying;
    BOOL _isEnterFullScreenAdLiveRoom;
    BOOL _isSearchBarAnimating;
    BOOL _hasReceivedFavoriteNotification;
    BOOL _adFlyBoxButtonHiddenStatus;
    BOOL _adFlyBoxViewHiddenStatus;
    UIButton *_actionButton;
    UIView *_actionButtonBGView;
    UIView *_naviContainerView;
    UIButton *_favoriteButton;
    AWECollectionButton *_naviFavoriteButton;
    UILabel *_titleLabel;
    UIButton *_searchButton;
    NSString *_enterFromPageString;
    UIButton *_halfScreenLiveShootContainerView;
    UIButton *_halfScreenCloseButton;
    UIImageView *_halfScreenLiveShootImageView;
    UILabel *_halfScreenLiveShootLabel;
    UIView *_halfScreenTitleBar;
    UILabel *_halfScreenTitleLabel;
    unsigned long long _halfScreenStyle;
    AWENavigationBar *_naviBar;
    AWESearchBar *_searchBar;
    AWESearchBar *_searchBarHint;
    UILabel *_hintLabel;
    AWEChallengeDetailBackgroundColorView *_backgroundColorView;
    AWEChallengeDetailBackgroundColorView *_naviBackgroundColorView;
    UIScrollView *_naviBackgroundScrollView;
    long long _searchBarThemeStyle;
    UIView *_rightButtonContainer;
    AWEChallengeModel *_challengeModel;
    BDImageView *_tiggerImage;
    DUXButton *_adFlyBoxButton;
    UIView<AWEAdChallengeFlyBoxView> *_adFlyBoxView;
    UILongPressGestureRecognizer *_challengeLongPressRecognizer;
}

@property (retain, nonatomic) AWESearchBar *searchBar;
@property (retain, nonatomic) AWESearchBar *searchBarHint;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) AWEChallengeDetailBackgroundColorView *backgroundColorView;
@property (retain, nonatomic) AWEChallengeDetailBackgroundColorView *naviBackgroundColorView;
@property (retain, nonatomic) UIScrollView *naviBackgroundScrollView;
@property (nonatomic) BOOL isSearchBarAnimating;
@property (nonatomic) long long searchBarThemeStyle;
@property (retain, nonatomic) UIView *rightButtonContainer;
@property (retain, nonatomic) AWEChallengeModel *challengeModel;
@property (nonatomic) BOOL hasReceivedFavoriteNotification;
@property (retain, nonatomic) BDImageView *tiggerImage;
@property (retain, nonatomic) DUXButton *adFlyBoxButton;
@property (retain, nonatomic) UIView<AWEAdChallengeFlyBoxView> *adFlyBoxView;
@property (nonatomic) BOOL adFlyBoxButtonHiddenStatus;
@property (nonatomic) BOOL adFlyBoxViewHiddenStatus;
@property (retain, nonatomic) UILongPressGestureRecognizer *challengeLongPressRecognizer;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIView *actionButtonBGView;
@property (retain, nonatomic) UIView *naviContainerView;
@property (retain, nonatomic) UIButton *favoriteButton;
@property (retain, nonatomic) AWECollectionButton *naviFavoriteButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) NSString *enterFromPageString;
@property (retain, nonatomic) UIButton *halfScreenLiveShootContainerView;
@property (retain, nonatomic) UIButton *halfScreenCloseButton;
@property (retain, nonatomic) UIImageView *halfScreenLiveShootImageView;
@property (retain, nonatomic) UILabel *halfScreenLiveShootLabel;
@property (retain, nonatomic) UIView *halfScreenTitleBar;
@property (retain, nonatomic) UILabel *halfScreenTitleLabel;
@property (nonatomic, getter=isHalfScreen) BOOL halfScreen;
@property (nonatomic) unsigned long long halfScreenStyle;
@property (nonatomic) BOOL isNewLayoutUI;
@property (nonatomic) BOOL isFavorited;
@property (weak, nonatomic) AWENavigationBar *naviBar;
@property (readonly, nonatomic) BOOL isActionBtnDisplaying;
@property (nonatomic) BOOL isEnterFullScreenAdLiveRoom;

- (void)setupViewHolder;
- (void)configActionButton;
- (void)setIsFavorited:(BOOL)arg0;
- (id)challengeModel;
- (void)setChallengeModel:(id)arg0;
- (BOOL)isEnterFullScreenAdLiveRoom;
- (void)setIsEnterFullScreenAdLiveRoom:(BOOL)arg0;
- (id)naviBar;
- (void)setNaviBar:(id)arg0;
- (id)enterFromPageString;
- (void)setEnterFromPageString:(id)arg0;
- (BOOL)isHalfScreen;
- (void)updateBackgroundColorViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 centerPercent:(double)arg1 startColor:(id)arg2 centerColor:(id)arg3 endColor:(id)arg4;
- (unsigned long long)halfScreenStyle;
- (void)setHalfScreen:(BOOL)arg0;
- (void)setHalfScreenStyle:(unsigned long long)arg0;
- (id)halfScreenTitleBar;
- (void)setNaviTitleAndFavoriteButtonAlpha:(double)arg0;
- (BOOL)isNewLayoutUI;
- (BOOL)shouldUseCommerceNewStyle;
- (void)changeNaviBarTheme:(long long)arg0;
- (void)updateSubviewHiddenStatusWhenOpenLiveRoom;
- (void)userDragScrollViewStatusChange:(BOOL)arg0;
- (id)naviContainerView;
- (id)halfScreenLiveShootContainerView;
- (id)halfScreenCloseButton;
- (id)naviFavoriteButton;
- (void)updateSubviewHiddenStatusWhenLeaveLiveRoom;
- (void)updateActionButtonWithModel:(id)arg0;
- (void)setIsNewLayoutUI:(BOOL)arg0;
- (BOOL)isEnhanceFavoriteButton;
- (id)halfScreenTitleLabel;
- (void)recoverDefaultPlaceHolder;
- (void)showTitlePlaceholder;
- (void)addjustBackgroundColorViewAweTop:(double)arg0;
- (void)updateSearchBarTitlePlaceHolder:(id)arg0;
- (void)bindDiscoverSel:(SEL)arg0 target:(id)arg1;
- (id)navigationViewRightContainerView;
- (void)setupHalfScreenTopRightButton;
- (id)halfScreenTopRightButton;
- (id)naviBackgroundScrollView;
- (id)naviBackgroundColorView;
- (void)layoutNaviFavoriteButton;
- (void)layoutFavoriteAndShootButtonWithFavorited:(BOOL)arg0;
- (void)checkIfFirstLanding;
- (void)addNaviTitleLabelIfNeeded;
- (id)actionButtonBGView;
- (void)addFavoriteButton;
- (void)addActionButton;
- (id)searchBarHint;
- (void)addTiggerImage;
- (void)updateAdFlyBoxButtonIFNeed:(id)arg0;
- (void)updateAdFlyBoxViewIfNeed:(id)arg0;
- (id)adFlyBoxButton;
- (void)flyboxButtonTapped;
- (void)setAdFlyBoxButtonHiddenStatus:(BOOL)arg0;
- (void)setAdFlyBoxViewHiddenStatus:(BOOL)arg0;
- (BOOL)adFlyBoxButtonHiddenStatus;
- (BOOL)adFlyBoxViewHiddenStatus;
- (id)adFlyBoxView;
- (void)setRightButtonContainer:(id)arg0;
- (void)addNaviFavoriteButton;
- (id)rightButtonContainer;
- (void)onReceiveChallengeFavoriteChanged:(id)arg0;
- (void)setHasReceivedFavoriteNotification:(BOOL)arg0;
- (id)tiggerImage;
- (void)shootFromTiggerImage;
- (BOOL)isSearchBarAnimating;
- (void)setIsSearchBarAnimating:(BOOL)arg0;
- (void)updateSearchBarStyle:(long long)arg0;
- (BOOL)hasReceivedFavoriteNotification;
- (id)halfScreenLiveShootImageView;
- (id)halfScreenLiveShootLabel;
- (void)layoutActionButton;
- (void)setActionButtonBGView:(id)arg0;
- (void)setNaviContainerView:(id)arg0;
- (void)setNaviFavoriteButton:(id)arg0;
- (void)setHalfScreenLiveShootContainerView:(id)arg0;
- (void)setHalfScreenCloseButton:(id)arg0;
- (void)setHalfScreenLiveShootImageView:(id)arg0;
- (void)setHalfScreenLiveShootLabel:(id)arg0;
- (void)setHalfScreenTitleBar:(id)arg0;
- (void)setHalfScreenTitleLabel:(id)arg0;
- (BOOL)isActionBtnDisplaying;
- (void)setSearchBarHint:(id)arg0;
- (void)setNaviBackgroundColorView:(id)arg0;
- (void)setNaviBackgroundScrollView:(id)arg0;
- (long long)searchBarThemeStyle;
- (void)setSearchBarThemeStyle:(long long)arg0;
- (void)setTiggerImage:(id)arg0;
- (void)setAdFlyBoxButton:(id)arg0;
- (void)setAdFlyBoxView:(id)arg0;
- (id)challengeLongPressRecognizer;
- (void)setChallengeLongPressRecognizer:(id)arg0;
- (id)searchBar;
- (void)updateLayout;
- (void)setSearchBar:(id)arg0;
- (void).cxx_destruct;
- (void)setSearchButton:(id)arg0;
- (id)titleLabel;
- (id)searchButton;
- (void)setTitleLabel:(id)arg0;
- (id)actionButton;
- (void)setActionButton:(id)arg0;
- (id)hintLabel;
- (void)setHintLabel:(id)arg0;
- (id)backgroundColorView;
- (id)favoriteButton;
- (void)setFavoriteButton:(id)arg0;
- (void)addObservers;
- (BOOL)isFavorited;
- (void)setBackgroundColorView:(id)arg0;

@end