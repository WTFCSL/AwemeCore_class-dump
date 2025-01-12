//
//     Generated by private class-dump
//

@class UIViewController, AWEHPChannelEditAbilityImpl, AWEHPChannelBadgeAbilityImpl, AWEHPChannelTopBarAbilityImpl, AWEHPChannelBubbleAbilityImpl, NSString, AWEHPChannelTabItemAbilityImpl, AWEHPChannelRefreshAbilityImpl, NSArray, AWEHPChannelCommonStage, AWEHPChannelBottomBarStage, AWEHPChannelTopBarStage, AWEHPChannelPageAbilityImpl, AWEHPChannelXTabStage, NSObject, AWEHPChannelCornerAbilityImpl, AWEHPChannelBaseManager, AWEHPChannelPageViewController, AWEHPTopTabItemModel, AWEHPChannelControllerConfig, AWEHPChannelThemeAbilityImpl;
@protocol AWEHPChannelControllerProtocol, AWEFeedTabItemViewControllerProtocol;

@interface AWEFeedChannelObject : NSObject {
    BOOL _isChannelLoaded;
    BOOL _tryUnloadFlag;
    BOOL _isChannelViewAppear;
    BOOL _isXtabChannel;
    AWEHPTopTabItemModel *_model;
    AWEFeedChannelObject *_parentChannel;
    AWEHPChannelControllerConfig *_config;
    NSObject<AWEHPChannelControllerProtocol> *_controller;
    AWEHPChannelBaseManager *_channelManager;
    NSArray *_lifeCycleControllers;
    UIViewController<AWEFeedTabItemViewControllerProtocol> *_contentViewController;
    AWEHPChannelPageViewController *_pageViewController;
    double _viewAppearTimeInterval;
    AWEHPChannelTopBarAbilityImpl *_topBarAbilityImpl;
    AWEHPChannelPageAbilityImpl *_pageAbilityImpl;
    AWEHPChannelTabItemAbilityImpl *_tabItemAbilityImpl;
    AWEHPChannelBubbleAbilityImpl *_bubbleAbilityImpl;
    AWEHPChannelEditAbilityImpl *_editAbilityImpl;
    AWEHPChannelRefreshAbilityImpl *_refreshAbilityImpl;
    AWEHPChannelBadgeAbilityImpl *_badgeAbilityImpl;
    AWEHPChannelThemeAbilityImpl *_themeAbilityImpl;
    AWEHPChannelCornerAbilityImpl *_cornerAbilityImpl;
    NSArray *_abilityImplList;
    AWEHPChannelBottomBarStage *_tabBarStage;
    AWEHPChannelTopBarStage *_topTabStage;
    AWEHPChannelXTabStage *_xTabStage;
    AWEHPChannelCommonStage *_commonStage;
}

@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) NSString *channelType;
@property (readonly, nonatomic) NSString *channelTitle;
@property (readonly, nonatomic) NSString *referString;
@property (readonly, nonatomic) long long index;
@property (retain, nonatomic) AWEHPTopTabItemModel *model;
@property (nonatomic) BOOL isChannelLoaded;
@property (nonatomic) BOOL tryUnloadFlag;
@property (weak, nonatomic) AWEFeedChannelObject *parentChannel;
@property (retain, nonatomic) AWEHPChannelControllerConfig *config;
@property (retain, nonatomic) NSObject<AWEHPChannelControllerProtocol> *controller;
@property (retain, nonatomic) AWEHPChannelBaseManager *channelManager;
@property (copy, nonatomic) NSArray *lifeCycleControllers;
@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *contentViewController;
@property (retain, nonatomic) AWEHPChannelPageViewController *pageViewController;
@property (nonatomic) BOOL isChannelViewAppear;
@property (nonatomic) double viewAppearTimeInterval;
@property (retain, nonatomic) AWEHPChannelTopBarAbilityImpl *topBarAbilityImpl;
@property (retain, nonatomic) AWEHPChannelPageAbilityImpl *pageAbilityImpl;
@property (retain, nonatomic) AWEHPChannelTabItemAbilityImpl *tabItemAbilityImpl;
@property (retain, nonatomic) AWEHPChannelBubbleAbilityImpl *bubbleAbilityImpl;
@property (retain, nonatomic) AWEHPChannelEditAbilityImpl *editAbilityImpl;
@property (retain, nonatomic) AWEHPChannelRefreshAbilityImpl *refreshAbilityImpl;
@property (retain, nonatomic) AWEHPChannelBadgeAbilityImpl *badgeAbilityImpl;
@property (retain, nonatomic) AWEHPChannelThemeAbilityImpl *themeAbilityImpl;
@property (retain, nonatomic) AWEHPChannelCornerAbilityImpl *cornerAbilityImpl;
@property (copy, nonatomic) NSArray *abilityImplList;
@property (retain, nonatomic) AWEHPChannelBottomBarStage *tabBarStage;
@property (retain, nonatomic) AWEHPChannelTopBarStage *topTabStage;
@property (retain, nonatomic) AWEHPChannelXTabStage *xTabStage;
@property (retain, nonatomic) AWEHPChannelCommonStage *commonStage;
@property (nonatomic) BOOL isXtabChannel;

- (id)referString;
- (id)tabBarStage;
- (BOOL)bottomBarFillBackground;
- (id)tabItemAbilityImpl;
- (id)topTabStage;
- (unsigned long long)topBarThemeStyle;
- (id)commonStage;
- (unsigned long long)bottomBarThemeStyle;
- (void)setLifeCycleControllers:(id)arg0;
- (void)setIsChannelLoaded:(BOOL)arg0;
- (void)setIsXtabChannel:(BOOL)arg0;
- (void)setCommonStage:(id)arg0;
- (void)setTabBarStage:(id)arg0;
- (id)xTabStage;
- (BOOL)isXtabChannel;
- (BOOL)isChannelLoaded;
- (BOOL)tryUnloadFlag;
- (void)setTryUnloadFlag:(BOOL)arg0;
- (id)lifeCycleControllers;
- (BOOL)isChannelViewAppear;
- (void)setIsChannelViewAppear:(BOOL)arg0;
- (double)viewAppearTimeInterval;
- (void)setViewAppearTimeInterval:(double)arg0;
- (id)topBarAbilityImpl;
- (void)setTopBarAbilityImpl:(id)arg0;
- (id)pageAbilityImpl;
- (void)setPageAbilityImpl:(id)arg0;
- (void)setTabItemAbilityImpl:(id)arg0;
- (id)bubbleAbilityImpl;
- (void)setBubbleAbilityImpl:(id)arg0;
- (id)editAbilityImpl;
- (void)setEditAbilityImpl:(id)arg0;
- (id)refreshAbilityImpl;
- (void)setRefreshAbilityImpl:(id)arg0;
- (id)badgeAbilityImpl;
- (void)setBadgeAbilityImpl:(id)arg0;
- (id)themeAbilityImpl;
- (void)setThemeAbilityImpl:(id)arg0;
- (id)cornerAbilityImpl;
- (void)setCornerAbilityImpl:(id)arg0;
- (id)abilityImplList;
- (void)setAbilityImplList:(id)arg0;
- (void)setTopTabStage:(id)arg0;
- (void)setXTabStage:(id)arg0;
- (void)setController:(id)arg0;
- (void)setModel:(id)arg0;
- (id)channelType;
- (id)contentViewController;
- (void)setConfig:(id)arg0;
- (id)channelID;
- (void)setChannelManager:(id)arg0;
- (void).cxx_destruct;
- (id)pageViewController;
- (void)setContentViewController:(id)arg0;
- (id)model;
- (id)config;
- (id)controller;
- (id)debugDescription;
- (long long)index;
- (id)channelManager;
- (id)description;
- (void)setPageViewController:(id)arg0;
- (id)parentChannel;
- (void)setParentChannel:(id)arg0;
- (id)channelTitle;

@end
