//
//     Generated by private class-dump
//

@class IESSoloKTVDraftSongModel, NSString, IESLiveGCDTimer, NSObject, IESSoloKTVAudioRecordByteAudioImpl;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface IESSoloKTVAudioRecordManager : NSObject {
    struct IESSoloKTVAudioRecordFilterPipeline { struct vector<IESSoloKTVAudioRecordFilterProtocol *, std::allocator<IESSoloKTVAudioRecordFilterProtocol *>> { struct IESSoloKTVAudioRecordFilterProtocol **__begin_; struct IESSoloKTVAudioRecordFilterProtocol **__end_; struct __compressed_pair<IESSoloKTVAudioRecordFilterProtocol **, std::allocator<IESSoloKTVAudioRecordFilterProtocol *>> { struct IESSoloKTVAudioRecordFilterProtocol **__value_; } __end_cap_; } filters; } pipeline;
    struct IESSoloKTVAudioRecordFilterPipeline { struct vector<IESSoloKTVAudioRecordFilterProtocol *, std::allocator<IESSoloKTVAudioRecordFilterProtocol *>> { struct IESSoloKTVAudioRecordFilterProtocol **__begin_; struct IESSoloKTVAudioRecordFilterProtocol **__end_; struct __compressed_pair<IESSoloKTVAudioRecordFilterProtocol **, std::allocator<IESSoloKTVAudioRecordFilterProtocol *>> { struct IESSoloKTVAudioRecordFilterProtocol **__value_; } __end_cap_; } filters; } earPipeline;
    struct IESSoloKTVAudioRecordFilterPipeline { struct vector<IESSoloKTVAudioRecordFilterProtocol *, std::allocator<IESSoloKTVAudioRecordFilterProtocol *>> { struct IESSoloKTVAudioRecordFilterProtocol **__begin_; struct IESSoloKTVAudioRecordFilterProtocol **__end_; struct __compressed_pair<IESSoloKTVAudioRecordFilterProtocol **, std::allocator<IESSoloKTVAudioRecordFilterProtocol *>> { struct IESSoloKTVAudioRecordFilterProtocol **__value_; } __end_cap_; } filters; } encodePipeline;
    void *midiFilter;
    void *earEffectFilter;
    void *fileFilter;
    void *effectFilter;
    BOOL _isUseOrigin;
    int _playAudioVolume;
    IESSoloKTVAudioRecordByteAudioImpl *_byteAudio;
    id /* block */ _midiCallback;
    NSString *_filePath;
    NSString *_midiPath;
    NSString *_lyricPath;
    NSString *_effectPath;
    IESLiveGCDTimer *_midiTimer;
    IESSoloKTVDraftSongModel *_songModel;
    NSObject<OS_dispatch_queue> *_executeQueue;
    NSObject<OS_dispatch_queue> *_fileQueue;
    double _midiFps;
    id /* block */ _playAudioEndingBlock;
    id /* block */ _playAudioPositionBlock;
    double _writeFileTime;
    NSObject<OS_dispatch_semaphore> *_sem;
}

@property (retain, nonatomic) IESSoloKTVAudioRecordByteAudioImpl *byteAudio;
@property (copy, nonatomic) id /* block */ midiCallback;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSString *midiPath;
@property (retain, nonatomic) NSString *lyricPath;
@property (retain, nonatomic) NSString *effectPath;
@property (retain, nonatomic) IESLiveGCDTimer *midiTimer;
@property (retain, nonatomic) IESSoloKTVDraftSongModel *songModel;
@property (nonatomic) BOOL isUseOrigin;
@property (nonatomic) int playAudioVolume;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fileQueue;
@property (nonatomic) double midiFps;
@property (copy, nonatomic) id /* block */ playAudioEndingBlock;
@property (copy, nonatomic) id /* block */ playAudioPositionBlock;
@property (nonatomic) double writeFileTime;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;

- (id)effectPath;
- (void)setEffectPath:(id)arg0;
- (id)executeQueue;
- (void)setExecuteQueue:(id)arg0;
- (void)updateAudioConfig:(id)arg0;
- (id)midiPath;
- (void)setLyricPath:(id)arg0;
- (void)setMidiPath:(id)arg0;
- (id)lyricPath;
- (void)updateCurrentScene:(id)arg0;
- (void)releaseByteAudio;
- (double)getRecordDelayTime;
- (void)updateMidiTimerFps:(double)arg0;
- (void)setMidiPath:(id)arg0 lyricPath:(id)arg1;
- (void)setMidiScoreCallback:(id /* block */)arg0;
- (void)configDefaultFilters;
- (void)updateAudioEffectPath:(id)arg0;
- (void)updateHeadsetVolume:(int)arg0;
- (void)updatePlayAudioVolume:(int)arg0;
- (void)updateRecordVolume:(int)arg0;
- (void)updatePlayAudioEndingBlock:(id /* block */)arg0;
- (void)updatePlayAudioPositionBlock:(id /* block */)arg0;
- (void)addPlayAudioWithModel:(id)arg0 original:(BOOL)arg1 accompany:(BOOL)arg2;
- (void)useOriginal:(BOOL)arg0;
- (void)seekPlayAudioToAutoPlay:(double)arg0 original:(BOOL)arg1 accompany:(BOOL)arg2;
- (void)updateKaraokeId:(long long)arg0;
- (id)getAudioFileType;
- (void)setSaveFilePath:(id)arg0;
- (BOOL)isPlayAudioStop;
- (void)startRecordAndPlayAudioAtTime:(double)arg0 writeFileTime:(double)arg1 completion:(id /* block */)arg2;
- (void)resumeRecordAndPlayAudioAtTime:(double)arg0 writeFileTime:(double)arg1 completion:(id /* block */)arg2;
- (void)stopRecordAndPlayAudio:(id /* block */)arg0;
- (void)pauseRecordAndPlayAudio:(id /* block */)arg0;
- (void)setEarMonitor:(BOOL)arg0;
- (void)startByteAudioReportTimer;
- (void)cancelByteAudioReportTimer;
- (void)setPlayAudioPositionBlock:(id /* block */)arg0;
- (id /* block */)playAudioPositionBlock;
- (void)startPlayAudioAtTime:(double)arg0 completion:(id /* block */)arg1;
- (void)stopPlayAudio:(id /* block */)arg0;
- (void)pausePlayAudio;
- (void)resumePlayAudio:(id /* block */)arg0;
- (void)updateTone:(int)arg0;
- (void)setWriteFileTime:(double)arg0;
- (void)setByteAudio:(id)arg0;
- (id)byteAudio;
- (void)playAudioEndingAction;
- (void)playAudioPositionAction:(double)arg0 duration:(double)arg1;
- (void)resetEffectStatus;
- (void)seekMidiToTime:(double)arg0;
- (void)startMidiScoreTimerIfNeed;
- (void)stopMidiScoreTimer;
- (void)stopRecordAndGetFilePath:(id /* block */)arg0;
- (void)seekPlayAudioToTime:(double)arg0;
- (void)setPlayAudioEndingBlock:(id /* block */)arg0;
- (void)setSongModel:(id)arg0;
- (id)songModel;
- (void)setIsUseOrigin:(BOOL)arg0;
- (int)playAudioVolume;
- (void)setPlayAudioVolume:(int)arg0;
- (BOOL)isUseOrigin;
- (void)innerSetSaveFilePath:(id)arg0;
- (void)setMidiCallback:(id /* block */)arg0;
- (id)stopRecordAndGetFilePathInternal;
- (void)setMidiFps:(double)arg0;
- (id /* block */)playAudioEndingBlock;
- (double)writeFileTime;
- (double)midiFps;
- (void)setMidiTimer:(id)arg0;
- (id)midiTimer;
- (id /* block */)midiCallback;
- (void)addPlayAudioWithModel:(id)arg0;
- (void)seekPlayAudioTo:(double)arg0 original:(BOOL)arg1 accompany:(BOOL)arg2 autoPlay:(BOOL)arg3;
- (id)sem;
- (id)init;
- (BOOL)isRecording;
- (id)filePath;
- (void).cxx_destruct;
- (void)setFilePath:(id)arg0;
- (BOOL)isPlaying;
- (void)setSem:(id)arg0;
- (void)dealloc;
- (id).cxx_construct;
- (void)timerAction;
- (id)fileQueue;
- (void)setFileQueue:(id)arg0;

@end
