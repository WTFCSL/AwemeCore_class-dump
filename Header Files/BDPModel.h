//
//     Generated by private class-dump
//

@class BDPPrivacyInfoModel, NSString, NSArray, BDPModelMetrics, NSDictionary, BDPUniqueID;
@protocol BDPODRMetaBriefProtocol;

@interface BDPModel : NSObject <NSCoding, NSCopying, BDPAppMetaBriefProtocol> {
    BOOL _isTrial;
    BOOL _isTrialAvailable;
    BOOL _openLoc;
    BOOL _isInnerGame;
    BDPUniqueID *_uniqueID;
    NSString *_ID;
    NSString *_name;
    long long _type;
    NSString *_versionMark;
    NSString *_icon;
    unsigned long long _state;
    unsigned long long _versionState;
    long long _orientation;
    NSString *_ttid;
    NSArray *_authList;
    NSArray *_blockList;
    NSArray *_pigeonList;
    NSString *_summary;
    unsigned long long _shareLevel;
    NSString *_version;
    NSString *_latestVersion;
    long long _version_code;
    long long _currentTimeStamp;
    long long _registerTimeStamp;
    NSArray *_urls;
    NSArray *_packages;
    NSString *_buildTag;
    NSString *_schema;
    NSString *_md5;
    NSDictionary *_domainsAuthDict;
    NSArray *_adModels;
    NSString *_minJSsdkVersion;
    NSDictionary *_extraDict;
    NSString *_libraURL;
    NSArray *_trialBlock;
    NSDictionary *_newestOriginalData;
    long long _showAdType;
    NSDictionary *_ritRelation;
    NSString *_versionType;
    NSString *_privacyPolicy;
    BDPPrivacyInfoModel *_privacyInfo;
    NSDictionary *_extJSON;
    long long _needUpdateSettingsFlag;
    long long _cacheTimestamp;
    long long _switchBitmap;
    long long _bizSwitchBitmap;
    NSDictionary *_bizCustomXconfig;
    NSDictionary *_extInteract;
    NSArray *_analysisAccessInfo;
    NSString *_logID;
    id<BDPODRMetaBriefProtocol> _gameExtension;
    NSArray *_odrPackages;
    NSString *_odrVersion;
    NSString *_key;
    NSString *_iv;
}

@property (class, readonly, nonatomic) NSString *defaultVersionType;

@property (retain, nonatomic, setter=setBdp_modelMetrics:) BDPModelMetrics *bdp_modelMetrics;
@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *versionMark;
@property (copy, nonatomic) NSArray *packages;
@property (nonatomic) long long switchBitmap;
@property (nonatomic) long long bizSwitchBitmap;
@property (retain, nonatomic) id<BDPODRMetaBriefProtocol> gameExtension;
@property (copy, nonatomic) NSArray *odrPackages;
@property (copy, nonatomic) NSString *odrVersion;
@property (copy) NSString *key;
@property (copy) NSString *iv;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy) NSString *name;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *icon;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long versionState;
@property (nonatomic) long long orientation;
@property (copy, nonatomic) NSString *ttid;
@property (copy) NSArray *authList;
@property (copy) NSArray *blockList;
@property (copy) NSArray *pigeonList;
@property (copy, nonatomic) NSString *summary;
@property (nonatomic) unsigned long long shareLevel;
@property (copy, nonatomic) NSString *version;
@property (copy) NSString *latestVersion;
@property (nonatomic) long long version_code;
@property long long currentTimeStamp;
@property long long registerTimeStamp;
@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *buildTag;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *md5;
@property (copy) NSDictionary *domainsAuthDict;
@property (copy) NSArray *adModels;
@property (copy, nonatomic) NSString *minJSsdkVersion;
@property (copy) NSDictionary *extraDict;
@property (copy, nonatomic) NSString *libraURL;
@property BOOL isTrial;
@property BOOL isTrialAvailable;
@property (copy) NSArray *trialBlock;
@property (copy) NSDictionary *newestOriginalData;
@property long long showAdType;
@property (copy) NSDictionary *ritRelation;
@property (copy, nonatomic) NSString *versionType;
@property (copy) NSString *privacyPolicy;
@property (copy) BDPPrivacyInfoModel *privacyInfo;
@property (readonly, nonatomic, getter=isReleaseCandidateMode) BOOL releaseCandidateMode;
@property (readonly, nonatomic, getter=isBetaMode) BOOL betaMode;
@property (readonly, nonatomic, getter=isDebugMode) BOOL debugMode;
@property (readonly, nonatomic, getter=isOffline) BOOL offline;
@property (copy, nonatomic) NSDictionary *extJSON;
@property (nonatomic) BOOL openLoc;
@property (readonly, nonatomic) BOOL isInnerCP;
@property (nonatomic) long long needUpdateSettingsFlag;
@property (nonatomic) long long cacheTimestamp;
@property (copy, nonatomic) NSDictionary *bizCustomXconfig;
@property (copy, nonatomic) NSDictionary *extInteract;
@property (copy, nonatomic) NSArray *analysisAccessInfo;
@property (copy, nonatomic) NSString *logID;
@property (nonatomic) BOOL isInnerGame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (id)defaultVersionType;
+ (id)convertToUsageModelWithModel:(id)arg0;
+ (id)convertPreloadResultWithModel:(id)arg0 schema:(id)arg1;

- (void)setExtraDict:(id)arg0;
- (id)extraDict;
- (void)setCurrentTimeStamp:(long long)arg0;
- (id)adModels;
- (void)setAdModels:(id)arg0;
- (id)versionType;
- (void)mergeNewestInfoFromModel:(id)arg0;
- (BOOL)isNewerThanAppModel:(id)arg0;
- (id)authList;
- (id)minJSsdkVersion;
- (unsigned long long)versionState;
- (id)initFakeModel;
- (id)versionMark;
- (void)setVersionMark:(id)arg0;
- (id)adContainer_privacyPolicy;
- (BOOL)isAdContainer;
- (long long)version_code;
- (void)setVersionState:(unsigned long long)arg0;
- (void)setAuthList:(id)arg0;
- (unsigned long long)shareLevel;
- (void)setShareLevel:(unsigned long long)arg0;
- (id)domainsAuthDict;
- (void)setDomainsAuthDict:(id)arg0;
- (void)setPigeonList:(id)arg0;
- (void)setIsInnerGame:(BOOL)arg0;
- (long long)switchBitmap;
- (void)setSwitchBitmap:(long long)arg0;
- (void)setLatestVersion:(id)arg0;
- (id)odrVersion;
- (void)setOdrVersion:(id)arg0;
- (void)setTtid:(id)arg0;
- (void)setVersion_code:(long long)arg0;
- (void)setMinJSsdkVersion:(id)arg0;
- (void)setVersionType:(id)arg0;
- (void)setLibraURL:(id)arg0;
- (void)setExtJSON:(id)arg0;
- (void)setOpenLoc:(BOOL)arg0;
- (id)ttid;
- (id)pigeonList;
- (BOOL)isInnerGame;
- (id)libraURL;
- (id)extJSON;
- (BOOL)openLoc;
- (long long)needUpdateSettingsFlag;
- (void)setNeedUpdateSettingsFlag:(long long)arg0;
- (long long)cacheTimestamp;
- (void)setCacheTimestamp:(long long)arg0;
- (id)initWithDictionary:(id)arg0 withKey:(id)arg1 vec:(id)arg2;
- (BOOL)isReleaseCandidateMode;
- (BOOL)isBetaMode;
- (BOOL)getSwitchBoolValue:(long long)arg0;
- (void)setAppIdUnsafe:(id)arg0;
- (id)fullVersionDescription;
- (void)setBdp_modelMetrics:(id)arg0;
- (id)bdp_modelMetrics;
- (void)setPrivacyInfo:(id)arg0;
- (id)privacyInfo;
- (BOOL)isTrial;
- (void)setIsTrial:(BOOL)arg0;
- (id)bizCustomXconfig;
- (long long)getAppTrustLevel;
- (id)gameExtension;
- (id)getSafeTrustDictionary;
- (long long)registerTimeStamp;
- (BOOL)hasODRPackages;
- (BOOL)isInnerCP;
- (BOOL)getBizSwitchBoolValue:(long long)arg0;
- (id)buildTagIdentifier;
- (BOOL)isTrialAvailable;
- (id)trialBlock;
- (id)analysisAccessInfo;
- (id)initFakeModelWithUniqueId:(id)arg0;
- (id)privacyInfoWithParam:(id)arg0;
- (id)bizCustomXconfigFromDict:(id)arg0;
- (id)packagesFromDict:(id)arg0 backupDict:(id)arg1 decryptKey:(id)arg2 iv:(id)arg3;
- (long long)bizSwitchBitmap;
- (void)setBizSwitchBitmap:(long long)arg0;
- (id)extInteract;
- (void)setExtInteract:(id)arg0;
- (void)setIsTrialAvailable:(BOOL)arg0;
- (void)setTrialBlock:(id)arg0;
- (void)setRegisterTimeStamp:(long long)arg0;
- (long long)showAdType;
- (void)setShowAdType:(long long)arg0;
- (id)ritRelation;
- (void)setRitRelation:(id)arg0;
- (void)setGameExtension:(id)arg0;
- (void)setBizCustomXconfig:(id)arg0;
- (id)newestOriginalData;
- (void)setNewestOriginalData:(id)arg0;
- (id)buildTag;
- (void)setBuildTag:(id)arg0;
- (id)odrPackages;
- (void)setOdrPackages:(id)arg0;
- (void)setAnalysisAccessInfo:(id)arg0;
- (id)getMetaDataForKey:(id)arg0 needDecrypt:(BOOL)arg1;
- (void)forceOnIndusrtySDK;
- (id)urls;
- (void)setSchema:(id)arg0;
- (id)key;
- (id)icon;
- (id)ID;
- (void)setVersion:(id)arg0;
- (void)setID:(id)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (unsigned long long)state;
- (void)setSummary:(id)arg0;
- (void)setUniqueID:(id)arg0;
- (void)setState:(unsigned long long)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (long long)type;
- (long long)orientation;
- (void)setKey:(id)arg0;
- (void)setType:(long long)arg0;
- (id)version;
- (id)initWithCoder:(id)arg0;
- (unsigned long long)hash;
- (void)setOrientation:(long long)arg0;
- (void)setName:(id)arg0;
- (void)setUrls:(id)arg0;
- (void)setIcon:(id)arg0;
- (BOOL)isOffline;
- (id)summary;
- (BOOL)isEqual:(id)arg0;
- (id)latestVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg0;
- (id)iv;
- (id)appId;
- (id)schema;
- (void)setIv:(id)arg0;
- (id)name;
- (id)packages;
- (void)setPackages:(id)arg0;
- (id)md5;
- (void)setMd5:(id)arg0;
- (long long)currentTimeStamp;
- (id)logID;
- (void)setBlockList:(id)arg0;
- (id)blockList;
- (id)privacyPolicy;
- (void)setPrivacyPolicy:(id)arg0;
- (void)setLogID:(id)arg0;
- (BOOL)isDebugMode;
- (long long)versionCode;

@end
