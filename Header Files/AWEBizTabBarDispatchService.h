//
//     Generated by private class-dump
//

@class NSString;

@interface AWEBizTabBarDispatchService : HTSService <AWEBizTabBarDispatchService> {
    BOOL _tabBarVCHasReload;
}

@property (nonatomic) BOOL tabBarVCHasReload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)hitSecondPageDispatchOpt;
- (double)maxDelayReloadTime;
- (id)placeholderVCName;
- (BOOL)isLastLaunchException;
- (void)setLatestLaunchException:(BOOL)arg0;
- (BOOL)tabBarVCHasReload;
- (void)setTabBarVCHasReload:(BOOL)arg0;
- (id)currentLaunchConfig;
- (id)config;

@end
