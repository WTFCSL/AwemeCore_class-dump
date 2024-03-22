//
//     Generated by private class-dump
//

@class NSString, IESMMKeyFrameInfo, NSMutableDictionary;

@interface VEAmazingFeature : VEFilterFeature <NSCopying, KeyFrameOperationDelegate> {
    int _order;
    NSString *_resPath;
    NSString *_subStickerDir;
    NSMutableDictionary *_subStickers;
    NSString *_params;
    NSString *_algoCachePath;
    NSString *_stopMotionPath;
    unsigned long long _featureType;
    IESMMKeyFrameInfo *_featureKeyFrameInfo;
    NSMutableDictionary *_extraInfoDic;
}

@property (nonatomic) unsigned long long nle_resourceType;
@property (copy, nonatomic) NSString *nle_filterName;
@property (retain, nonatomic) IESMMKeyFrameInfo *featureKeyFrameInfo;
@property (retain, nonatomic) NSMutableDictionary *extraInfoDic;
@property (copy, nonatomic) NSString *resPath;
@property (copy, nonatomic) NSString *subStickerDir;
@property (retain, nonatomic) NSMutableDictionary *subStickers;
@property (nonatomic) int order;
@property (copy, nonatomic) NSString *params;
@property (copy, nonatomic) NSString *algoCachePath;
@property (copy, nonatomic) NSString *stopMotionPath;
@property (nonatomic) unsigned long long featureType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extraInfoDic;
- (void)setkeyFrameInfo:(id)arg0 withPts:(unsigned long long)arg1;
- (void)removekeyFrameInfo:(unsigned long long)arg0;
- (void)setResPath:(id)arg0;
- (id)initWithPath:(id)arg0 identifier:(id)arg1;
- (id)resPath;
- (void)setNle_filterName:(id)arg0;
- (void)setNle_resourceType:(unsigned long long)arg0;
- (id)nle_filterName;
- (unsigned long long)nle_resourceType;
- (id)getExtraInfoDict;
- (void)setExtraInfo:(id)arg0 forKey:(id)arg1;
- (id)algoCachePath;
- (void)setAlgoCachePath:(id)arg0;
- (void)removeallKeyFrameInfo;
- (id)getKeyFrameInfo;
- (void)completeUpdateAllkeyFrames;
- (unsigned long long)getKeyFrameNum;
- (BOOL)needRefreshKeyFrame;
- (id)stopMotionPath;
- (id)subStickers;
- (id)featureKeyFrameInfo;
- (void)setFeatureKeyFrameInfo:(id)arg0;
- (void)setExtraInfoDic:(id)arg0;
- (id)subStickerDir;
- (void)setSubStickerDir:(id)arg0;
- (void)setSubStickers:(id)arg0;
- (void)setStopMotionPath:(id)arg0;
- (id)extraInfoForKey:(id)arg0;
- (unsigned long long)featureType;
- (int)order;
- (id)initWithPath:(id)arg0;
- (void)setOrder:(int)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (id)description;
- (id)params;
- (void)setParams:(id)arg0;
- (void)setFeatureType:(unsigned long long)arg0;
- (BOOL)isContentEqual:(id)arg0;

@end