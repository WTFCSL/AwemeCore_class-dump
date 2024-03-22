//
//     Generated by private class-dump
//

@class AWECommentAudioRecorderViewModel;

@protocol AWECommentAudioRecorderBaseViewProtocol <NSObject>

@property (weak, nonatomic) AWECommentAudioRecorderViewModel *viewModel;

- (void)startWorkWithPreState:(unsigned long long)arg0 currentState:(unsigned long long)arg1;
- (void)stopWorkWithPreState:(unsigned long long)arg0 currentState:(unsigned long long)arg1;
- (void)willStopWorkWithLeftTime:(double)arg0 preState:(unsigned long long)arg1 currentState:(unsigned long long)arg2;
- (void)increaseVolumeAnimation:(double)arg0 currentTime:(double)arg1;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)updateWithViewModel:(id)arg0;

@end
