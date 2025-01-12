//
//     Generated by private class-dump
//

@class NSMutableDictionary;
@protocol BDSCUIDefaultConfigProtocol, BDSCAppConfigProtocol;

@interface BDSCLocalConfigManager : NSObject {
    unsigned long long _uiConfigType;
    id<BDSCUIDefaultConfigProtocol> _uiConfig;
    id<BDSCAppConfigProtocol> _appConfig;
    NSMutableDictionary *_configDict;
}

@property (retain, nonatomic) NSMutableDictionary *configDict;
@property (nonatomic) unsigned long long uiConfigType;
@property (retain, nonatomic) id<BDSCUIDefaultConfigProtocol> uiConfig;
@property (retain, nonatomic) id<BDSCAppConfigProtocol> appConfig;

+ (id)defaultManager;

- (id)uiConfig;
- (void)setAppConfig:(id)arg0;
- (void)setUiConfig:(id)arg0;
- (void)setUiConfigType:(unsigned long long)arg0;
- (unsigned long long)uiConfigType;
- (id)init;
- (void).cxx_destruct;
- (id)configDict;
- (void)setConfigDict:(id)arg0;
- (id)appConfig;

@end
