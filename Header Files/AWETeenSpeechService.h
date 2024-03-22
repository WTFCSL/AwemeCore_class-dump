//
//     Generated by private class-dump
//

@class NSString, SpeechEngine;
@protocol AWETeenSpeechServiceDelegate;

@interface AWETeenSpeechService : NSObject <SpeechEngineDelegate> {
    SpeechEngine *_engine;
    id<AWETeenSpeechServiceDelegate> _delegate;
}

@property (retain, nonatomic) SpeechEngine *engine;
@property (weak, nonatomic) id<AWETeenSpeechServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanced;
+ (void)initialize;

- (void)onMessageWithType:(int)arg0 andData:(id)arg1;
- (void)p_startEngine;
- (void)p_setupAsrSDK;
- (void)p_speechDidStart;
- (void)p_speechDidStop;
- (void)p_handleRecordErrorResult:(id)arg0;
- (void)p_handleRecordResult:(id)arg0 isFinish:(BOOL)arg1;
- (void)checkMicrophoneAuthWithComplete:(id /* block */)arg0;
- (void)stopSpeeching;
- (void)startSpeechingWithDelegate:(id)arg0;
- (void)cancleEngine;
- (void)p_checkAudioAccessWithCompleteBlock:(id /* block */)arg0;
- (void)p_destoryAsrSDK;
- (void)p_handleVolumeLevel:(id)arg0;
- (void)p_finishEngine;
- (void).cxx_destruct;
- (id)engine;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setEngine:(id)arg0;

@end
