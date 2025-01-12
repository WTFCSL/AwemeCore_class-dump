//
//     Generated by private class-dump
//

@class LSAudioDrivePictureEffectPreviewAudioCapture, startAudioCaptureCert;

@interface LSAudioDrivePictureEffectHandler : NSObject {
    struct unique_ptr<avframework::FFmpegAudioResampler, std::default_delete<avframework::FFmpegAudioResampler>> { struct __compressed_pair<avframework::FFmpegAudioResampler *, std::default_delete<avframework::FFmpegAudioResampler>> { struct FFmpegAudioResampler *__value_; } __ptr_; } s16_2_flt_resampler;
    int _sampleRate;
    void *_effectAudioHandle;
    LSAudioDrivePictureEffectPreviewAudioCapture *_previewAudioCapture;
    struct LSAudioDrivePictureEffectParamsStruct { BOOL useInMic; BOOL useInMusic; BOOL useOutPlay; BOOL useOutPublish; BOOL needStartInnerAudioCapture; startAudioCaptureCert *audioConfig; id x0; } _params;
}

@property (nonatomic) struct LSAudioDrivePictureEffectParamsStruct { BOOL useInMic; BOOL useInMusic; BOOL useOutPlay; BOOL useOutPublish; BOOL needStartInnerAudioCapture; startAudioCaptureCert *audioConfig; id x0; } params;
@property (nonatomic) void *effectAudioHandle;
@property (retain, nonatomic) LSAudioDrivePictureEffectPreviewAudioCapture *previewAudioCapture;
@property (nonatomic) int sampleRate;

+ (id)createHandlerWithParams:(struct LSAudioDrivePictureEffectParamsStruct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; id x5; id x6; })arg0 err:(int *)arg1;

- (void)applicationDidBecomeActiveNoti:(id)arg0;
- (void)setEffectAudioHandle:(void *)arg0;
- (void)startAudioCaptureIfNeeded;
- (void)stopAudioCaptureIfNeeded;
- (id)previewAudioCapture;
- (void)setPreviewAudioCapture:(id)arg0;
- (void *)effectAudioHandle;
- (void)processIoData:(short *)arg0 musicData:(short *)arg1 processedData:(short *)arg2 earMonitorData:(short *)arg3 bufferSize:(unsigned int)arg4 numberOfChannels:(int)arg5 sampleRate:(int)arg6 numberOfFrames:(int)arg7;
- (id)init;
- (void).cxx_destruct;
- (int)sampleRate;
- (struct LSAudioDrivePictureEffectParamsStruct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; id x5; id x6; })params;
- (void)dealloc;
- (id).cxx_construct;
- (void)setSampleRate:(int)arg0;
- (void)setParams:(struct LSAudioDrivePictureEffectParamsStruct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; id x5; id x6; })arg0;
- (int)destroyHandler;

@end
