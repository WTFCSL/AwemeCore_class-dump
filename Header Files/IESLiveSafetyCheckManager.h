//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveDebugService, IESLiveCustomConfig, IESLiveMonitor;

@interface IESLiveSafetyCheckManager : NSObject <IESLiveSafetyCheckManager> {
    id<IESLiveCustomConfig> _customConfig;
    id<IESLiveDebugService> _debugService;
    id<IESLiveMonitor> _monitor;
}

@property (retain, nonatomic) id<IESLiveCustomConfig> customConfig;
@property (retain, nonatomic) id<IESLiveDebugService> debugService;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)safeCheckManager;

- (id)customConfig;
- (void)setCustomConfig:(id)arg0;
- (long long)willForbidEnterliveSafetyRequirement:(id)arg0;
- (long long)willForbidEnterliveSafetyRequirement:(id)arg0 withParams:(id)arg1;
- (long long)willForbidOpenLiveSafetyRequirement:(id)arg0;
- (BOOL)didForbidEnterliveSafetyRequirement:(id)arg0 withParams:(id)arg1;
- (BOOL)didForbidOpenLiveSafetyRequirementWithParams:(id)arg0;
- (BOOL)willForbidShareSafetyRequirement:(id)arg0;
- (BOOL)didForbidShareSafetyRequirement:(id)arg0 withParams:(id)arg1;
- (BOOL)anchorIsPrivate:(id)arg0;
- (void)setDebugService:(id)arg0;
- (id)debugService;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;

@end
