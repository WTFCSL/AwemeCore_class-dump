//
//     Generated by private class-dump
//

@interface AWELeftSideBarNetworkManager : NSObject {
    BOOL _dynamicDataRequesting;
    BOOL _combineDataRequesting;
    double _lastDynamicRequestTimeInterval;
    double _lastCombineRequestTimeInterval;
    long long _currentCombineSessionID;
}

@property (nonatomic) double lastDynamicRequestTimeInterval;
@property (nonatomic) BOOL dynamicDataRequesting;
@property (nonatomic) double lastCombineRequestTimeInterval;
@property (nonatomic) BOOL combineDataRequesting;
@property (nonatomic) long long currentCombineSessionID;

- (void)requestLeftSidebarDynamicModuleDataWithBusinessIDList:(id)arg0 extraParamDict:(id)arg1 completion:(id /* block */)arg2;
- (void)setCurrentCombineSessionID:(long long)arg0;
- (BOOL)combineDataRequesting;
- (double)leftSidebarCombineDataRequestInterval;
- (double)lastCombineRequestTimeInterval;
- (void)setCombineDataRequesting:(BOOL)arg0;
- (void)setLastCombineRequestTimeInterval:(double)arg0;
- (long long)currentCombineSessionID;
- (void)p_requestLeftSidebarCombineWithUserID:(id)arg0 dataHash:(id)arg1 sessionID:(long long)arg2 completion:(id /* block */)arg3;
- (BOOL)dynamicDataRequesting;
- (double)leftSidebarDynamicDataRequestInterval;
- (double)lastDynamicRequestTimeInterval;
- (void)setDynamicDataRequesting:(BOOL)arg0;
- (void)setLastDynamicRequestTimeInterval:(double)arg0;
- (void)requestLeftSidebarAllModuleDataWithUserID:(id)arg0 dataHash:(id)arg1 completion:(id /* block */)arg2;
- (id)init;

@end