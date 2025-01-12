//
//     Generated by private class-dump
//

@class UIView;

@protocol IESLiveVSScreenRecorderProtocol <NSObject>

@property (readonly, nonatomic) double seconds;
@property (nonatomic) double maxDuration;
@property (readonly, nonatomic) BOOL isRecording;
@property (readonly, weak, nonatomic) UIView *targetView;

- (id)initWithTargetView:(id)arg0 completed:(id /* block */)arg1;
- (void)updateTargetView:(id)arg0;
- (BOOL)isRecording;
- (id)targetView;
- (void)stop;
- (double)seconds;
- (void)cancel;
- (void)start;
- (double)maxDuration;
- (void)setMaxDuration:(double)arg0;

@end
