//
//     Generated by private class-dump
//

@class NSCache;

@interface PuzzleStateInjectConfigDataGenerator : NSObject {
    NSCache *_configCache;
    NSCache *_templateDataCache;
}

@property (retain, nonatomic) NSCache *configCache;
@property (retain, nonatomic) NSCache *templateDataCache;

+ (id)stateGlobalPropWith:(id)arg0 routerParams:(id)arg1 context:(id)arg2 stateCenter:(id)arg3;
+ (id)sharedManager;

- (void)appDidReceiveMemoryWarningNotification;
- (id)configCache;
- (void)setConfigCache:(id)arg0;
- (id)templateDataCache;
- (void)setTemplateDataCache:(id)arg0;
- (id)stateGlobalPropWith:(id)arg0 routerParams:(id)arg1 context:(id)arg2 stateCenter:(id)arg3;
- (id)channelWith:(id)arg0 routerParams:(id)arg1;
- (BOOL)hasInjectConfigWith:(id)arg0 routerParams:(id)arg1;
- (void)reportSlardarWith:(id)arg0 context:(id)arg1 url:(id)arg2;
- (void)logMessage:(id)arg0 context:(id)arg1;
- (id)findCurrentPrefetchDataWith:(id)arg0;
- (id)isDisablePrefetch:(id)arg0 routerParams:(id)arg1;
- (id)isDisableStorage:(id)arg0 routerParams:(id)arg1;
- (id)findCurrentStorageDataWithConfig:(id)arg0 url:(id)arg1 routerParams:(id)arg2 stateCenter:(id)arg3;
- (id)findPuzzleStateDataWith:(id)arg0 routerParams:(id)arg1 stateCenter:(id)arg2;
- (void)configTemplateDataIfNeed:(id)arg0 channel:(id)arg1 context:(id)arg2;
- (id)findStorageKeysWithConfig:(id)arg0 url:(id)arg1 routerParams:(id)arg2;
- (id)findPuzzleStateKeysWith:(id)arg0 routerParams:(id)arg1;
- (id)findInjectConfigWith:(id)arg0 routerParams:(id)arg1;
- (id)parseDynamicStorageKey:(id)arg0 url:(id)arg1 routerParams:(id)arg2;
- (id)scenceWith:(id)arg0 routerParams:(id)arg1;
- (id)injectFullConfigWith:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;

@end
