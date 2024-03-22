//
//     Generated by private class-dump
//

@class NSTimer, BDPThreadSafeDictionary;

@interface BDPPluginGuideWindow : BDPBridgeInstancePlugin {
    NSTimer *_timer;
    BDPThreadSafeDictionary *_serverIdTaskIDDic;
}

@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) BDPThreadSafeDictionary *serverIdTaskIDDic;

- (void)setServerIdTaskIDDic:(id)arg0;
- (void)sendUpdateReviewInfoReq:(id)arg0 uniqueID:(id)arg1 taskID:(id)arg2;
- (id)serverIdTaskIDDic;
- (void)sendGetReviewInfoReqWithUniqueID:(id)arg0;
- (void)buildNewTimerWithIntervalIfNeeded:(double)arg0 executeBlock:(id /* block */)arg1;
- (id)getResultInfo:(id)arg0 error:(id)arg1 taskID:(id)arg2 logId:(id)arg3;
- (void)reviewResultInfoDone:(id)arg0 uniqueID:(id)arg1;
- (void)updateExitGuideWindowInfoSyncWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (id)timer;
- (id)init;
- (void).cxx_destruct;
- (void)setTimer:(id)arg0;
- (void)dealloc;

@end