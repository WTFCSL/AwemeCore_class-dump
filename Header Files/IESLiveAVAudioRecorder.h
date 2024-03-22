//
//     Generated by private class-dump
//

@class AVAudioRecorder, NSString;
@protocol IESLiveAudioRecorderDelegate, IESLiveAudioRecorderOutput;

@interface IESLiveAVAudioRecorder : NSObject <AVAudioRecorderDelegate, IESLiveAudioRecorderProvider> {
    BOOL isRunning;
    id<IESLiveAudioRecorderDelegate> delegate;
    id<IESLiveAudioRecorderOutput> audioOutput;
    AVAudioRecorder *_recorder;
}

@property (retain, nonatomic) AVAudioRecorder *recorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveAudioRecorderDelegate> delegate;
@property (retain, nonatomic) id<IESLiveAudioRecorderOutput> audioOutput;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL meteringEnabled;

- (void)stopRecord;
- (void)startRecord;
- (void)setAudioOutput:(id)arg0;
- (float)peakPowerForChannel:(unsigned long long)arg0;
- (float)averagePowerForChannel:(unsigned int)arg0;
- (void)setIsRunning:(BOOL)arg0;
- (BOOL)isRunning;
- (void).cxx_destruct;
- (id)recorder;
- (void)setMeteringEnabled:(BOOL)arg0;
- (id)delegate;
- (id)audioOutput;
- (void)setRecorder:(id)arg0;
- (void)setDelegate:(id)arg0;
- (BOOL)meteringEnabled;
- (void)audioRecorderDidFinishRecording:(id)arg0 successfully:(BOOL)arg1;
- (BOOL)prepareToRecord;
- (void)audioRecorderEncodeErrorDidOccur:(id)arg0 error:(id)arg1;

@end
