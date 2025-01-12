//
//     Generated by private class-dump
//

@class NSString, AVAudioConverter, AWEIMAudioPowerMeter, NSURL, NSArray, AVAudioFile, NSObject, AVAudioEngine, AVAudioFormat, NSMutableArray;
@protocol OS_dispatch_queue, AWEIMAudioRecorderDelegate, OS_dispatch_semaphore;

@interface AWEIMAudioEnginRecorder : NSObject <AWEIMAudioRecorderInterface> {
    BOOL _meteringEnabled;
    BOOL _recording;
    id<AWEIMAudioRecorderDelegate> _delegate;
    AVAudioFormat *_inputFormat;
    double _currentTime;
    NSObject<OS_dispatch_semaphore> *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_url;
    AVAudioEngine *_audioEngine;
    AVAudioFile *_recordedFile;
    AVAudioConverter *_converter;
    AWEIMAudioPowerMeter *_voiceIOPowerMeter;
    NSArray *_levels;
    NSMutableArray *_processors;
}

@property (nonatomic, getter=isRecording) BOOL recording;
@property (nonatomic) double currentTime;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) AVAudioEngine *audioEngine;
@property (retain, nonatomic) AVAudioFile *recordedFile;
@property (retain, nonatomic) AVAudioFormat *inputFormat;
@property (retain, nonatomic) AVAudioConverter *converter;
@property (retain, nonatomic) AWEIMAudioPowerMeter *voiceIOPowerMeter;
@property (retain, nonatomic) NSArray *levels;
@property (retain, nonatomic) NSMutableArray *processors;
@property (weak) id<AWEIMAudioRecorderDelegate> delegate;
@property (getter=isMeteringEnabled) BOOL meteringEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setup;
- (void)setProcessors:(id)arg0;
- (id)recordedFile;
- (id)voiceIOPowerMeter;
- (void)p_processBuffer:(id)arg0 when:(id)arg1 toFormat:(id)arg2;
- (void)handleAudioEngineConfigurationChangeNoti:(id)arg0;
- (void)setRecordedFile:(id)arg0;
- (void)setVoiceIOPowerMeter:(id)arg0;
- (float)peakPowerForChannel:(unsigned long long)arg0;
- (float)averagePowerForChannel:(unsigned long long)arg0;
- (void)updateMeters;
- (BOOL)isRecording;
- (void).cxx_destruct;
- (void)setCurrentTime:(double)arg0;
- (void)stop;
- (void)setUrl:(id)arg0;
- (id)audioEngine;
- (BOOL)record;
- (void)setMeteringEnabled:(BOOL)arg0;
- (id)delegate;
- (id)lock;
- (double)currentTime;
- (id)queue;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setLock:(id)arg0;
- (void)setQueue:(id)arg0;
- (id)url;
- (void)setRecording:(BOOL)arg0;
- (id)converter;
- (id)levels;
- (void)setLevels:(id)arg0;
- (BOOL)isMeteringEnabled;
- (id)initWithURL:(id)arg0 settings:(id)arg1 error:(id *)arg2;
- (BOOL)deleteRecording;
- (id)inputFormat;
- (void)setInputFormat:(id)arg0;
- (void)setConverter:(id)arg0;
- (void)addProcessor:(id)arg0;
- (id)processors;
- (void)setAudioEngine:(id)arg0;

@end
