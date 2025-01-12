//
//     Generated by private class-dump
//

@protocol IESLiveAudioRecorderDelegate, IESLiveAudioRecorderOutput;

@protocol IESLiveAudioRecorderProvider <NSObject>

@property (weak, nonatomic) id<IESLiveAudioRecorderDelegate> delegate;
@property (retain, nonatomic) id<IESLiveAudioRecorderOutput> audioOutput;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL meteringEnabled;

- (void)stopRecord;
- (void)startRecord;
- (void)setAudioOutput:(id)arg0;
- (void)setIsRunning:(BOOL)arg0;
- (BOOL)isRunning;
- (id)delegate;
- (id)audioOutput;
- (void)setDelegate:(id)arg0;
- (BOOL)prepareToRecord;

@optional

- (float)peakPowerForChannel:(unsigned long long)arg0;
- (float)averagePowerForChannel:(unsigned int)arg0;
- (void)setMeteringEnabled:(BOOL)arg0;
- (BOOL)meteringEnabled;
- (struct OpaqueAudioQueue { } *)audioQueue;

@end
