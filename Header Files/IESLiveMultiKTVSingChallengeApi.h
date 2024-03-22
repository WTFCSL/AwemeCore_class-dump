//
//     Generated by private class-dump
//

@class NSNumber;
@protocol IESLiveKTVFullLinkMonitor;

@interface IESLiveMultiKTVSingChallengeApi : HTSLiveApi {
    NSNumber *_roomId;
    id<IESLiveKTVFullLinkMonitor> _fullMonitor;
}

@property (retain, nonatomic) NSNumber *roomId;
@property (retain, nonatomic) id<IESLiveKTVFullLinkMonitor> fullMonitor;

- (id)roomId;
- (void)setRoomId:(id)arg0;
- (id)initWithRoomID:(id)arg0;
- (void)setFullMonitor:(id)arg0;
- (id)fullMonitor;
- (void)openChallengeWithChallengeType:(int)arg0 target:(unsigned long long)arg1 configType:(int)arg2 completion:(id /* block */)arg3;
- (void)fetchStageType:(id /* block */)arg0;
- (void)noticeStart:(id /* block */)arg0;
- (void)requestSingChallengeConfigWithCompletion:(id /* block */)arg0;
- (void)closeChallengeWithChallengeType:(int)arg0 completion:(id /* block */)arg1;
- (void)reportMidiScore:(unsigned long long)arg0;
- (void)handlerResponse:(id)arg0 request:(id)arg1 error:(id)arg2 startTime:(double)arg3 event:(id)arg4 completion:(id /* block */)arg5;
- (void)noticeHonorList:(id /* block */)arg0;
- (void)updateSwitch:(unsigned long long)arg0 configType:(int)arg1 duration:(long long)arg2 target:(long long)arg3 completion:(id /* block */)arg4;
- (void).cxx_destruct;

@end
