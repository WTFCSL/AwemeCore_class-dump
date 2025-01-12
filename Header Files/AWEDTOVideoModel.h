//
//     Generated by private class-dump
//

@class NSString, AWEDTOAspectRatioData, NSArray;

@interface AWEDTOVideoModel : MTLModel <MTLJSONSerializing> {
    BOOL _videoMuted;
    BOOL _isFastImportVideo;
    BOOL _autoEnhanceOn;
    BOOL _needExpandCompiledSize;
    BOOL _isVocalMusicMixing;
    BOOL _isExposureOptmize;
    BOOL _canvasEnableGesture;
    BOOL _isDynamicRecorder;
    BOOL _isShareComment;
    BOOL _isNewStyleShare;
    BOOL _smartBeautyOn;
    BOOL _smartBeautyContainPortraint;
    BOOL _smartBeautyEnableFilterUrs;
    BOOL _smartBeautyEnableBeautyUrs;
    long long _canvasType;
    AWEDTOAspectRatioData *_aspectRatioData;
    long long _microphoneBarState;
    double _videoFrameRatio;
    NSString *_capturePhotoPath;
    long long _autoEnhanceType;
    long long _audioAecDelayTime;
    long long _duration;
    double _canvasContentRatio;
    NSArray *_canvasColorList;
    NSString *_smartBeautyTag;
    NSString *_smartBeautySpecialFilterId;
    NSArray *_smartBeautySpecialBeautyIdList;
}

@property (nonatomic) BOOL videoMuted;
@property (nonatomic) BOOL isFastImportVideo;
@property (nonatomic) BOOL autoEnhanceOn;
@property (nonatomic) long long canvasType;
@property (nonatomic) BOOL needExpandCompiledSize;
@property (retain, nonatomic) AWEDTOAspectRatioData *aspectRatioData;
@property (nonatomic) long long microphoneBarState;
@property (nonatomic) BOOL isVocalMusicMixing;
@property (nonatomic) double videoFrameRatio;
@property (nonatomic) BOOL isExposureOptmize;
@property (copy, nonatomic) NSString *capturePhotoPath;
@property (nonatomic) long long autoEnhanceType;
@property (nonatomic) long long audioAecDelayTime;
@property (nonatomic) long long duration;
@property (nonatomic) BOOL canvasEnableGesture;
@property (nonatomic) BOOL isDynamicRecorder;
@property (nonatomic) double canvasContentRatio;
@property (nonatomic) BOOL isShareComment;
@property (copy, nonatomic) NSArray *canvasColorList;
@property (nonatomic) BOOL isNewStyleShare;
@property (nonatomic) BOOL smartBeautyOn;
@property (copy, nonatomic) NSString *smartBeautyTag;
@property (copy, nonatomic) NSString *smartBeautySpecialFilterId;
@property (copy, nonatomic) NSArray *smartBeautySpecialBeautyIdList;
@property (nonatomic) BOOL smartBeautyContainPortraint;
@property (nonatomic) BOOL smartBeautyEnableFilterUrs;
@property (nonatomic) BOOL smartBeautyEnableBeautyUrs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aspectRatioDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setCanvasType:(long long)arg0;
- (BOOL)isFastImportVideo;
- (void)setIsFastImportVideo:(BOOL)arg0;
- (BOOL)autoEnhanceOn;
- (void)setAutoEnhanceOn:(BOOL)arg0;
- (long long)canvasType;
- (BOOL)needExpandCompiledSize;
- (void)setNeedExpandCompiledSize:(BOOL)arg0;
- (id)aspectRatioData;
- (void)setAspectRatioData:(id)arg0;
- (long long)microphoneBarState;
- (void)setMicrophoneBarState:(long long)arg0;
- (BOOL)isVocalMusicMixing;
- (void)setIsVocalMusicMixing:(BOOL)arg0;
- (double)videoFrameRatio;
- (void)setVideoFrameRatio:(double)arg0;
- (BOOL)isExposureOptmize;
- (void)setIsExposureOptmize:(BOOL)arg0;
- (id)capturePhotoPath;
- (void)setCapturePhotoPath:(id)arg0;
- (long long)autoEnhanceType;
- (void)setAutoEnhanceType:(long long)arg0;
- (long long)audioAecDelayTime;
- (void)setAudioAecDelayTime:(long long)arg0;
- (BOOL)canvasEnableGesture;
- (void)setCanvasEnableGesture:(BOOL)arg0;
- (BOOL)isDynamicRecorder;
- (void)setIsDynamicRecorder:(BOOL)arg0;
- (double)canvasContentRatio;
- (void)setCanvasContentRatio:(double)arg0;
- (BOOL)isShareComment;
- (void)setIsShareComment:(BOOL)arg0;
- (id)canvasColorList;
- (void)setCanvasColorList:(id)arg0;
- (BOOL)isNewStyleShare;
- (void)setIsNewStyleShare:(BOOL)arg0;
- (BOOL)smartBeautyOn;
- (void)setSmartBeautyOn:(BOOL)arg0;
- (id)smartBeautyTag;
- (void)setSmartBeautyTag:(id)arg0;
- (id)smartBeautySpecialFilterId;
- (void)setSmartBeautySpecialFilterId:(id)arg0;
- (id)smartBeautySpecialBeautyIdList;
- (void)setSmartBeautySpecialBeautyIdList:(id)arg0;
- (BOOL)smartBeautyContainPortraint;
- (void)setSmartBeautyContainPortraint:(BOOL)arg0;
- (BOOL)smartBeautyEnableFilterUrs;
- (void)setSmartBeautyEnableFilterUrs:(BOOL)arg0;
- (BOOL)smartBeautyEnableBeautyUrs;
- (void)setSmartBeautyEnableBeautyUrs:(BOOL)arg0;
- (void).cxx_destruct;
- (long long)duration;
- (void)setDuration:(long long)arg0;
- (void)setVideoMuted:(BOOL)arg0;
- (BOOL)videoMuted;

@end
