//
//     Generated by private class-dump
//

@interface AWELiveImpl.AWELiveDynamicIslandHandler : NSObject <AWELiveDynamicIslandActivityProtocol> {
    void /* unknown type, empty encoding */ activitySingleton;
    void /* unknown type, empty encoding */ anchorNickName;
    void /* unknown type, empty encoding */ roomTitle;
    void /* unknown type, empty encoding */ roomSchema;
    void /* unknown type, empty encoding */ onlineWatchUser;
    void /* unknown type, empty encoding */ roomDiggTotal;
    void /* unknown type, empty encoding */ activityStyle;
    void /* unknown type, empty encoding */ activityType;
    void /* unknown type, empty encoding */ activityProgress;
    void /* unknown type, empty encoding */ activityID;
}

- (void)startActivity:(id)arg0 completion:(id /* block */)arg1;
- (void)updateActivity:(id)arg0 completion:(id /* block */)arg1;
- (void)updateRealtimeActivity:(id)arg0;
- (void)endActivityAll;
- (void)activityAuthorizationInfoTrackerWithCompletion:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)endActivity;
- (void)handleActivity:(id)arg0;

@end
