//
//     Generated by private class-dump
//

@class NSString, IESMMTransProcessData, HTSVideoData;
@protocol IESMMTranscoderProtocol;

@interface VECompileTaskManagerSession : IESMMObject <VEAppStatusProtocol> {
    BOOL _hasVideoProcess;
    BOOL _isPreencode;
    BOOL _isBackgroundPreencode;
    BOOL _isBackgroundEncode;
    long long _maxRetryTimes;
    id /* block */ _effectFilterPathBlock;
    id /* block */ _progressBlock;
    id /* block */ _encodeDataCB;
    unsigned long long _transStatus;
    unsigned long long _pretransStatus;
    NSString *_targetFilePath;
    id<IESMMTranscoderProtocol> _mediaTranscoder;
    id<IESMMTranscoderProtocol> _mediaTranscoderForPreupload;
    HTSVideoData *_videoData;
    IESMMTransProcessData *_transConfig;
    id _videoProcess;
    id /* block */ _completeBlock;
    unsigned long long _decreaseEncodeCount;
    unsigned long long _prepareEncodeCount;
    double _encodeStartTime;
}

@property (nonatomic) unsigned long long transStatus;
@property (nonatomic) unsigned long long pretransStatus;
@property (nonatomic) BOOL hasVideoProcess;
@property (retain, nonatomic) NSString *targetFilePath;
@property (retain, nonatomic) id<IESMMTranscoderProtocol> mediaTranscoder;
@property (retain, nonatomic) id<IESMMTranscoderProtocol> mediaTranscoderForPreupload;
@property (retain, nonatomic) HTSVideoData *videoData;
@property (retain, nonatomic) IESMMTransProcessData *transConfig;
@property (retain, nonatomic) id videoProcess;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (nonatomic) unsigned long long decreaseEncodeCount;
@property (nonatomic) unsigned long long prepareEncodeCount;
@property (nonatomic) BOOL isPreencode;
@property (nonatomic) BOOL isBackgroundPreencode;
@property (nonatomic) BOOL isBackgroundEncode;
@property (nonatomic) double encodeStartTime;
@property (nonatomic) long long maxRetryTimes;
@property (copy, nonatomic) id /* block */ effectFilterPathBlock;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ encodeDataCB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)videoData;
- (void)setVideoData:(id)arg0;
- (void)setMaxRetryTimes:(long long)arg0;
- (long long)maxRetryTimes;
- (id /* block */)effectFilterPathBlock;
- (void)enableDynamicSpeed:(BOOL)arg0;
- (void)cancelTranscode;
- (BOOL)isPreUploadable:(id)arg0 transConfig:(id)arg1 videoProcess:(id)arg2;
- (id /* block */)encodeDataCB;
- (void)setEncodeDataCB:(id /* block */)arg0;
- (void)setEffectFilterPathBlock:(id /* block */)arg0;
- (void)setCompleteBlock:(id /* block */)arg0;
- (id /* block */)completeBlock;
- (void)setVideoProcess:(id)arg0;
- (void)setHasVideoProcess:(BOOL)arg0;
- (id)videoProcess;
- (id)getBreakPointURL;
- (BOOL)hasVideoProcess;
- (void)cancelTranscode:(id /* block */)arg0;
- (void)willExport:(id)arg0;
- (BOOL)p_isPreUploadable:(id)arg0 transConfig:(id)arg1 videoProcess:(id)arg2;
- (void)transWithVideoData:(id)arg0 transConfig:(id)arg1 processor:(id)arg2 completeBlock:(id /* block */)arg3;
- (void)didExport:(id)arg0;
- (void)setTransConfig:(id)arg0;
- (void)setEncodeStartTime:(double)arg0;
- (unsigned long long)pretransStatus;
- (id)targetFilePath;
- (unsigned long long)decreaseEncodeCount;
- (void)setDecreaseEncodeCount:(unsigned long long)arg0;
- (void)setIsPreencode:(BOOL)arg0;
- (void)setPretransStatus:(unsigned long long)arg0;
- (void)p_mergeCompleteWithRes:(id)arg0 completeBlock:(id /* block */)arg1;
- (void)p_cancelTrans:(BOOL)arg0;
- (void)setTargetFilePath:(id)arg0;
- (void)p_transWithVideoData:(id)arg0 transConfig:(id)arg1 videoProcess:(id)arg2;
- (id)mediaTranscoder;
- (void)p_cancelTrans:(BOOL)arg0 completionBlock:(id /* block */)arg1;
- (void)setMediaTranscoderForPreupload:(id)arg0;
- (void)setMediaTranscoder:(id)arg0;
- (id)transConfig;
- (void)p_initMediaTranscoderWithVideoData:(id)arg0 config:(id)arg1 videoProcess:(id)arg2 forPreupload:(BOOL)arg3;
- (id)mediaTranscoderForPreupload;
- (void)p_resetEncodeParam;
- (void)p_updateProgress:(double)arg0;
- (BOOL)isPreencode;
- (BOOL)isBackgroundPreencode;
- (double)encodeStartTime;
- (BOOL)isBackgroundEncode;
- (void)p_resetTransFileDict:(id)arg0;
- (void)p_resetTrackParam;
- (void)setIsBackgroundPreencode:(BOOL)arg0;
- (void)setIsBackgroundEncode:(BOOL)arg0;
- (unsigned long long)prepareEncodeCount;
- (void)setPrepareEncodeCount:(unsigned long long)arg0;
- (void)prepareTransWithVideoData:(id)arg0 transConfig:(id)arg1 videoProcess:(id)arg2;
- (void)transWithVideoData:(id)arg0 transConfig:(id)arg1 videoProcess:(id)arg2 completeBlock:(id /* block */)arg3;
- (void)postTrack;
- (void)setTransStatus:(unsigned long long)arg0;
- (unsigned long long)transStatus;
- (void)becomeActive;
- (id)init;
- (void)resume;
- (void).cxx_destruct;
- (void)resignActive;
- (void)enterBackground;
- (void)setProgressBlock:(id /* block */)arg0;
- (void)enterForeground;
- (id /* block */)progressBlock;
- (void)dealloc;
- (void)pause;
- (void)memoryWarning;

@end
