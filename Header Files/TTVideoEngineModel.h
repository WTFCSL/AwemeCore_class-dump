//
//     Generated by private class-dump
//

@class NSDictionary, TTVideoEngineInfoModel, NSString;

@interface TTVideoEngineModel : NSObject <TTVideoEngineModelCacheItem, TTVideoEngineSource, NSSecureCoding> {
    TTVideoEngineInfoModel *_videoInfo;
    NSDictionary *_jsonInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *jsonInfo;
@property (retain, nonatomic) TTVideoEngineInfoModel *videoInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoModelWithDict:(id)arg0;
+ (id)buildCacheKey:(id)arg0 params:(id)arg1 ptoken:(id)arg2;
+ (id)videoModelWithDict:(id)arg0 encrypted:(BOOL)arg1;
+ (id)videoModelWithPb:(id)arg0;
+ (id)videoModelWithMediaJsonString:(id)arg0;
+ (BOOL)supportsSecureCoding;

- (id)supportedResolutionTypes;
- (id)videoInfo;
- (void)setVideoInfo:(id)arg0;
- (id)videoInfoForType:(unsigned long long)arg0;
- (id)supportedQualityInfos;
- (BOOL)supportDash;
- (BOOL)supportHLS;
- (BOOL)isHaveSpadea;
- (BOOL)supportHLSSeamlessSwitch;
- (BOOL)supportBash;
- (id)dictInfo;
- (void)setJsonInfo:(id)arg0;
- (id)jsonInfo;
- (BOOL)supportMp4;
- (id)allURLWithDefinitionType:(unsigned long long)arg0 transformedURL:(BOOL)arg1;
- (void).cxx_destruct;
- (id)videoType;
- (BOOL)hasExpired;
- (id)initWithCoder:(id)arg0;
- (BOOL)isEqual:(id)arg0;
- (id)description;
- (void)encodeWithCoder:(id)arg0;
- (id)codecTypes;
- (id)codecType;

@end