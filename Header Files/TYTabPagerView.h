//
//     Generated by private class-dump
//

@class NSString, TYPagerView, TYTabPagerBar, TYPagerViewLayout;
@protocol TYTabPagerViewDelegate, TYTabPagerViewDataSource;

@interface TYTabPagerView : UIView <TYTabPagerBarDataSource, TYTabPagerBarDelegate, TYPagerViewDataSource, TYPagerViewDelegate> {
    TYTabPagerBar *_tabBar;
    TYPagerView *_pageView;
    id<TYTabPagerViewDataSource> _dataSource;
    id<TYTabPagerViewDelegate> _delegate;
    double _tabBarHeight;
    NSString *_identifier;
}

@property (weak, nonatomic) TYTabPagerBar *tabBar;
@property (weak, nonatomic) TYPagerView *pageView;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) TYPagerViewLayout *layout;
@property (weak, nonatomic) id<TYTabPagerViewDataSource> dataSource;
@property (weak, nonatomic) id<TYTabPagerViewDelegate> delegate;
@property (nonatomic) double tabBarHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfItemsInPagerTabBar;
- (double)pagerTabBar:(id)arg0 widthForItemAtIndex:(long long)arg1;
- (void)pagerTabBar:(id)arg0 didSelectItemAtIndex:(long long)arg1;
- (id)pagerTabBar:(id)arg0 cellForItemAtIndex:(long long)arg1;
- (void)setTabBarHeight:(double)arg0;
- (void)pagerView:(id)arg0 willAppearView:(id)arg1 forIndex:(long long)arg2;
- (void)pagerView:(id)arg0 didDisappearView:(id)arg1 forIndex:(long long)arg2;
- (void)pagerView:(id)arg0 transitionFromIndex:(long long)arg1 toIndex:(long long)arg2 animated:(BOOL)arg3;
- (void)pagerView:(id)arg0 transitionFromIndex:(long long)arg1 toIndex:(long long)arg2 progress:(double)arg3;
- (void)pagerViewWillBeginScrolling:(id)arg0 animate:(BOOL)arg1;
- (void)pagerViewDidEndScrolling:(id)arg0 animate:(BOOL)arg1;
- (long long)numberOfViewsInPagerView;
- (id)pagerView:(id)arg0 viewForIndex:(long long)arg1 prefetching:(BOOL)arg2;
- (void)scrollToViewAtIndex:(long long)arg0 animate:(BOOL)arg1;
- (void)addTabBar;
- (void)registerClass:(Class)arg0 forTabBarCellWithReuseIdentifier:(id)arg1;
- (void)registerNib:(id)arg0 forTabBarCellWithReuseIdentifier:(id)arg1;
- (void)registerClass:(Class)arg0 forPagerCellWithReuseIdentifier:(id)arg1;
- (void)registerNib:(id)arg0 forPagerCellWithReuseIdentifier:(id)arg1;
- (id)dequeueReusablePagerCellWithReuseIdentifier:(id)arg0 forIndex:(long long)arg1;
- (void)addPagerView;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (void)setTabBar:(id)arg0;
- (id)tabBar;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)reloadData;
- (id)identifier;
- (id)delegate;
- (id)pageView;
- (id)initWithCoder:(id)arg0;
- (id)layout;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setIdentifier:(id)arg0;
- (void)updateData;
- (double)tabBarHeight;
- (void)setPageView:(id)arg0;

@end