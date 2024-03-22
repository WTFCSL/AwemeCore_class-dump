//
//     Generated by private class-dump
//

@interface BDPImagePickerPluginModel : BDPBasePluginModel {
    long long _count;
    long long _bdpSizeType;
    long long _bdpSourceType;
    long long _cameraDevice;
}

@property (nonatomic) long long count;
@property (nonatomic) long long bdpSizeType;
@property (nonatomic) long long bdpSourceType;
@property (nonatomic) long long cameraDevice;

- (BOOL)modelCustomTransformFromDictionary:(id)arg0;
- (long long)bdpSourceType;
- (long long)bdpSizeType;
- (void)setBdpSizeType:(long long)arg0;
- (void)setBdpSourceType:(long long)arg0;
- (void)setCount:(long long)arg0;
- (long long)count;
- (long long)cameraDevice;
- (void)setCameraDevice:(long long)arg0;

@end
