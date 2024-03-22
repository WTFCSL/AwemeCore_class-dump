//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEPadSkyLightBannerCardModel : MTLModel <MTLJSONSerializing> {
    NSString *_bannerUrl;
    NSString *_shcemaUrl;
    NSNumber *_bannerID;
    NSNumber *_exitTime;
    NSNumber *_rotationTime;
    NSString *_title;
}

@property (copy, nonatomic) NSString *bannerUrl;
@property (copy, nonatomic) NSString *shcemaUrl;
@property (copy, nonatomic) NSNumber *bannerID;
@property (copy, nonatomic) NSNumber *exitTime;
@property (copy, nonatomic) NSNumber *rotationTime;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setBannerID:(id)arg0;
- (id)bannerUrl;
- (void)setBannerUrl:(id)arg0;
- (id)shcemaUrl;
- (void)setShcemaUrl:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)arg0;
- (id)exitTime;
- (id)bannerID;
- (void)setExitTime:(id)arg0;
- (id)rotationTime;
- (void)setRotationTime:(id)arg0;

@end