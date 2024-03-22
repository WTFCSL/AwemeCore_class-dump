//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary, HGUniqueID;

@interface HGModel : NSObject <NSCoding, NSCopying, HGAppMetaBriefProtocol> {
    BOOL _openLoc;
    BOOL _canDownloadBr;
    BOOL _isInnerModel;
    BOOL _innerUseOnline;
    BOOL _styleBitmap;
    BOOL _isInnerGame;
    HGUniqueID *_uniqueID;
    NSString *_ID;
    NSString *_name;
    long long _type;
    long long _originType;
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
    NSString *_versionOrigin;
    NSString *_latestVersion;
    long long _version_code;
    NSArray *_urls;
    NSArray *_packages;
    NSString *_schema;
    NSString *_loadingBg;
    NSString *_scVersionStateJson;
    NSString *_scAppExtJson;
    NSString *_md5;
    NSDictionary *_domainsAuthDict;
    NSArray *_adModels;
    NSString *_minJSsdkVersion;
    NSDictionary *_extraDict;
    NSString *_webURL;
    NSString *_libraURL;
    NSString *_versionType;
    NSString *_privacyPolicy;
    NSDictionary *_extJSON;
    NSArray *_innerResURLs;
    NSString *_innerResMd5;
    NSArray *_odrResourcesURLs;
    NSString *_odrResourcesMD5;
    long long _odrResourcesLength;
    NSString *_odrCodesTag;
    NSString *_odrCodesTagV2;
    NSString *_odrCodesTagOrigin;
    long long _odrCodesOriginalVersionCode;
    NSString *_odrCodesMD5;
    long long _odrCodesLength;
    long long _needUpdateSettingsFlag;
    long long _adSiteVersion;
    long long _cacheTimestamp;
    NSString *_interactive_url;
    NSString *_versionMark;
    NSArray *_plugins;
    NSString *_biz_md5;
    long long _switchBitmap;
    NSString *_odrVersion;
}

@property (class, readonly, nonatomic) NSString *defaultVersionType;

@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *versionOrigin;
@property (copy, nonatomic) NSString *versionMark;
@property (copy, nonatomic) NSArray *packages;
@property (copy, nonatomic) NSArray *plugins;
@property (copy, nonatomic) NSString *biz_md5;
@property (nonatomic) long long switchBitmap;
@property (copy, nonatomic) NSArray *innerResURLs;
@property (copy, nonatomic) NSString *innerResMd5;
@property (copy, nonatomic) NSArray *odrResourcesURLs;
@property (copy, nonatomic) NSString *odrResourcesMD5;
@property (nonatomic) long long odrResourcesLength;
@property (copy, nonatomic) NSString *odrCodesTag;
@property (copy, nonatomic) NSString *odrCodesTagV2;
@property (copy, nonatomic) NSString *odrCodesTagOrigin;
@property (copy, nonatomic) NSString *odrCodesMD5;
@property (nonatomic) long long odrCodesLength;
@property (nonatomic) BOOL innerUseOnline;
@property (copy, nonatomic) NSString *odrVersion;
@property (retain, nonatomic) HGUniqueID *uniqueID;
@property (copy) NSString *name;
@property (nonatomic) long long type;
@property (nonatomic) long long originType;
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
@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *loadingBg;
@property (copy, nonatomic) NSString *scVersionStateJson;
@property (copy, nonatomic) NSString *scAppExtJson;
@property (copy, nonatomic) NSString *md5;
@property (copy) NSDictionary *domainsAuthDict;
@property (copy) NSArray *adModels;
@property (copy, nonatomic) NSString *minJSsdkVersion;
@property (copy) NSDictionary *extraDict;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *libraURL;
@property (copy, nonatomic) NSString *versionType;
@property (copy) NSString *privacyPolicy;
@property (readonly, nonatomic, getter=isReleaseCandidateMode) BOOL releaseCandidateMode;
@property (readonly, nonatomic, getter=isBetaMode) BOOL betaMode;
@property (readonly, nonatomic, getter=isDebugMode) BOOL debugMode;
@property (readonly, nonatomic, getter=isOffline) BOOL offline;
@property (copy, nonatomic) NSDictionary *extJSON;
@property (nonatomic) BOOL openLoc;
@property (nonatomic) BOOL canDownloadBr;
@property (nonatomic) BOOL isInnerModel;
@property (nonatomic) long long odrCodesOriginalVersionCode;
@property (readonly, nonatomic) BOOL isInnerOrODRMeta;
@property (nonatomic) long long needUpdateSettingsFlag;
@property (nonatomic) long long adSiteVersion;
@property (nonatomic) long long cacheTimestamp;
@property (nonatomic) BOOL styleBitmap;
@property (copy, nonatomic) NSString *interactive_url;
@property (nonatomic) BOOL isInnerGame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (id)defaultVersionType;

- (void)setExtraDict:(id)arg0;
- (id)extraDict;
- (id)adModels;
- (void)setAdModels:(id)arg0;
- (id)versionType;
- (id)initWithDictionary:(id)arg0 withKey:(id)arg1 vec:(id)arg2 versionType:(id)arg3;
- (id)interactive_url;
- (void)mergeNewestInfoFromModel:(id)arg0;
- (BOOL)isNewerThanAppModel:(id)arg0;
- (id)authList;
- (id)minJSsdkVersion;
- (unsigned long long)versionState;
- (id)initFakeModel;
- (BOOL)canDownloadBr;
- (id)odrCodesTagV2;
- (BOOL)isODRVersionBehind;
- (BOOL)styleBitmap;
- (BOOL)isPreVersionEnableDy;
- (id)innerResURLs;
- (id)innerResMd5;
- (id)biz_md5;
- (id)versionMark;
- (void)setVersionMark:(id)arg0;
- (id)adContainer_privacyPolicy;
- (BOOL)isAdContainer;
- (void)checkODR;
- (void)setBiz_md5:(id)arg0;
- (id)handlePlugins:(id)arg0;
- (long long)version_code;
- (id)versionOrigin;
- (void)setVersionOrigin:(id)arg0;
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
- (BOOL)innerUseOnline;
- (void)setInnerUseOnline:(BOOL)arg0;
- (void)setInnerResURLs:(id)arg0;
- (void)setInnerResMd5:(id)arg0;
- (void)setIsInnerModel:(BOOL)arg0;
- (id)odrResourcesURLs;
- (void)setOdrResourcesURLs:(id)arg0;
- (id)odrVersion;
- (void)setOdrVersion:(id)arg0;
- (id)odrCodesTag;
- (void)setOdrCodesTag:(id)arg0;
- (void)setOdrCodesTagV2:(id)arg0;
- (id)odrCodesTagOrigin;
- (void)setOdrCodesTagOrigin:(id)arg0;
- (id)odrResourcesMD5;
- (void)setOdrResourcesMD5:(id)arg0;
- (id)odrCodesMD5;
- (void)setOdrCodesMD5:(id)arg0;
- (long long)odrResourcesLength;
- (void)setOdrResourcesLength:(long long)arg0;
- (long long)odrCodesLength;
- (void)setOdrCodesLength:(long long)arg0;
- (void)setInteractive_url:(id)arg0;
- (void)setTtid:(id)arg0;
- (void)setVersion_code:(long long)arg0;
- (void)setMinJSsdkVersion:(id)arg0;
- (void)setVersionType:(id)arg0;
- (void)setLibraURL:(id)arg0;
- (void)setExtJSON:(id)arg0;
- (void)setOpenLoc:(BOOL)arg0;
- (void)setAdSiteVersion:(long long)arg0;
- (long long)odrCodesOriginalVersionCode;
- (void)setOdrCodesOriginalVersionCode:(long long)arg0;
- (void)setStyleBitmap:(BOOL)arg0;
- (void)setScVersionStateJson:(id)arg0;
- (void)setScAppExtJson:(id)arg0;
- (void)setLoadingBg:(id)arg0;
- (id)ttid;
- (id)pigeonList;
- (BOOL)isInnerGame;
- (id)libraURL;
- (id)extJSON;
- (BOOL)openLoc;
- (long long)adSiteVersion;
- (id)scVersionStateJson;
- (id)scAppExtJson;
- (id)loadingBg;
- (BOOL)isInnerModel;
- (long long)needUpdateSettingsFlag;
- (void)setNeedUpdateSettingsFlag:(long long)arg0;
- (void)setCanDownloadBr:(BOOL)arg0;
- (long long)cacheTimestamp;
- (void)setCacheTimestamp:(long long)arg0;
- (id)getODRTag:(id)arg0;
- (void)buildSCGameODRMeta;
- (void)checkLocalODR;
- (void)checkLocalPkg;
- (void)buildNativeODRMeta;
- (BOOL)hasTTPKG;
- (id)initWithDictionary:(id)arg0 withKey:(id)arg1 vec:(id)arg2;
- (BOOL)isReleaseCandidateMode;
- (BOOL)isBetaMode;
- (void)mockInnerAppFromMeta:(id)arg0;
- (BOOL)getSwitchBoolValue:(long long)arg0;
- (void)setAppIdUnsafe:(id)arg0;
- (id)fullVersionDescription;
- (BOOL)isInnerOrODRMeta;
- (void)setBdp_modelMetrics:(id)arg0;
- (id)bdp_modelMetrics;
- (void)sc_setOdrCodesTag:(id)arg0;
- (id)urls;
- (void)setSchema:(id)arg0;
- (id)icon;
- (id)ID;
- (void)setVersion:(id)arg0;
- (void)setID:(id)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (unsigned long long)state;
- (void)setPlugins:(id)arg0;
- (void)setSummary:(id)arg0;
- (void)setUniqueID:(id)arg0;
- (void)setState:(unsigned long long)arg0;
- (id)webURL;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setWebURL:(id)arg0;
- (long long)type;
- (long long)orientation;
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
- (id)appId;
- (id)schema;
- (id)name;
- (id)plugins;
- (id)packages;
- (void)setPackages:(id)arg0;
- (id)md5;
- (void)setMd5:(id)arg0;
- (void)setBlockList:(id)arg0;
- (id)blockList;
- (id)privacyPolicy;
- (void)setPrivacyPolicy:(id)arg0;
- (BOOL)isDebugMode;
- (long long)versionCode;
- (long long)originType;
- (void)setOriginType:(long long)arg0;

@end
