//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary, NSNumber, AWEURLModel;

@interface AWEVideoBSModel : MTLModel <MTLJSONSerializing, IESVideoBSModelProtocol> {
    NSString *_gearName;
    NSNumber *_qualityType;
    NSNumber *_bitrate;
    AWEURLModel *_playAddr;
    NSNumber *_isH265;
    NSString *_hdrType;
    NSString *_hdrBit;
    long long _videoFPS;
    NSNumber *_preloadedUrlIndex;
    NSString *_preloadedUrl;
    long long _selectedSpeed;
    NSString *_videoExtra;
    NSDictionary *_videoExtraDic;
    NSString *_audioFileId;
    NSNumber *_realBitrate;
    NSNumber *_videoBitrate;
    NSString *_vGearId;
    NSString *_vGearTag;
    NSNumber *_uVmaf;
}

@property (copy, nonatomic) NSString *gearName;
@property (retain, nonatomic) NSNumber *qualityType;
@property (retain, nonatomic) NSNumber *bitrate;
@property (retain, nonatomic) AWEURLModel *playAddr;
@property (retain, nonatomic) NSNumber *isH265;
@property (copy, nonatomic) NSString *hdrType;
@property (copy, nonatomic) NSString *hdrBit;
@property (nonatomic) long long videoFPS;
@property (readonly, nonatomic) NSArray *playURLList;
@property (readonly, nonatomic) NSString *prefetchURL;
@property (retain, nonatomic) NSNumber *preloadedUrlIndex;
@property (copy, nonatomic) NSString *preloadedUrl;
@property (nonatomic) long long selectedSpeed;
@property (copy, nonatomic) NSString *videoExtra;
@property (retain, nonatomic) NSDictionary *videoExtraDic;
@property (copy, nonatomic) NSString *audioFileId;
@property (retain, nonatomic) NSNumber *realBitrate;
@property (retain, nonatomic) NSNumber *videoBitrate;
@property (retain, nonatomic) NSString *vGearId;
@property (retain, nonatomic) NSString *vGearTag;
@property (retain, nonatomic) NSNumber *uVmaf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playAddrJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)videoFPS;
- (id)playAddr;
- (id)playURLList;
- (id)gearName;
- (void)setGearName:(id)arg0;
- (void)setSelectedSpeed:(long long)arg0;
- (id)isH265;
- (void)setVideoFPS:(long long)arg0;
- (void)setIsH265:(id)arg0;
- (id)hdrBit;
- (id)videoExtra;
- (id)videoExtraDic;
- (id)videoExtraDicInfo;
- (id)preloadedUrlIndex;
- (void)setPreloadedUrlIndex:(id)arg0;
- (id)preloadedUrl;
- (void)setPreloadedUrl:(id)arg0;
- (id)prefetchURL;
- (id)realBitrate;
- (id)audioFileId;
- (id)vGearId;
- (id)vGearTag;
- (id)uVmaf;
- (void)setPlayAddr:(id)arg0;
- (void)setHdrBit:(id)arg0;
- (void)setVideoExtra:(id)arg0;
- (void)setVideoExtraDic:(id)arg0;
- (void)setAudioFileId:(id)arg0;
- (void)setRealBitrate:(id)arg0;
- (id)videoBitrate;
- (void)setVideoBitrate:(id)arg0;
- (void)setVGearId:(id)arg0;
- (void)setVGearTag:(id)arg0;
- (void)setUVmaf:(id)arg0;
- (long long)selectedSpeed;
- (void).cxx_destruct;
- (id)bitrate;
- (id)description;
- (void)setBitrate:(id)arg0;
- (id)qualityType;
- (void)setHdrType:(id)arg0;
- (id)hdrType;
- (void)setQualityType:(id)arg0;

@end