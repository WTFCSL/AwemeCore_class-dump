//
//     Generated by private class-dump
//

@class NSString, IESLiveLinkSpatialAudioHumanOrientation, IESLiveLinkSpatialAudioPosition;

@interface IESLiveLinkRTCInteractVideoCompositingRegion : NSObject {
    BOOL _applySpatialAudio;
    double _x;
    double _y;
    double _width;
    double _height;
    long long _zOrder;
    double _alpha;
    long long _contentControl;
    NSString *_strUID;
    NSString *_strRID;
    IESLiveLinkSpatialAudioPosition *_spatialPosition;
    IESLiveLinkSpatialAudioHumanOrientation *_audienceSpatialOrientation;
    double _cornerRadius;
    unsigned long long _renderMode;
}

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) long long zOrder;
@property (nonatomic) double alpha;
@property (nonatomic) long long contentControl;
@property (copy, nonatomic) NSString *strUID;
@property (copy, nonatomic) NSString *strRID;
@property (retain, nonatomic) IESLiveLinkSpatialAudioPosition *spatialPosition;
@property (retain, nonatomic) IESLiveLinkSpatialAudioHumanOrientation *audienceSpatialOrientation;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL applySpatialAudio;
@property (nonatomic) unsigned long long renderMode;

- (long long)contentControl;
- (void)setContentControl:(long long)arg0;
- (BOOL)applySpatialAudio;
- (void)setApplySpatialAudio:(BOOL)arg0;
- (id)audienceSpatialOrientation;
- (void)setAudienceSpatialOrientation:(id)arg0;
- (void)setStrUID:(id)arg0;
- (id)strUID;
- (void)setSpatialPosition:(id)arg0;
- (id)strRID;
- (void)setStrRID:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (double)height;
- (void)setAlpha:(double)arg0;
- (double)cornerRadius;
- (unsigned long long)renderMode;
- (void)setY:(double)arg0;
- (double)y;
- (double)x;
- (void)setX:(double)arg0;
- (void)setRenderMode:(unsigned long long)arg0;
- (void)setWidth:(double)arg0;
- (double)alpha;
- (void)setHeight:(double)arg0;
- (double)width;
- (void)setCornerRadius:(double)arg0;
- (BOOL)isEqualTo:(id)arg0;
- (long long)zOrder;
- (id)spatialPosition;
- (void)setZOrder:(long long)arg0;

@end
