//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, UIViewController;

@protocol IESLiveFeedDrawerProvider <NSObject>

@property (readonly, nonatomic) BOOL enableCleanScreen;
@property (nonatomic) BOOL usePlatformData;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) HTSEventContext *originTrackContext;
@property (nonatomic) BOOL isFromNearbyTV;
@property (retain, nonatomic) NSString *nearbyCityCode;
@property (readonly, nonatomic) BOOL isAppearing;
@property (readonly, nonatomic) UIViewController *viewController;
@property (nonatomic) BOOL hasVSProgramEntrance;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)componentDidAppear;
- (void)addPanGesture;
- (void)refreshLayout:(BOOL)arg0;
- (void)setNearbyCityCode:(id)arg0;
- (void)showLeftPanGuide;
- (void)showFeedDrawerFrom:(id)arg0;
- (void)hideFeedDrawer;
- (void)hideFeedDrawerFrom:(id)arg0 completion:(id /* block */)arg1;
- (void)hideFeedDrawerWithCompletion:(id /* block */)arg0;
- (void)hideFeedDrawerFrom:(id)arg0 isDraw:(BOOL)arg1 force:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setEnableShowGesture:(BOOL)arg0;
- (id)feedDrawerEntrance;
- (void)setEntranceHidden:(BOOL)arg0;
- (void)showConcernlistGuide:(id)arg0 total:(long long)arg1;
- (BOOL)needShowDrawerFeedLeftPanGuide;
- (id)showNewLeftPanGuide;
- (void)hideLefPanGuide;
- (void)updateVerticalTypeInfo:(id)arg0 room:(id)arg1;
- (void)trackMoreAnchorShow:(BOOL)arg0;
- (double)drawerWidthWhenSplit;
- (id)drawerContainer;
- (BOOL)existDrawerVC;
- (void)hyalinizeEntrance;
- (void)unHyalinizeEntrance;
- (void)willAutoRotateTo:(long long)arg0;
- (void)didAutoRotateTo:(long long)arg0;
- (void)cancelPerformAction;
- (BOOL)isRelationGuideViewShowing;
- (void)updateCurrentTabFeedURLParams:(id)arg0;
- (id)getCurrentTabFeedURLParams;
- (BOOL)isNeedToCleanMode;
- (BOOL)enableCleanScreen;
- (BOOL)usePlatformData;
- (void)setUsePlatformData:(BOOL)arg0;
- (id)originTrackContext;
- (void)setOriginTrackContext:(id)arg0;
- (BOOL)isFromNearbyTV;
- (void)setIsFromNearbyTV:(BOOL)arg0;
- (id)nearbyCityCode;
- (BOOL)hasVSProgramEntrance;
- (void)setHasVSProgramEntrance:(BOOL)arg0;
- (id)viewController;
- (BOOL)isAppearing;

@end