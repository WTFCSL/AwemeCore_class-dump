//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface BDPLocationPermissionScope : BDPBasePermissionScope {
    NSMutableArray *_completionLists;
}

+ (void)bootstrapLaunch;
+ (id)sharedScope;

- (id)desc:(id)arg0;
- (id)title:(id)arg0;
- (long long)freeType;
- (BOOL)isNeedRecorded;
- (BOOL)isCanCombine:(id)arg0;
- (id)brief:(id)arg0;
- (void)forceRequestPermission:(id)arg0 completion:(id /* block */)arg1;
- (unsigned long long)privacyScopeEnumName;
- (id)briefDesc:(id)arg0;
- (void)beforeAcquirePermission:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)eventName;

@end
