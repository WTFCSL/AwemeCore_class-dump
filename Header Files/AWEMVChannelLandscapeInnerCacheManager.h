//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, AWEMVChannelDataController;

@interface AWEMVChannelLandscapeInnerCacheManager : NSObject <AWEMVChannelInnerCacheManagerProtocol> {
    BOOL _isLandscapePreloading;
    NSMutableArray *_landscapeAwemeCache;
    AWEMVChannelDataController *_landscapePreloadDataController;
}

@property (retain, nonatomic) NSMutableArray *landscapeAwemeCache;
@property (retain, nonatomic) AWEMVChannelDataController *landscapePreloadDataController;
@property (nonatomic) BOOL isLandscapePreloading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)updateAwemeListWhenExitLandscape;
- (id)awemeListForLandscape;
- (void)appendLandscapeAwemeList:(id)arg0;
- (void)removeLandscapeAll;
- (id)landscapeAwemeCache;
- (BOOL)isLandscapePreloading;
- (void)setIsLandscapePreloading:(BOOL)arg0;
- (void)setLandscapePreloadDataController:(id)arg0;
- (id)landscapePreloadDataController;
- (void)removeLandscapeAweme:(id)arg0;
- (void)preloadDataBeforeEnterLandscapeInflowIfNeededWithModel:(id)arg0 context:(id)arg1;
- (void)setLandscapeAwemeCache:(id)arg0;
- (void).cxx_destruct;

@end
