//
//     Generated by private class-dump
//

@class AVMutableComposition, AVAssetReader, NSError, AVAssetReaderOutput, NSObject;
@protocol OS_dispatch_queue;

@interface IESMMAudioFile : NSObject {
    BOOL _hasAudio;
    BOOL _audioEncodingIsFinished;
    int _audioChannel;
    int _audioSampleRate;
    NSError *_error;
    AVMutableComposition *_srcAsset;
    unsigned long long _processAudioStatus;
    AVAssetReaderOutput *_audioOutput;
    AVAssetReader *_audioReaderProcess;
    id /* block */ _audioReadyCallback;
    id /* block */ _audioPreProcessBlock;
    NSObject<OS_dispatch_queue> *_preProcessQue;
}

@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) AVMutableComposition *srcAsset;
@property (nonatomic) BOOL hasAudio;
@property (nonatomic) unsigned long long processAudioStatus;
@property (retain, nonatomic) AVAssetReaderOutput *audioOutput;
@property (retain, nonatomic) AVAssetReader *audioReaderProcess;
@property (copy, nonatomic) id /* block */ audioReadyCallback;
@property (nonatomic) BOOL audioEncodingIsFinished;
@property (copy, nonatomic) id /* block */ audioPreProcessBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *preProcessQue;
@property (nonatomic) int audioChannel;
@property (nonatomic) int audioSampleRate;

+ (id)createAudioReader:(id)arg0;

- (BOOL)audioEncodingIsFinished;
- (void)setAudioEncodingIsFinished:(BOOL)arg0;
- (id)initWithAVAsset:(id)arg0 inOutputSetting:(id)arg1;
- (id)audioReaderProcess;
- (void)setAudioPreProcessBlock:(id /* block */)arg0;
- (void)setProcessAudioStatus:(unsigned long long)arg0;
- (id /* block */)audioPreProcessBlock;
- (void)setAudioReaderCallback;
- (id /* block */)audioReadyCallback;
- (void)setAudioReadyCallback:(id /* block */)arg0;
- (id)getReaderError;
- (struct opaqueCMSampleBuffer { } *)processAndReadSample:(id /* block */)arg0;
- (int)audioChannel;
- (BOOL)startProcess:(struct opaqueCMSampleBuffer { } *)arg0 inBlock:(id /* block */)arg1;
- (id)srcAsset;
- (unsigned long long)processAudioStatus;
- (void)setAudioReaderProcess:(id)arg0;
- (id)preProcessQue;
- (void)setPreProcessQue:(id)arg0;
- (void)setAudioChannel:(int)arg0;
- (void)setAudioOutput:(id)arg0;
- (void).cxx_destruct;
- (id)audioOutput;
- (BOOL)hasAudio;
- (void)setError:(id)arg0;
- (void)dealloc;
- (id)error;
- (void)setHasAudio:(BOOL)arg0;
- (void)setAudioSampleRate:(int)arg0;
- (int)audioSampleRate;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBuffer;
- (BOOL)startReader;
- (void)stopReader;

@end