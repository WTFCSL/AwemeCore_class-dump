//
//     Generated by private class-dump
//

@class NSString, LSRawDataAssetWriter;

@interface LiveStreamRawDataHelper : NSObject {
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *video_origined_fp;
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *audio_origined_fp;
    BOOL _dumpIsFinished;
    BOOL _isAssemble;
    int _audioWriteSize;
    int _audioLimitSize;
    LSRawDataAssetWriter *_originRecorder;
    LSRawDataAssetWriter *_effectedRecorder;
    id /* block */ _completionHandler;
    long long _processVideoBufCount;
    NSString *_videoFileName;
    long long _maxProcessVideoBufCount;
    NSString *_recordStartTime;
    NSString *_originRecordURL;
    NSString *_audioFileName;
    NSString *_audioFormat;
}

@property (retain, nonatomic) LSRawDataAssetWriter *originRecorder;
@property (retain, nonatomic) LSRawDataAssetWriter *effectedRecorder;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL dumpIsFinished;
@property (nonatomic) long long processVideoBufCount;
@property (retain, nonatomic) NSString *videoFileName;
@property (nonatomic) long long maxProcessVideoBufCount;
@property (nonatomic) BOOL isAssemble;
@property (retain, nonatomic) NSString *recordStartTime;
@property (copy, nonatomic) NSString *originRecordURL;
@property (retain, nonatomic) NSString *audioFileName;
@property (retain, nonatomic) NSString *audioFormat;
@property (nonatomic) int audioWriteSize;
@property (nonatomic) int audioLimitSize;

+ (id)dataOfPixelBuffer:(struct __CVBuffer { } *)arg0;
+ (id)dataOfYUV420Buffer:(struct __CVBuffer { } *)arg0;
+ (id)dataOfRGBBuffer:(struct __CVBuffer { } *)arg0;

- (id)recordStartTime;
- (void)setRecordStartTime:(id)arg0;
- (BOOL)processVideoPixelbuf:(struct __CVBuffer { } *)arg0 presentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 sourceType:(long long)arg2;
- (void)setUserData:(id)arg0 type:(long long)arg1;
- (void)startRawRecordingWithFileName:(id)arg0 maxProcessVideoBufCount:(long long)arg1 CompletionHandler:(id /* block */)arg2;
- (void)videoResetRecording;
- (BOOL)dumpIsFinished;
- (void)setDumpIsFinished:(BOOL)arg0;
- (void)__stopRecording;
- (void)audioResetRecording;
- (void)startRawRecordingWithFileName:(id)arg0 maxProcessVideoBufCount:(long long)arg1 isAssemble:(BOOL)arg2 CompletionHandler:(id /* block */)arg3;
- (void)setMaxProcessVideoBufCount:(long long)arg0;
- (void)setIsAssemble:(BOOL)arg0;
- (void)setVideoFileName:(id)arg0;
- (long long)maxProcessVideoBufCount;
- (void)getRecordStartTime;
- (id)originRecorder;
- (void)setOriginRecorder:(id)arg0;
- (id)effectedRecorder;
- (void)setEffectedRecorder:(id)arg0;
- (void)setProcessVideoBufCount:(long long)arg0;
- (long long)processVideoBufCount;
- (BOOL)isAssemble;
- (id)videoFileName;
- (void)handleComplete:(id)arg0 sourceType:(long long)arg1 url:(id)arg2;
- (void)writeRawData:(struct __CVBuffer { } *)arg0 sourceType:(long long)arg1;
- (void)setOriginRecordURL:(id)arg0;
- (id)originRecordURL;
- (void)startAudioRawRecordingWithFileName:(id)arg0 audioFormat:(id)arg1 audioLimitSize:(int)arg2;
- (void)setAudioLimitSize:(int)arg0;
- (void)setAudioWriteSize:(int)arg0;
- (int)audioWriteSize;
- (int)audioLimitSize;
- (BOOL)processVideoPixelbuf:(struct __CVBuffer { } *)arg0 sourceType:(long long)arg1;
- (void)startAudioRawRecordingWithFileName:(id)arg0 audioFormat:(id)arg1;
- (int)processPCMData:(void *)arg0 length:(int)arg1;
- (id)audioFormat;
- (id)init;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;
- (void)removeObserver;
- (void)setAudioFormat:(id)arg0;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)addObservers;
- (id)audioFileName;
- (void)setAudioFileName:(id)arg0;

@end