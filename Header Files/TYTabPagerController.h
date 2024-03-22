//
//     Generated by private class-dump
//

@class TYPagerController, NSString, TYTabPagerBar, TYPagerViewLayout;
@protocol TYTabPagerControllerDataSource, TYTabPagerControllerDelegate;

@interface TYTabPagerController : UIViewController <TYTabPagerBarDataSource, TYTabPagerBarDelegate, TYPagerControllerDataSource, TYPagerControllerDelegate> {
    TYTabPagerBar *_tabBar;
    TYPagerController *_pagerController;
    id<TYTabPagerControllerDataSource> _dataSource;
    id<TYTabPagerControllerDelegate> _delegate;
    double _tabBarOrignY;
    double _tabBarHeight;
    NSString *_identifier;
}

@property (retain, nonatomic) TYTabPagerBar *tabBar;
@property (retain, nonatomic) TYPagerController *pagerController;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) TYPagerViewLayout *layout;
@property (weak, nonatomic) id<TYTabPagerControllerDataSource> dataSource;
@property (weak, nonatomic) id<TYTabPagerControllerDelegate> delegate;
@property (nonatomic) double tabBarOrignY;
@property (nonatomic) double tabBarHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfControllersInPagerController;
- (id)pagerController:(id)arg0 controllerForIndex:(long long)arg1 prefetching:(BOOL)arg2;
- (long long)numberOfItemsInPagerTabBar;
- (void)pagerControllerDidEndScrolling:(id)arg0 animate:(BOOL)arg1;
- (void)pagerController:(id)arg0 transitionFromIndex:(long long)arg1 toIndex:(long long)arg2 animated:(BOOL)arg3;
- (void)pagerController:(id)arg0 transitionFromIndex:(long long)arg1 toIndex:(long long)arg2 progress:(double)arg3;
- (double)pagerTabBar:(id)arg0 widthForItemAtIndex:(long long)arg1;
- (void)pagerTabBar:(id)arg0 didSelectItemAtIndex:(long long)arg1;
- (id)pagerTabBar:(id)arg0 cellForItemAtIndex:(long long)arg1;
- (void)pagerControllerWillBeginScrolling:(id)arg0 animate:(BOOL)arg1;
- (void)scrollToControllerAtIndex:(long long)arg0 animate:(BOOL)arg1;
- (void)setTabBarHeight:(double)arg0;
- (void)addTabBar;
- (void)addPagerController;
- (void)registerClass:(Class)arg0 forTabBarCellWithReuseIdentifier:(id)arg1;
- (id)pagerController;
- (double)fixedTabBarOriginY;
- (void)setTabBarOrignY:(double)arg0;
- (void)registerNib:(id)arg0 forTabBarCellWithReuseIdentifier:(id)arg1;
- (void)registerClass:(Class)arg0 forPagerCellWithReuseIdentifier:(id)arg1;
- (void)registerNib:(id)arg0 forPagerCellWithReuseIdentifier:(id)arg1;
- (id)dequeueReusablePagerCellWithReuseIdentifier:(id)arg0 forIndex:(long long)arg1;
- (void)setPagerController:(id)arg0;
- (double)tabBarOrignY;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (void)setTabBar:(id)arg0;
- (id)tabBar;
- (void)reloadData;
- (id)identifier;
- (id)delegate;
- (id)initWithCoder:(id)arg0;
- (void)didReceiveMemoryWarning;
- (id)layout;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setIdentifier:(id)arg0;
- (void)updateData;
- (double)tabBarHeight;

@end
