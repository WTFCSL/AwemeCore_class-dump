//
//     Generated by private class-dump
//

@protocol IESLiveCarnivalRouter <IESLiveMessageInteractionModuleCarnivalInterface>

- (void)hideCarnivalDanmaku;
- (void)showCarnivalDanmaku;
- (void)prepareForStartCarnivalMomentWith:(id)arg0;
- (void)startCarnivalMoment;
- (void)stopCarnivalMoment;
- (void)cleanAllCarnivalDanmaku;
- (void)anchorContourDetectConfigChange:(id)arg0;
- (void)generalCarnivalWillAppear:(BOOL)arg0 withMsg:(id)arg1;
- (void)generalCarnivalSpecialContentShow:(BOOL)arg0;
- (void)addCarnivalDanmakuNodeWithMessage:(id)arg0;

@end
