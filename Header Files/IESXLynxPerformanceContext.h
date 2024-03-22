//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary, UIView;

@interface IESXLynxPerformanceContext : NSObject {
    BOOL _isContainerReuse;
    UIView *_lynxView;
    NSString *_currentNativeVC;
    NSString *_navigationID;
    NSString *_url;
    NSString *_containerType;
    NSString *_cardVersion;
    NSArray *_contextBlockList;
    NSArray *_containerUUIDList;
    NSDictionary *_jsBase;
    NSString *_virtualAid;
    long long _attachTS;
    long long _detachTS;
    long long _bdlm_loadState;
    long long _stage;
    long long _jsExceptionCount;
    long long _nativeErrorCount;
    long long _resLoaderErrorCount;
    long long _resLoaderErrorTemplateCount;
    long long _staticCount;
    long long _fetchErrorCount;
    long long _jsbErrorCount;
}

@property (weak) UIView *lynxView;
@property (copy) NSString *currentNativeVC;
@property (copy) NSString *navigationID;
@property (copy) NSString *url;
@property (copy) NSString *containerType;
@property (copy) NSString *cardVersion;
@property (retain) NSArray *contextBlockList;
@property (retain) NSArray *containerUUIDList;
@property (retain) NSDictionary *jsBase;
@property (copy) NSString *virtualAid;
@property (nonatomic) BOOL isContainerReuse;
@property (nonatomic) long long attachTS;
@property (nonatomic) long long detachTS;
@property (nonatomic) long long bdlm_loadState;
@property (nonatomic) long long stage;
@property (nonatomic) long long jsExceptionCount;
@property (nonatomic) long long nativeErrorCount;
@property (nonatomic) long long resLoaderErrorCount;
@property (nonatomic) long long resLoaderErrorTemplateCount;
@property (nonatomic) long long staticCount;
@property (nonatomic) long long fetchErrorCount;
@property (nonatomic) long long jsbErrorCount;

- (id)lynxView;
- (void)setLynxView:(id)arg0;
- (void)setVirtualAid:(id)arg0;
- (id)virtualAid;
- (id)cardVersion;
- (id)containerUUIDList;
- (void)setNavigationID:(id)arg0;
- (id)contextBlockList;
- (void)setContextBlockList:(id)arg0;
- (void)setContainerUUIDList:(id)arg0;
- (id)fetchCurrentAttachVCName;
- (id)fetchCustomBaseContext:(id)arg0;
- (id)currentNativeVC;
- (void)setCurrentNativeVC:(id)arg0;
- (long long)jsExceptionCount;
- (long long)nativeErrorCount;
- (long long)resLoaderErrorCount;
- (long long)resLoaderErrorTemplateCount;
- (long long)jsbErrorCount;
- (void)setJsExceptionCount:(long long)arg0;
- (void)setNativeErrorCount:(long long)arg0;
- (void)setResLoaderErrorCount:(long long)arg0;
- (void)setResLoaderErrorTemplateCount:(long long)arg0;
- (void)setJsbErrorCount:(long long)arg0;
- (long long)bdlm_loadState;
- (void)setJsBase:(id)arg0;
- (long long)attachTS;
- (void)setBdlm_loadState:(long long)arg0;
- (id)jsBase;
- (id)navigationID;
- (BOOL)isContainerReuse;
- (long long)detachTS;
- (void)setCardVersion:(id)arg0;
- (void)setIsContainerReuse:(BOOL)arg0;
- (void)setAttachTS:(long long)arg0;
- (id)toNativeBase;
- (void)setDetachTS:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (long long)stage;
- (void)dealloc;
- (id)url;
- (void)setStage:(long long)arg0;
- (id)containerType;
- (void)setContainerType:(id)arg0;
- (long long)fetchErrorCount;
- (void)setFetchErrorCount:(long long)arg0;
- (long long)staticCount;
- (void)setStaticCount:(long long)arg0;

@end