//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary, NSData, IESLiveInteractSpatialAudioPosition, IESLiveInteractSpatialAudioHumanOrientation;

@interface IESLiveInteractStreamLayout : NSObject {
    BOOL _enableSpatialRender;
    BOOL _isPreMixEnabled;
    long long _canvasWidth;
    long long _canvasHeight;
    NSString *_backgroundColor;
    NSArray *_regions;
    NSString *_appData;
    NSArray *_secondRegions;
    NSDictionary *_secondSEI;
    NSData *_seiInfo;
    NSString *_publicStreamId;
    IESLiveInteractSpatialAudioPosition *_position;
    IESLiveInteractSpatialAudioHumanOrientation *_humanOrientation;
}

@property (nonatomic) long long canvasWidth;
@property (nonatomic) long long canvasHeight;
@property (copy, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) NSArray *regions;
@property (copy, nonatomic) NSString *appData;
@property (copy, nonatomic) NSArray *secondRegions;
@property (copy, nonatomic) NSDictionary *secondSEI;
@property (retain, nonatomic) NSData *seiInfo;
@property (copy, nonatomic) NSString *publicStreamId;
@property (nonatomic) BOOL enableSpatialRender;
@property (retain, nonatomic) IESLiveInteractSpatialAudioPosition *position;
@property (retain, nonatomic) IESLiveInteractSpatialAudioHumanOrientation *humanOrientation;
@property (nonatomic) BOOL isPreMixEnabled;

- (BOOL)enableSpatialRender;
- (void)setEnableSpatialRender:(BOOL)arg0;
- (long long)canvasHeight;
- (void)setCanvasWidth:(long long)arg0;
- (void)setCanvasHeight:(long long)arg0;
- (id)publicStreamId;
- (void)setPublicStreamId:(id)arg0;
- (id)humanOrientation;
- (id)secondRegions;
- (void)setSecondRegions:(id)arg0;
- (id)seiInfo;
- (void)setSeiInfo:(id)arg0;
- (void)setHumanOrientation:(id)arg0;
- (void)setIsPreMixEnabled:(BOOL)arg0;
- (id)secondSEI;
- (void)setSecondSEI:(id)arg0;
- (BOOL)isPreMixEnabled;
- (void).cxx_destruct;
- (id)position;
- (void)setPosition:(id)arg0;
- (BOOL)isValid;
- (id)regions;
- (id)backgroundColor;
- (void)setRegions:(id)arg0;
- (void)setBackgroundColor:(id)arg0;
- (void)setAppData:(id)arg0;
- (id)appData;
- (long long)canvasWidth;

@end
