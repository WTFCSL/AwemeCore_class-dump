//
//     Generated by private class-dump
//

@class IESThirdPartyStickerModel, NSArray, NSString, NSDictionary, IESThirdPartyStickerInfoModel, IESEffectModel;

@interface IESInfoStickerModel : MTLModel <MTLJSONSerializing> {
    IESEffectModel *_effectModel;
    IESThirdPartyStickerModel *_thirdPartyStickerModel;
    BOOL _isCommerce;
    BOOL _isIop;
    NSString *_effectName;
    NSString *_hintLabel;
    NSString *_hintIconURI;
    NSArray *_hintIconDownloadURLs;
    NSString *_sdkVersion;
    NSString *_appVersion;
    NSString *_md5;
    NSArray *_fileDownloadURLs;
    NSString *_iconDownlaodURI;
    NSArray *_iconDownloadURLs;
    NSString *_sourceIdentifier;
    NSString *_effectIdentifier;
    NSString *_devicePlatform;
    NSArray *_types;
    NSArray *_tags;
    NSString *_tagsUpdatedTimeStamp;
    NSString *_parentEffectID;
    NSArray *_childrenStickers;
    NSArray *_childrenIds;
    long long _effectType;
    NSArray *_musicIDs;
    unsigned long long _lokiSource;
    NSString *_designerId;
    NSString *_schema;
    NSArray *_algorithmRequirements;
    NSString *_extra;
    NSString *_iopId;
    NSString *_designerEncryptedId;
    NSString *_sdkExtra;
    NSString *_resourceID;
    NSString *_adRawData;
    NSArray *_bindIDs;
    long long _ptime;
    NSString *_gradeKey;
    NSString *_composerParams;
    NSString *_panelName;
    NSDictionary *_modelNames;
    long long _hintFileFormat;
    NSString *_hintFileURI;
    NSArray *_hintFileURLs;
    NSArray *_challengeIDs;
    NSString *_identifier;
    long long _dataSource;
    NSString *_title;
    IESThirdPartyStickerInfoModel *_thumbnailSticker;
    IESThirdPartyStickerInfoModel *_sticker;
    NSString *_clickURL;
    NSString *_thirdPartyExtra;
    NSArray *_typesSec;
    NSArray *_algorithmRequirementsSec;
    NSString *_modelNamesJsonStrSec;
    NSString *_modelNamesJsonStr;
}

@property (nonatomic) long long downloadStatus;
@property (readonly, copy, nonatomic) NSArray *previewImgUrls;
@property (readonly, copy, nonatomic) NSArray *typesSec;
@property (readonly, copy, nonatomic) NSArray *algorithmRequirementsSec;
@property (readonly, copy, nonatomic) NSString *modelNamesJsonStrSec;
@property (copy, nonatomic) NSArray *types;
@property (copy, nonatomic) NSArray *algorithmRequirements;
@property (copy, nonatomic) NSString *modelNamesJsonStr;
@property (copy, nonatomic) NSDictionary *modelNames;
@property (copy) NSArray *childrenStickers;
@property (readonly, nonatomic) NSString *effectName;
@property (readonly, copy, nonatomic) NSString *hintLabel;
@property (readonly, copy, nonatomic) NSString *hintIconURI;
@property (readonly, copy, nonatomic) NSArray *hintIconDownloadURLs;
@property (readonly, copy, nonatomic) NSString *sdkVersion;
@property (readonly, copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSArray *fileDownloadURLs;
@property (copy, nonatomic) NSString *iconDownlaodURI;
@property (copy, nonatomic) NSArray *iconDownloadURLs;
@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, copy, nonatomic) NSString *effectIdentifier;
@property (readonly, copy, nonatomic) NSString *devicePlatform;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSString *tagsUpdatedTimeStamp;
@property (readonly, copy, nonatomic) NSString *parentEffectID;
@property (readonly, copy, nonatomic) NSArray *childrenIds;
@property (readonly, nonatomic) long long effectType;
@property (readonly, copy, nonatomic) NSArray *musicIDs;
@property (readonly, nonatomic) unsigned long long lokiSource;
@property (readonly, copy, nonatomic) NSString *designerId;
@property (readonly, copy, nonatomic) NSString *schema;
@property (readonly, copy, nonatomic) NSString *extra;
@property (readonly, nonatomic) BOOL isCommerce;
@property (readonly, copy, nonatomic) NSString *iopId;
@property (readonly, nonatomic) BOOL isIop;
@property (readonly, copy, nonatomic) NSString *designerEncryptedId;
@property (readonly, copy, nonatomic) NSString *sdkExtra;
@property (readonly, copy, nonatomic) NSString *resourceID;
@property (readonly, copy, nonatomic) NSString *adRawData;
@property (readonly, copy, nonatomic) NSArray *bindIDs;
@property (readonly, nonatomic) long long ptime;
@property (readonly, copy, nonatomic) NSString *gradeKey;
@property (readonly, copy, nonatomic) NSString *composerParams;
@property (copy, nonatomic) NSString *panelName;
@property (readonly, nonatomic) long long hintFileFormat;
@property (readonly, copy, nonatomic) NSString *hintFileURI;
@property (readonly, copy, nonatomic) NSArray *hintFileURLs;
@property (readonly, copy, nonatomic) NSArray *challengeIDs;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long dataSource;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) IESThirdPartyStickerInfoModel *thumbnailSticker;
@property (readonly, nonatomic) IESThirdPartyStickerInfoModel *sticker;
@property (readonly, copy, nonatomic) NSString *clickURL;
@property (readonly, copy, nonatomic) NSString *thirdPartyExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isCommerce;
- (id)gradeKey;
- (id)iconDownlaodURI;
- (void)setIconDownloadURLs:(id)arg0;
- (id)tagsUpdatedTimeStamp;
- (id)fileDownloadURLs;
- (id)effectModel;
- (id)iconDownloadURLs;
- (id)typesSec;
- (id)algorithmRequirementsSec;
- (id)algorithmRequirements;
- (void)setAlgorithmRequirements:(id)arg0;
- (id)modelNamesJsonStrSec;
- (id)modelNamesJsonStr;
- (void)setModelNamesJsonStr:(id)arg0;
- (void)updateModelNames;
- (void)setFileDownloadURLs:(id)arg0;
- (void)setChildrenStickers:(id)arg0;
- (id)childrenStickers;
- (id)childrenIds;
- (id)thirdPartyStickerModel;
- (void)updateChildrenStickersWithCollection:(id)arg0;
- (id)hintIconURI;
- (id)hintIconDownloadURLs;
- (void)setIconDownlaodURI:(id)arg0;
- (id)parentEffectID;
- (id)musicIDs;
- (unsigned long long)lokiSource;
- (id)designerId;
- (id)iopId;
- (BOOL)isIop;
- (id)designerEncryptedId;
- (id)sdkExtra;
- (id)adRawData;
- (id)bindIDs;
- (id)composerParams;
- (long long)hintFileFormat;
- (id)hintFileURI;
- (id)hintFileURLs;
- (id)challengeIDs;
- (id)thumbnailSticker;
- (id)clickURL;
- (id)thirdPartyExtra;
- (id)previewImgUrls;
- (BOOL)isUploadSticker;
- (void)setTypes:(id)arg0;
- (id)types;
- (long long)dataSource;
- (long long)effectType;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (id)filePath;
- (void).cxx_destruct;
- (id)resourceID;
- (id)modelNames;
- (id)tags;
- (id)identifier;
- (id)extra;
- (id)appVersion;
- (id)title;
- (void)setModelNames:(id)arg0;
- (id)sourceIdentifier;
- (void)setURLPrefix:(id)arg0;
- (id)schema;
- (id)sdkVersion;
- (id)effectName;
- (id)md5;
- (void)setMd5:(id)arg0;
- (BOOL)downloaded;
- (id)devicePlatform;
- (id)hintLabel;
- (id)sticker;
- (long long)downloadStatus;
- (id)stickerIdentifier;
- (void)setDownloadStatus:(long long)arg0;
- (id)panelName;
- (void)setPanelName:(id)arg0;
- (long long)ptime;
- (id)effectIdentifier;

@end
