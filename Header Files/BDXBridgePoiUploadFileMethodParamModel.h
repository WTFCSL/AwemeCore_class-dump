//
//     Generated by private class-dump
//

@class NSNumber, NSDictionary;

@interface BDXBridgePoiUploadFileMethodParamModel : BDXBridgeModel {
    BOOL _needMusic;
    NSNumber *_maxImageCount;
    NSDictionary *_logParams;
    NSNumber *_isUseCamera;
    NSNumber *_isUseImageEdit;
    NSNumber *_showQuickShoot;
    NSNumber *_showQuickAlbum;
    long long _defaultTab;
}

@property (retain, nonatomic) NSNumber *maxImageCount;
@property (copy, nonatomic) NSDictionary *logParams;
@property (retain, nonatomic) NSNumber *isUseCamera;
@property (retain, nonatomic) NSNumber *isUseImageEdit;
@property (nonatomic) BOOL needMusic;
@property (retain, nonatomic) NSNumber *showQuickShoot;
@property (retain, nonatomic) NSNumber *showQuickAlbum;
@property (nonatomic) long long defaultTab;

+ (id)requiredKeyPaths;
+ (id)defaultTabJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)logParams;
- (void)setLogParams:(id)arg0;
- (id)isUseImageEdit;
- (void)setIsUseImageEdit:(id)arg0;
- (BOOL)needMusic;
- (void)setNeedMusic:(BOOL)arg0;
- (id)maxImageCount;
- (id)isUseCamera;
- (id)showQuickShoot;
- (id)showQuickAlbum;
- (void)setMaxImageCount:(id)arg0;
- (void)setIsUseCamera:(id)arg0;
- (void)setShowQuickShoot:(id)arg0;
- (void)setShowQuickAlbum:(id)arg0;
- (void).cxx_destruct;
- (long long)defaultTab;
- (void)setDefaultTab:(long long)arg0;

@end
