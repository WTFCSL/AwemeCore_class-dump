//
//     Generated by private class-dump
//

@interface HGVideoPickerPluginModel : HGBasePluginModel {
    BOOL _compressed;
    long long _maxDuration;
    long long _bdpSourceType;
    long long _cameraDevice;
}

@property (nonatomic) BOOL compressed;
@property (nonatomic) long long maxDuration;
@property (nonatomic) long long bdpSourceType;
@property (nonatomic) long long cameraDevice;

- (BOOL)modelCustomTransformFromDictionary:(id)arg0;
- (long long)bdpSourceType;
- (void)setBdpSourceType:(long long)arg0;
- (BOOL)compressed;
- (void)setCompressed:(BOOL)arg0;
- (long long)cameraDevice;
- (void)setCameraDevice:(long long)arg0;
- (long long)maxDuration;
- (void)setMaxDuration:(long long)arg0;

@end
