//
//     Generated by private class-dump
//

@class BDXBridgeCreatePOIMediaEditConfig, BDXBridgeCreatePOIMediaVideoToken, NSNumber, BDXBridgeCreatePOIMediaAlbumConfig;

@interface BDXBridgeCreatePOIMediaMethodParamModel : BDXBridgeModel {
    BOOL _supportVideo;
    BOOL _enableBeauty;
    BOOL _enableFilter;
    BOOL _enableEffect;
    NSNumber *_maxVideoDuration;
    NSNumber *_minVideoDuration;
    NSNumber *_cameraPosition;
    BDXBridgeCreatePOIMediaEditConfig *_editConfig;
    BDXBridgeCreatePOIMediaAlbumConfig *_albumConfig;
    BDXBridgeCreatePOIMediaVideoToken *_videoToken;
}

@property (retain, nonatomic) NSNumber *maxVideoDuration;
@property (retain, nonatomic) NSNumber *minVideoDuration;
@property (retain, nonatomic) NSNumber *cameraPosition;
@property (nonatomic) BOOL supportVideo;
@property (nonatomic) BOOL enableBeauty;
@property (nonatomic) BOOL enableFilter;
@property (nonatomic) BOOL enableEffect;
@property (retain, nonatomic) BDXBridgeCreatePOIMediaEditConfig *editConfig;
@property (retain, nonatomic) BDXBridgeCreatePOIMediaAlbumConfig *albumConfig;
@property (retain, nonatomic) BDXBridgeCreatePOIMediaVideoToken *videoToken;

+ (id)requiredKeyPaths;
+ (id)editConfigJSONTransformer;
+ (id)albumConfigJSONTransformer;
+ (id)videoTokenJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)maxVideoDuration;
- (id)editConfig;
- (void)setEditConfig:(id)arg0;
- (void)setEnableEffect:(BOOL)arg0;
- (BOOL)enableEffect;
- (BOOL)supportVideo;
- (void)setSupportVideo:(BOOL)arg0;
- (void)setMaxVideoDuration:(id)arg0;
- (BOOL)enableBeauty;
- (BOOL)enableFilter;
- (id)albumConfig;
- (void)setEnableBeauty:(BOOL)arg0;
- (void)setEnableFilter:(BOOL)arg0;
- (void)setAlbumConfig:(id)arg0;
- (id)cameraPosition;
- (void).cxx_destruct;
- (void)setMinVideoDuration:(id)arg0;
- (id)minVideoDuration;
- (void)setCameraPosition:(id)arg0;
- (void)setVideoToken:(id)arg0;
- (id)videoToken;

@end
