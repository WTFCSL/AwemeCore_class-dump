//
//     Generated by private class-dump
//

@class HTSVideoData, NSError, VEConfigData, NSCondition, VEMVPRenderer, NSObject, VETransData, NSMutableArray, NSString, VECompileFramebufferManager, VEFence, HTSGLContext, NSLock, VEPixelBufferCopyUtils;
@protocol OS_dispatch_queue, VEProcessSampleDelegate;

@interface VECompileVTEncoderUnit : IESMMObject <VEProcessSampleDelegate, VECompileStageProtocol, VECompileEncoderUnitProtocol> {
    struct CGSize { double width; double height; } _videoSize;
    HTSGLContext *_encoderSharedContext;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastEncodeTime;
    unsigned int _pixelFormat;
    struct unique_ptr<TELensSmartCodecAlgorithm, std::default_delete<TELensSmartCodecAlgorithm>> { struct __compressed_pair<TELensSmartCodecAlgorithm *, std::default_delete<TELensSmartCodecAlgorithm>> { struct TELensSmartCodecAlgorithm *__value_; } __ptr_; } mSmartCodecHandle;
    BOOL _hasDecreseFrameTimeStamp;
    BOOL _waitForFrameAfterSeek;
    BOOL _encodeUseFenceRender;
    BOOL _passVTEncode;
    BOOL _isMultiClip;
    BOOL _enableAsyncWriter;
    BOOL _enableAgfxContext;
    BOOL _enableEncodeFrameOpt;
    NSString *_route;
    long long _curVideoStage;
    long long _curAudioStage;
    id<VEProcessSampleDelegate> _downstream;
    NSError *_encoderError;
    VECompileFramebufferManager *_framebufferManager;
    HTSVideoData *_videoData;
    VETransData *_transData;
    VEConfigData *_configData;
    struct OpaqueVTCompressionSession { } *_videoEncodeSession;
    VEMVPRenderer *_textureMvpRenderer;
    VEMVPRenderer *_pixelbufferMvpRenderer;
    NSMutableArray *_latestVideoPTS;
    NSLock *_vPTSLock;
    long long _status;
    long long _inputVideoDataType;
    NSCondition *_pipelineResourcesCont;
    long long _pipeResources;
    NSObject<OS_dispatch_queue> *_writerQueue;
    VEFence *_fenceObj;
    VEPixelBufferCopyUtils *_pixelBufferCopyUtils;
    NSMutableArray *_splitTimePoints;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastVideoFrameTime;
}

@property (retain, nonatomic) VECompileFramebufferManager *framebufferManager;
@property (retain, nonatomic) HTSVideoData *videoData;
@property (retain, nonatomic) VETransData *transData;
@property (retain, nonatomic) VEConfigData *configData;
@property (nonatomic) struct OpaqueVTCompressionSession { } *videoEncodeSession;
@property (retain, nonatomic) VEMVPRenderer *textureMvpRenderer;
@property (retain, nonatomic) VEMVPRenderer *pixelbufferMvpRenderer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastVideoFrameTime;
@property (nonatomic) BOOL waitForFrameAfterSeek;
@property (retain, nonatomic) NSMutableArray *latestVideoPTS;
@property (retain, nonatomic) NSLock *vPTSLock;
@property (nonatomic) long long status;
@property (nonatomic) long long inputVideoDataType;
@property (retain, nonatomic) NSCondition *pipelineResourcesCont;
@property (nonatomic) long long pipeResources;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writerQueue;
@property (retain, nonatomic) VEFence *fenceObj;
@property (retain, nonatomic) VEPixelBufferCopyUtils *pixelBufferCopyUtils;
@property (nonatomic) BOOL encodeUseFenceRender;
@property (nonatomic) BOOL passVTEncode;
@property (nonatomic) BOOL isMultiClip;
@property (nonatomic) BOOL enableAsyncWriter;
@property (nonatomic) BOOL enableAgfxContext;
@property (nonatomic) BOOL enableEncodeFrameOpt;
@property (retain, nonatomic) NSMutableArray *splitTimePoints;
@property (weak, nonatomic) id<VEProcessSampleDelegate> downstream;
@property (nonatomic) BOOL hasDecreseFrameTimeStamp;
@property (retain, nonatomic) NSError *encoderError;
@property (retain, nonatomic) NSString *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long curVideoStage;
@property (nonatomic) long long curAudioStage;

- (void)setEnableAsyncWriter:(BOOL)arg0;
- (id)videoData;
- (void)setVideoData:(id)arg0;
- (void)setConfigData:(id)arg0;
- (id)configData;
- (BOOL)enableAgfxContext;
- (void)setEnableAgfxContext:(BOOL)arg0;
- (id)textureMvpRenderer;
- (void)setTextureMvpRenderer:(id)arg0;
- (BOOL)enableAsyncWriter;
- (void)setEncodeUseFenceRender:(BOOL)arg0;
- (BOOL)encodeUseFenceRender;
- (id)splitTimePoints;
- (void)setSplitTimePoints:(id)arg0;
- (void)setCurVideoStage:(long long)arg0;
- (void)setCurAudioStage:(long long)arg0;
- (BOOL)getVideoWriterFinish;
- (BOOL)getAudioWriterFinish;
- (long long)curVideoStage;
- (long long)curAudioStage;
- (BOOL)hasDecreseFrameTimeStamp;
- (id)transData;
- (void)setTransData:(id)arg0;
- (id)encoderError;
- (void)vtEncodeCallback:(id)arg0 sample:(struct opaqueCMSampleBuffer { } *)arg1 flags:(unsigned int)arg2;
- (void)setEncoderError:(id)arg0;
- (BOOL)waitForFrameAfterSeek;
- (void)initSmartCodecHandle:(id)arg0;
- (void)setWaitForFrameAfterSeek:(BOOL)arg0;
- (BOOL)encodeFinish:(BOOL)arg0;
- (void)p_downstreamProcessSampleData:(id)arg0;
- (void)setHasDecreseFrameTimeStamp:(BOOL)arg0;
- (BOOL)p_encodeSampleDataByPixelBuf:(id)arg0;
- (BOOL)p_encodeSampleDataByFrameBuffer:(id)arg0;
- (void)returnFramebuffer:(id)arg0;
- (void)p_releaseResource;
- (void)p_acruireResource;
- (BOOL)p_needEncodeAsIFrame:(id)arg0;
- (void)invokeSmartCodecProcess:(id)arg0 pixel:(struct __CVBuffer { } *)arg1;
- (void)applySmartCodecRet;
- (id)p_renderAtInternalSizeUsingFramebuffer:(id)arg0 fence:(id)arg1;
- (id)pipelineResourcesCont;
- (long long)pipeResources;
- (void)setPipeResources:(long long)arg0;
- (void)setPassVTEncode:(BOOL)arg0;
- (BOOL)initVTSessions:(id)arg0;
- (int)setVTSessionConfig:(id)arg0;
- (BOOL)passVTEncode;
- (BOOL)encodeSampleData:(id)arg0;
- (void)setFramebufferManager:(id)arg0;
- (struct OpaqueVTCompressionSession { } *)videoEncodeSession;
- (void)setVideoEncodeSession:(struct OpaqueVTCompressionSession { } *)arg0;
- (id)latestVideoPTS;
- (void)setLatestVideoPTS:(id)arg0;
- (id)vPTSLock;
- (void)setVPTSLock:(id)arg0;
- (long long)inputVideoDataType;
- (void)setInputVideoDataType:(long long)arg0;
- (void)setPipelineResourcesCont:(id)arg0;
- (void)setWriterQueue:(id)arg0;
- (id)fenceObj;
- (void)setFenceObj:(id)arg0;
- (BOOL)isMultiClip;
- (void)setIsMultiClip:(BOOL)arg0;
- (BOOL)enableEncodeFrameOpt;
- (void)setEnableEncodeFrameOpt:(BOOL)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })lastVideoFrameTime;
- (void)setLastVideoFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (id)pixelbufferMvpRenderer;
- (void)setPixelbufferMvpRenderer:(id)arg0;
- (BOOL)processSampleData:(id)arg0;
- (id)pixelBufferCopyUtils;
- (void)setPixelBufferCopyUtils:(id)arg0;
- (void)setDownstream:(id)arg0;
- (id)init;
- (id)downstream;
- (BOOL)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)route;
- (long long)status;
- (void)setRoute:(id)arg0;
- (void)setStatus:(long long)arg0;
- (void)closeSession:(BOOL)arg0;
- (void)dealloc;
- (id).cxx_construct;
- (void)resetSession;
- (id)framebufferManager;
- (id)writerQueue;

@end
