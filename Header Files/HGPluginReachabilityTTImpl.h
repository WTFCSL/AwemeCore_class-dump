//
//     Generated by private class-dump
//

@class NSString, TTReachability;
@protocol HGReachabilityStateDelegate;

@interface HGPluginReachabilityTTImpl : NSObject <HGReachabilityPluginDelegate> {
    id<HGReachabilityStateDelegate> _delegate;
    TTReachability *_reachability;
    unsigned long long _lastNetworkType;
}

@property (weak, nonatomic) id<HGReachabilityStateDelegate> delegate;
@property (retain, nonatomic) TTReachability *reachability;
@property (nonatomic) unsigned long long lastNetworkType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (id)currentPrioritizedCellularProviders;
- (void)reachabilityChangeDelegate:(id)arg0;
- (void)reachabilityHandler:(id)arg0;
- (void)setLastNetworkType:(unsigned long long)arg0;
- (unsigned long long)lastNetworkType;
- (id)init;
- (id)reachability;
- (void).cxx_destruct;
- (unsigned long long)currentNetworkType;
- (void)setReachability:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
