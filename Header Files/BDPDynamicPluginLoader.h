//
//     Generated by private class-dump
//

@class NSString, BDPODRXFileBasicModel;

@interface BDPDynamicPluginLoader : BDPODRXLoader {
    BOOL _isIndsrty;
    NSString *_pluginID;
    long long _sourceType;
    NSString *_version;
    BDPODRXFileBasicModel *_pluginBasic;
}

@property (retain, nonatomic) BDPODRXFileBasicModel *pluginBasic;
@property (copy, nonatomic) NSString *pluginID;
@property (nonatomic) long long sourceType;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) BOOL isIndsrty;

+ (id)emptyPluginLoader;
+ (id)pluginLoaderWithPath:(id)arg0 pluginModel:(id)arg1;

- (id)basic;
- (long long)loadStatusForPagePath:(id)arg0;
- (void)fileHandleDidLoadFromCache;
- (void)updatePluginPath:(id)arg0 pluginModel:(id)arg1;
- (void)setPluginBasic:(id)arg0;
- (id)pluginBasic;
- (BOOL)isEmptyPluginLoader;
- (BOOL)isIndsrty;
- (void)setIsIndsrty:(BOOL)arg0;
- (void)setSourceType:(long long)arg0;
- (long long)sourceType;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (id)version;
- (id)pluginID;
- (void)setPluginID:(id)arg0;

@end
