//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSURL, NSError;

@interface HGSchema : NSObject <NSCopying> {
    BOOL _skipDomainCheck;
    NSString *_schemaVersion;
    NSURL *_originURL;
    NSDictionary *_originQueryParams;
    NSString *_protocol;
    NSString *_host;
    NSString *_fullHost;
    NSString *_appID;
    NSString *_token;
    NSDictionary *_meta;
    NSString *_url;
    NSDictionary *_urlDictionary;
    NSString *_ttid;
    NSString *_launchFrom;
    NSString *_originEntrance;
    long long _techType;
    NSString *_scene;
    NSString *_subScene;
    NSString *_startPage;
    NSString *_startPagePath;
    NSString *_startPageQuery;
    NSDictionary *_startPageQueryDictionary;
    NSString *_query;
    NSDictionary *_queryDictionary;
    NSString *_extra;
    NSString *_bdpLog;
    NSDictionary *_refererInfoDictionary;
    NSString *_shareTicket;
    NSString *_adParams;
    NSDictionary *_adParamsDictionary;
    NSString *_snapshotCompileVersion;
    NSString *_sourceMD5;
    NSString *_timelineServerUrl;
    NSDictionary *_schemaCodecTrackInfo;
    NSString *_toolbarStyle;
    long long _animationType;
    NSString *_liveRoomID;
    NSString *_gdExt;
    NSDictionary *_gdExtDictionary;
    NSString *_IDEConfig;
    NSDictionary *_IDEConfigDictionary;
    NSError *_error;
    NSString *_originStartPage;
    NSString *_versionType;
    NSString *_packagesToken;
    long long _minHGVersionCode;
    NSDictionary *_extraDictionary;
    NSDictionary *_bdpLogDictionary;
    NSString *_IDEServerURL;
    NSString *_isSoftAd;
    NSString *_cid;
    NSString *_projectID;
    NSString *_promotionID;
    NSString *_orit;
    NSString *_rit;
}

@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *schemaVersion;
@property (copy, nonatomic) NSURL *originURL;
@property (copy, nonatomic) NSDictionary *originQueryParams;
@property (copy, nonatomic) NSString *originStartPage;
@property (copy, nonatomic) NSString *protocol;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *fullHost;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *versionType;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *packagesToken;
@property (nonatomic) long long minHGVersionCode;
@property (copy, nonatomic) NSDictionary *meta;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *urlDictionary;
@property (copy, nonatomic) NSString *ttid;
@property (copy, nonatomic) NSString *launchFrom;
@property (copy, nonatomic) NSString *originEntrance;
@property (nonatomic) long long techType;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *subScene;
@property (copy, nonatomic) NSString *startPage;
@property (copy, nonatomic) NSString *startPagePath;
@property (copy, nonatomic) NSString *startPageQuery;
@property (copy, nonatomic) NSDictionary *startPageQueryDictionary;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSDictionary *queryDictionary;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSDictionary *extraDictionary;
@property (copy, nonatomic) NSString *bdpLog;
@property (copy, nonatomic) NSDictionary *bdpLogDictionary;
@property (copy, nonatomic) NSDictionary *refererInfoDictionary;
@property (copy, nonatomic) NSString *shareTicket;
@property (copy, nonatomic) NSString *adParams;
@property (copy, nonatomic) NSDictionary *adParamsDictionary;
@property (copy, nonatomic) NSString *gdExt;
@property (copy, nonatomic) NSDictionary *gdExtDictionary;
@property (copy, nonatomic) NSString *snapshotCompileVersion;
@property (copy, nonatomic) NSString *sourceMD5;
@property (copy, nonatomic) NSString *timelineServerUrl;
@property (copy, nonatomic) NSString *toolbarStyle;
@property (copy, nonatomic) NSString *IDEServerURL;
@property (copy, nonatomic) NSString *IDEConfig;
@property (copy, nonatomic) NSDictionary *IDEConfigDictionary;
@property (nonatomic) BOOL skipDomainCheck;
@property (nonatomic) long long animationType;
@property (copy, nonatomic) NSString *liveRoomID;
@property (copy, nonatomic) NSString *isSoftAd;
@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *projectID;
@property (copy, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSString *orit;
@property (copy, nonatomic) NSString *rit;
@property (readonly, nonatomic) long long appType;
@property (readonly, nonatomic) long long schemaType;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *iconURL;
@property (readonly, nonatomic) NSString *location;
@property (readonly, nonatomic) NSString *bizLocation;
@property (copy, nonatomic) NSDictionary *schemaCodecTrackInfo;
@property (readonly, copy, nonatomic) NSString *imprID;
@property (readonly, copy, nonatomic) NSString *requestID;
@property (readonly, copy, nonatomic) NSString *liveEnterFromMerge;

+ (long long)animationTypeFromString:(id)arg0;
+ (id)animationStringFromType:(long long)arg0;

- (void)setLaunchFrom:(id)arg0;
- (id)launchFrom;
- (id)roomId;
- (void)setExtra:(id)arg0;
- (id)enterSource;
- (id)subScene;
- (id)rit;
- (id)promotionID;
- (void)setPromotionID:(id)arg0;
- (void)updateLaunchFrom:(id)arg0;
- (id)extraDictionary;
- (id)spuId;
- (id)anchorId;
- (void)setRit:(id)arg0;
- (id)versionType;
- (id)startPagePath;
- (void)setStartPagePath:(id)arg0;
- (long long)minHGVersionCode;
- (id)IDEServerURL;
- (id)dictionaryValueFromExtraForKey:(id)arg0;
- (id)bizLocation;
- (id)orit;
- (id)refererInfoDictionary;
- (id)POIId;
- (id)POIEnterPage;
- (id)detailEnterPage;
- (id)detailEnterMethod;
- (id)originStartPage;
- (id)liveActionType;
- (id)liveEnterMethod;
- (id)isSoftAd;
- (id)imprID;
- (id)liveEnterFromMerge;
- (id)shareTicket;
- (id)timelineServerUrl;
- (long long)techType;
- (id)isAdChannel;
- (void)updateScene:(id)arg0;
- (id)schemaCodecTrackInfo;
- (id)gdExtDictionary;
- (void)publicOnlineValidWithUniqueId:(id)arg0 completion:(id /* block */)arg1;
- (void)validWithCompletion:(id /* block */)arg0;
- (id)originEntrance;
- (id)chatType;
- (id)fromUserID;
- (void)setTtid:(id)arg0;
- (void)setVersionType:(id)arg0;
- (id)ttid;
- (void)updateStartPage:(id)arg0;
- (id)startPageQueryDictionary;
- (id)adParamsForType:(long long)arg0;
- (id)getAppIDString;
- (id)getHostVersionString;
- (void)reportCheckResultWithUniqueId:(id)arg0 reason:(id)arg1 traceResult:(id)arg2;
- (BOOL)publicNativeIsValidSchema;
- (id)groupIdUnified;
- (id)bdpLog;
- (id)bdpLogDictionary;
- (id)adParams;
- (void)updateRefererInfoDictionary:(id)arg0;
- (id)originQueryParams;
- (id)enterPosition;
- (id)ifDou;
- (void)setAdParams:(id)arg0;
- (id)IDEConfigDictionary;
- (id)packagesToken;
- (BOOL)skipDomainCheck;
- (id)fullHost;
- (void)setPackagesToken:(id)arg0;
- (id)startPageQuery;
- (id)snapshotCompileVersion;
- (id)sourceMD5;
- (void)setIDEServerURL:(id)arg0;
- (id)adParamsDictionary;
- (id)liveRoomID;
- (id)stringValueFromExtraForKey:(id)arg0;
- (id)arrayValueFromExtraForKey:(id)arg0;
- (id)schemaRoomID;
- (void)setOriginStartPage:(id)arg0;
- (void)setMinHGVersionCode:(long long)arg0;
- (void)setSkipDomainCheck:(BOOL)arg0;
- (void)setIsSoftAd:(id)arg0;
- (void)setProjectID:(id)arg0;
- (void)setOrit:(id)arg0;
- (void)setBdpLog:(id)arg0;
- (void)setRefererInfoDictionary:(id)arg0;
- (void)setFullHost:(id)arg0;
- (void)setOriginQueryParams:(id)arg0;
- (void)setSubScene:(id)arg0;
- (void)setShareTicket:(id)arg0;
- (void)setGdExt:(id)arg0;
- (void)setIDEConfig:(id)arg0;
- (void)setTechType:(long long)arg0;
- (void)setOriginEntrance:(id)arg0;
- (void)setLiveRoomID:(id)arg0;
- (void)setSchemaCodecTrackInfo:(id)arg0;
- (void)setSnapshotCompileVersion:(id)arg0;
- (void)setSourceMD5:(id)arg0;
- (void)setTimelineServerUrl:(id)arg0;
- (void)setStartPageQuery:(id)arg0;
- (void)setStartPageQueryDictionary:(id)arg0;
- (void)setUrlDictionary:(id)arg0;
- (void)setExtraDictionary:(id)arg0;
- (void)setBdpLogDictionary:(id)arg0;
- (id)gdExt;
- (void)setGdExtDictionary:(id)arg0;
- (id)IDEConfig;
- (void)setIDEConfigDictionary:(id)arg0;
- (void)setAdParamsDictionary:(id)arg0;
- (long long)appType;
- (id)protocol;
- (id)schemaVersion;
- (id)init;
- (void)setMeta:(id)arg0;
- (void)setAppID:(id)arg0;
- (void)setHost:(id)arg0;
- (id)meta;
- (void)setScene:(id)arg0;
- (id)requestID;
- (void).cxx_destruct;
- (id)iconURL;
- (void)setProtocol:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)launchType;
- (void)setUrl:(id)arg0;
- (void)setToken:(id)arg0;
- (void)setAnimationType:(long long)arg0;
- (id)location;
- (id)initWithURL:(id)arg0;
- (id)extra;
- (id)host;
- (id)token;
- (id)appID;
- (id)cid;
- (id)toolbarStyle;
- (void)setError:(id)arg0;
- (id)query;
- (void)setToolbarStyle:(id)arg0;
- (id)description;
- (long long)animationType;
- (void)setSchemaVersion:(id)arg0;
- (void)setQuery:(id)arg0;
- (id)url;
- (id)name;
- (long long)schemaType;
- (id)error;
- (id)scene;
- (id)urlDictionary;
- (id)originURL;
- (void)setOriginURL:(id)arg0;
- (id)startPage;
- (id)gameType;
- (id)queryDictionary;
- (void)setQueryDictionary:(id)arg0;
- (void)setStartPage:(id)arg0;
- (id)projectID;
- (void)setCid:(id)arg0;
- (id)authorId;
- (id)adId;

@end
