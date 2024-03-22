//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDMannorAppStoreModel : BDXBridgeModel {
    BOOL _preload;
    BOOL _appStoreEnabled;
    NSString *_appID;
    NSString *_webURL;
    NSString *_openURL;
    NSString *_logExtra;
    NSString *_creativeID;
    NSString *_SKANParams;
    NSString *_downloadURL;
    NSString *_complianceData;
    unsigned long long _downloadScene;
    NSDictionary *_data;
}

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *creativeID;
@property (copy, nonatomic) NSString *SKANParams;
@property (copy, nonatomic) NSString *downloadURL;
@property (copy, nonatomic) NSString *complianceData;
@property (nonatomic) BOOL preload;
@property (nonatomic) BOOL appStoreEnabled;
@property (nonatomic) unsigned long long downloadScene;
@property (copy, nonatomic) NSDictionary *data;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setOpenURL:(id)arg0;
- (id)complianceData;
- (void)setComplianceData:(id)arg0;
- (void)setCreativeID:(id)arg0;
- (void)setAppStoreEnabled:(BOOL)arg0;
- (BOOL)appStoreEnabled;
- (void)setDownloadScene:(unsigned long long)arg0;
- (unsigned long long)downloadScene;
- (id)SKANParams;
- (void)setSKANParams:(id)arg0;
- (void)setAppID:(id)arg0;
- (id)data;
- (void).cxx_destruct;
- (BOOL)preload;
- (id)webURL;
- (void)setData:(id)arg0;
- (void)setWebURL:(id)arg0;
- (id)appID;
- (void)setDownloadURL:(id)arg0;
- (id)downloadURL;
- (id)openURL;
- (id)creativeID;
- (void)setPreload:(BOOL)arg0;

@end