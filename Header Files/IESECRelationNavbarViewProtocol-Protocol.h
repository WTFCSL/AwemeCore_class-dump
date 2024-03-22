//
//     Generated by private class-dump
//

@class UIColor;
@protocol IESECRelationNavbarViewDelegate;

@protocol IESECRelationNavbarViewProtocol <NSObject>

@property (retain, nonatomic) UIColor *searchBarTextColor;
@property (retain, nonatomic) UIColor *searchBarBorderColor;
@property (weak, nonatomic) id<IESECRelationNavbarViewDelegate> delegate;
@property (readonly, nonatomic) BOOL isSearchBarHidden;
@property (nonatomic) unsigned long long shopTheme;
@property (retain, nonatomic) UIColor *navBarColor;
@property (retain, nonatomic) UIColor *searchBarColor;

- (void)setNavBarColor:(id)arg0;
- (id)navBarColor;
- (void)setSearchBarTextColor:(id)arg0;
- (void)scrollToPercent:(double)arg0;
- (unsigned long long)shopTheme;
- (id)searchBarBorderColor;
- (void)setSearchBarBorderColor:(id)arg0;
- (BOOL)isSearchBarHidden;
- (void)setShopTheme:(unsigned long long)arg0;
- (id)searchBarColor;
- (void)setSearchBarColor:(id)arg0;
- (id)searchBarTextColor;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@optional

- (void)switchTheme:(unsigned long long)arg0;
- (void)setTopSearchInfo:(id)arg0;
- (void)setSearchBarHidden:(BOOL)arg0;
- (void)setSearchEntranceHidden:(BOOL)arg0;
- (void)setBackButtonWithCloseStyle:(BOOL)arg0;
- (void)setStartStateColor:(id)arg0 endStateColor:(id)arg1;
- (id)backgroundContainerView;
- (void)setLiveButtonMuted:(BOOL)arg0;

@end