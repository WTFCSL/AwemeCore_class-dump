//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTOLivePhotoDraftModel : MTLModel <MTLJSONSerializing> {
    BOOL _isSystemlivephotoFromRecord;
    long long _mode;
    NSString *_videoSource;
    NSString *_imageSource;
    NSString *_effectId;
    NSString *_effectPath;
    NSString *_videoFrameImagePath;
}

@property (nonatomic) long long mode;
@property (copy, nonatomic) NSString *videoSource;
@property (copy, nonatomic) NSString *imageSource;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *effectPath;
@property (nonatomic) BOOL isSystemlivephotoFromRecord;
@property (copy, nonatomic) NSString *videoFrameImagePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)effectPath;
- (void)setEffectPath:(id)arg0;
- (BOOL)isSystemlivephotoFromRecord;
- (void)setIsSystemlivephotoFromRecord:(BOOL)arg0;
- (id)videoFrameImagePath;
- (void)setVideoFrameImagePath:(id)arg0;
- (id)imageSource;
- (void).cxx_destruct;
- (long long)mode;
- (void)setMode:(long long)arg0;
- (void)setImageSource:(id)arg0;
- (id)videoSource;
- (void)setVideoSource:(id)arg0;
- (id)effectId;
- (void)setEffectId:(id)arg0;

@end
