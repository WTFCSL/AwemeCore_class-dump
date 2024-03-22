//
//     Generated by private class-dump
//

@class IESECShopSearchBar, UIStackView, UIColor, NSString, UIButton;
@protocol IESECRelationNavbarViewDelegate;

@interface IESECShopLiveFusionNavBarView : UIView <IESECShopSearchBarDelegate, IESECRelationNavbarViewProtocol> {
    double _lastScrollPercent;
    BOOL _shouldHideSearchEntrance;
    BOOL isSearchBarHidden;
    id<IESECRelationNavbarViewDelegate> delegate;
    unsigned long long shopTheme;
    UIColor *navBarColor;
    UIColor *searchBarColor;
    UIColor *searchBarBorderColor;
    UIColor *searchBarTextColor;
    UIButton *_backButton;
    UIButton *_cartButton;
    UIButton *_moreButton;
    UIButton *_searchButton;
    UIStackView *_rightStackView;
    IESECShopSearchBar *_searchBar;
}

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *cartButton;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) UIStackView *rightStackView;
@property (retain, nonatomic) IESECShopSearchBar *searchBar;
@property (retain, nonatomic) UIColor *searchBarTextColor;
@property (retain, nonatomic) UIColor *searchBarBorderColor;
@property (weak, nonatomic) id<IESECRelationNavbarViewDelegate> delegate;
@property (readonly, nonatomic) BOOL isSearchBarHidden;
@property (nonatomic) unsigned long long shopTheme;
@property (retain, nonatomic) UIColor *navBarColor;
@property (retain, nonatomic) UIColor *searchBarColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNavBarColor:(id)arg0;
- (id)navBarColor;
- (id)cartButton;
- (void)setCartButton:(id)arg0;
- (void)setSearchBarTextColor:(id)arg0;
- (void)didTapMoreButton;
- (id)rightStackView;
- (void)setRightStackView:(id)arg0;
- (void)didTapBackButton;
- (void)switchTheme:(unsigned long long)arg0;
- (void)scrollToPercent:(double)arg0;
- (void)setTopSearchInfo:(id)arg0;
- (void)updateButtonTintColor:(id)arg0;
- (unsigned long long)shopTheme;
- (void)setSearchBarHidden:(BOOL)arg0;
- (void)p_setSearchBarHidden:(BOOL)arg0;
- (void)p_setSearchButtonHidden:(BOOL)arg0;
- (void)didTapSearchBar;
- (void)didTapCartButton;
- (BOOL)shopSearchBarShouldBeginEditing:(id)arg0;
- (void)shopSearchBarSearchButtonClicked:(id)arg0;
- (void)shopSearchBarCameraButtonClicked:(id)arg0;
- (id)searchBarBorderColor;
- (void)setSearchBarBorderColor:(id)arg0;
- (BOOL)isSearchBarHidden;
- (void)setShopTheme:(unsigned long long)arg0;
- (id)searchBarColor;
- (void)setSearchBarColor:(id)arg0;
- (void)setSearchEntranceHidden:(BOOL)arg0;
- (id)searchBar;
- (void)setSearchBar:(id)arg0;
- (void).cxx_destruct;
- (id)moreButton;
- (void)setSearchButton:(id)arg0;
- (id)searchButton;
- (id)searchBarTextColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setMoreButton:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (void)setupViews;

@end
