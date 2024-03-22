//
//     Generated by private class-dump
//

@class NSString, ARConfiguration, ARWorldMap;

@interface IESMMARCameraConfiguration : NSObject <NSCopying> {
    NSString *_preset;
    ARConfiguration *_innerARConfiguration;
}

@property (retain, nonatomic) ARConfiguration *innerARConfiguration;
@property (readonly, nonatomic) long long cameraPosition;
@property (nonatomic) BOOL providesAudioData;
@property (copy, nonatomic) NSString *preset;
@property (nonatomic) long long worldAlignment;
@property (readonly, nonatomic) unsigned long long planeDetection;
@property (nonatomic) long long environmentTexturing;
@property (retain, nonatomic) ARWorldMap *initialWorldMap;
@property (nonatomic, getter=isLightEstimationEnabled) BOOL lightEstimationEnabled;
@property (readonly, copy, nonatomic) ARConfiguration *arConfig;

+ (BOOL)isSystemVersionSupportedAR;
+ (id)defaultConfiguration;

- (long long)convertToARWorldAlignment:(long long)arg0;
- (unsigned long long)convertToARPlaneDetection:(unsigned long long)arg0;
- (id)initWithARConfiguration:(id)arg0;
- (id)innerARConfiguration;
- (void)setInnerARConfiguration:(id)arg0;
- (id)arConfig;
- (long long)cameraPosition;
- (id)initWithProperty:(id)arg0;
- (id)preset;
- (void).cxx_destruct;
- (void)setPreset:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (BOOL)isSupported;
- (void)setLightEstimationEnabled:(BOOL)arg0;
- (void)setWorldAlignment:(long long)arg0;
- (void)setEnvironmentTexturing:(long long)arg0;
- (id)initialWorldMap;
- (long long)worldAlignment;
- (void)setInitialWorldMap:(id)arg0;
- (unsigned long long)planeDetection;
- (BOOL)isLightEstimationEnabled;
- (BOOL)providesAudioData;
- (void)setProvidesAudioData:(BOOL)arg0;
- (long long)environmentTexturing;

@end