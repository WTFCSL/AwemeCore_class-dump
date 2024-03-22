//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray;

@interface IESLiveScreenshotStreamConfig : NSObject <IESLivePushStreamEntryConfig> {
    BOOL _rotateOrientation;
    double _videoSolution;
    unsigned long long _videoFps;
    unsigned long long _defaultBitrate;
    unsigned long long _maxBitrate;
    unsigned long long _minBitrate;
    NSString *_pushRtmpURL;
    NSString *_authorizationString;
    NSDictionary *_sdkParams;
    NSArray *_pushUrls;
}

@property (nonatomic) double videoSolution;
@property (nonatomic) BOOL rotateOrientation;
@property (nonatomic) unsigned long long videoFps;
@property (nonatomic) unsigned long long defaultBitrate;
@property (nonatomic) unsigned long long maxBitrate;
@property (nonatomic) unsigned long long minBitrate;
@property (copy, nonatomic) NSString *pushRtmpURL;
@property (copy, nonatomic) NSString *authorizationString;
@property (copy, nonatomic) NSDictionary *sdkParams;
@property (copy, nonatomic) NSArray *pushUrls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)videoFps;
- (void)setVideoFps:(unsigned long long)arg0;
- (unsigned long long)defaultBitrate;
- (void)setDefaultBitrate:(unsigned long long)arg0;
- (id)sdkParams;
- (void)setSdkParams:(id)arg0;
- (void)setAuthorizationString:(id)arg0;
- (id)authorizationString;
- (id)pushRtmpURL;
- (id)pushUrls;
- (double)videoSolution;
- (void)setVideoSolution:(double)arg0;
- (void)setRotateOrientation:(BOOL)arg0;
- (void)setPushRtmpURL:(id)arg0;
- (void)setPushUrls:(id)arg0;
- (void).cxx_destruct;
- (BOOL)rotateOrientation;
- (unsigned long long)maxBitrate;
- (void)setMaxBitrate:(unsigned long long)arg0;
- (unsigned long long)minBitrate;
- (void)setMinBitrate:(unsigned long long)arg0;

@end
