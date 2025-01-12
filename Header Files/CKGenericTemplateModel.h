//
//     Generated by private class-dump
//

@class NSString, CKGenericTemplateAuthor, NSArray, NSDictionary, CKGenericTemplateFile, CKGenericTemplateVideo, CKGenericTemplateCover, NSNumber;

@interface CKGenericTemplateModel : CKBaseResponseModel <ACCEditToolMusicEffectModelProtocol> {
    BOOL _isCollected;
    NSString *_templateId;
    NSString *_regionKey;
    unsigned long long _type;
    NSString *_mediaId;
    NSString *_title;
    NSString *_desc;
    NSArray *_tags;
    NSString *_extra;
    NSString *_recId;
    NSDictionary *_businessData;
    CKGenericTemplateFile *_file;
    CKGenericTemplateCover *_cover;
    CKGenericTemplateAuthor *_author;
    CKGenericTemplateVideo *_video;
    CKGenericTemplateCover *_dynamicCover;
    long long _lokiId;
    long long _usageAmount;
    long long _fragmentCount;
    NSString *_musicID;
    NSArray *_challenge;
    NSString *_segmentInfo;
}

@property (nonatomic) BOOL acc_isDownloaded;
@property (nonatomic) BOOL acc_isDownloading;
@property (readonly, nonatomic) BOOL acc_isDownloadable;
@property (nonatomic) double acc_handlePickedTime;
@property (nonatomic) BOOL acc_hasCache;
@property (retain, nonatomic) NSDictionary *acc_downloadExtraInfo;
@property (retain, nonatomic) NSNumber *acc_currentIndex;
@property (readonly, nonatomic) BOOL notRecommendMusic;
@property (readonly, copy, nonatomic) NSArray *useMusicIds;
@property (readonly, copy, nonatomic) NSArray *useLocalAudios;
@property (readonly, nonatomic) BOOL excludeMusic;
@property (readonly, nonatomic) BOOL hasEffectMusic;
@property (readonly, nonatomic) double volume;
@property (copy, nonatomic) NSString *acc_filePath;
@property (readonly, copy, nonatomic) NSString *sdkExtra;
@property (readonly, copy, nonatomic) NSString *effectResourcePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CKGenericTemplateFile *file;
@property (retain, nonatomic) CKGenericTemplateCover *cover;
@property (retain, nonatomic) CKGenericTemplateAuthor *author;
@property (retain, nonatomic) CKGenericTemplateVideo *video;
@property (retain, nonatomic) CKGenericTemplateCover *dynamicCover;
@property (nonatomic) long long lokiId;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) long long usageAmount;
@property (nonatomic) long long fragmentCount;
@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSArray *challenge;
@property (copy, nonatomic) NSString *segmentInfo;
@property (readonly, copy, nonatomic) NSString *templateId;
@property (readonly, copy, nonatomic) NSString *regionKey;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *mediaId;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *desc;
@property (readonly, copy, nonatomic) NSArray *tags;
@property (readonly, copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *recId;
@property (readonly, copy, nonatomic) NSDictionary *businessData;

+ (id)JSONKeyPathsByPropertyKey;

- (id)cover;
- (id)dynamicCover;
- (void)setCover:(id)arg0;
- (BOOL)isCollected;
- (void)setIsCollected:(BOOL)arg0;
- (void)setDynamicCover:(id)arg0;
- (id)musicID;
- (BOOL)excludeMusic;
- (BOOL)hasEffectMusic;
- (BOOL)notRecommendMusic;
- (id)recId;
- (void)setRecId:(id)arg0;
- (id)businessData;
- (id)regionKey;
- (long long)lokiId;
- (long long)usageAmount;
- (void)setLokiId:(long long)arg0;
- (void)setUsageAmount:(long long)arg0;
- (void)setFragmentCount:(long long)arg0;
- (void)setMusicID:(id)arg0;
- (id)sdkExtra;
- (BOOL)acc_isTemplate;
- (BOOL)acc_isDownloadable;
- (BOOL)acc_isDownloaded;
- (void)setAcc_handlePickedTime:(double)arg0;
- (void)setAcc_hasCache:(BOOL)arg0;
- (BOOL)acc_hasCache;
- (id)acc_downloadExtraInfo;
- (void)setAcc_downloadExtraInfo:(id)arg0;
- (id)acc_currentIndex;
- (BOOL)acc_isEffect;
- (id)useLocalAudios;
- (id)effectResourcePath;
- (id)useMusicIds;
- (void)setAcc_isDownloaded:(BOOL)arg0;
- (void)setAcc_filePath:(id)arg0;
- (id)acc_filePath;
- (void)setAcc_currentIndex:(id)arg0;
- (double)acc_handlePickedTime;
- (BOOL)acc_isDownloading;
- (void)setAcc_isDownloading:(BOOL)arg0;
- (id)toolMusic;
- (id)p_analyzeSDKExtra;
- (id)desc;
- (long long)fragmentCount;
- (void).cxx_destruct;
- (id)challenge;
- (double)volume;
- (id)tags;
- (unsigned long long)type;
- (void)setVideo:(id)arg0;
- (id)extra;
- (void)setFile:(id)arg0;
- (void)setChallenge:(id)arg0;
- (id)title;
- (id)author;
- (void)setAuthor:(id)arg0;
- (id)video;
- (id)file;
- (id)templateId;
- (id)segmentInfo;
- (id)mediaId;
- (void)setSegmentInfo:(id)arg0;

@end
