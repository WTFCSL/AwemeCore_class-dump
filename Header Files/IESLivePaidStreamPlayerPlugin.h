//
//     Generated by private class-dump
//

@class NSString;
@protocol HTSLiveStreamPlayerProvider;

@interface IESLivePaidStreamPlayerPlugin : NSObject <HTSLiveStreamPlayerAction, HTSLiveAudienceActions, IESLivePipActions, IESLivePipUnitActions, IESLivePaidStreamPlugin> {
    BOOL _liveViewDidDisappear;
    id<HTSLiveStreamPlayerProvider> _streamPlayer;
}

@property (weak, nonatomic) id<HTSLiveStreamPlayerProvider> streamPlayer;
@property (nonatomic, getter=isLiveViewDidDisappear) BOOL liveViewDidDisappear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)streamPlayer;
- (void)startToShowPipWithShowType:(unsigned long long)arg0;
- (void)setStreamPlayer:(id)arg0;
- (void)liveWillAppear;
- (void)liveWillDisappear;
- (void)closePipWithShowType:(unsigned long long)arg0;
- (void)fromPipToRoomWithShowType:(unsigned long long)arg0;
- (void)pipNeedToEnterNewRoom:(unsigned long long)arg0;
- (void)paidStreamDidStop:(id)arg0;
- (void)paidStreamTrialWillStart:(id)arg0;
- (void)paidStreamTrialDidStart:(id)arg0;
- (void)paidStream:(id)arg0 trialRemainingTimeDidChange:(double)arg1;
- (void)paidStream:(id)arg0 didFinishTrialWithReason:(unsigned long long)arg1;
- (void)paidStream:(id)arg0 authDidEndWithReason:(unsigned long long)arg1;
- (void)paidStream:(id)arg0 didChangeAuthRetType:(unsigned long long)arg1 reason:(unsigned long long)arg2;
- (void)paidStream:(id)arg0 didChangeAuthPromiseType:(unsigned long long)arg1 reason:(unsigned long long)arg2;
- (void)paidStream:(id)arg0 screenCapturedDidChange:(BOOL)arg1;
- (void)muteStream;
- (void)unMuteStream;
- (void)streamPlayerDidReadyToRender;
- (void)playerDidEndplayInSmallWindow;
- (void)didShowStageForPipModel:(id)arg0;
- (void)didCloseStageForPipModel:(id)arg0;
- (void)duringReturnToLiveForPipModel:(id)arg0;
- (void)setPlayerStatusWhenCaptured:(BOOL)arg0;
- (BOOL)isLiveViewDidDisappear;
- (void)setLiveViewDidDisappear:(BOOL)arg0;
- (void)setPlayerStatusIfScreenCapturedWhenShowPip:(unsigned long long)arg0;
- (void)setPlayerStatusIfScreenCapturedWhenClosePip:(unsigned long long)arg0;
- (void).cxx_destruct;

@end
