//
//     Generated by private class-dump
//

@interface AWENearbyDiamondPreloadManager : NSObject {
    BOOL _isPreloadSuccess;
    BOOL _hasAlreadyStartedPreload;
}

@property (nonatomic) BOOL hasAlreadyStartedPreload;
@property (nonatomic) BOOL isPreloadSuccess;

+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (BOOL)isPreloadSuccess;
- (void)prefechDiamondGeckoResourceIfNeed;
- (void)__preloadNearbyDiamondResourceWithArr:(id)arg0 geckoPreload:(BOOL)arg1 lynxPreload:(BOOL)arg2;
- (BOOL)hasAlreadyStartedPreload;
- (void)setHasAlreadyStartedPreload:(BOOL)arg0;
- (void)__trackWithPreloadResult:(id)arg0;
- (void)setIsPreloadSuccess:(BOOL)arg0;
- (void)__preloadLynxViewWithScene:(long long)arg0 cardType:(long long)arg1 url:(id)arg2 preloadResult:(id)arg3;
- (void)preloadDiamond;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;

@end
