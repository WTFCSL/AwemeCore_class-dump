//
//     Generated by private class-dump
//

@protocol BDPScreenRecordPluginDelegate <BDPBasePluginDelegate>

@property (readonly, nonatomic) BOOL isRecording;
@property (readonly, nonatomic) unsigned long long switchType;

- (BOOL)isRecording;
- (unsigned long long)switchType;

@optional

- (void)bdp_screenRecorderForceStop:(id)arg0 error:(id)arg1 extra:(id)arg2;
- (void)bdp_screenRecorderPauseWithAppID:(id)arg0 extra:(id)arg1 completion:(id /* block */)arg2;
- (void)bdp_screenRecorderResumeWithAppID:(id)arg0 extra:(id)arg1 completion:(id /* block */)arg2;
- (void)bdp_screenRecorderDidStartWithAppID:(id)arg0 extra:(id)arg1;
- (void)bdp_screenRecorderWillStartWithAppID:(id)arg0 extra:(id)arg1;
- (void)bdp_screenRecorderWillStopWithAppID:(id)arg0 extra:(id)arg1;
- (void)bdp_screenRecorderDidStopWithAppID:(id)arg0 extra:(id)arg1;
- (void)bdp_screenRecorderWithSampleBuffer:(struct __CVBuffer { } *)arg0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 extra:(id)arg2;
- (void)bdp_screenRecorderWithAppID:(id)arg0 exception:(id)arg1 extra:(id)arg2;
- (void)bdp_screenRecorderWithAppID:(id)arg0 runningStateDidChanged:(unsigned long long)arg1 extra:(id)arg2;
- (void)bdp_buttonDidShow:(unsigned long long)arg0 appID:(id)arg1 extra:(id)arg2;
- (void)bdp_buttonDidClick:(unsigned long long)arg0 appID:(id)arg1 extra:(id)arg2;

@end