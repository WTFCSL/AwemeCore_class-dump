//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface LVModulesLaunchStatistics : NSObject <LVModulesLaunchStatisticsDeleagte> {
    NSMutableDictionary *_cache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)launchDraft:(id)arg0;
- (void)safeLaunchDraft:(id)arg0;
- (void)startLaunch:(id)arg0 withKey:(id)arg1;
- (void)endLaunch:(id)arg0 withKey:(id)arg1;
- (id)exportDraftData:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)clear:(id)arg0;
- (void)clear;

@end
