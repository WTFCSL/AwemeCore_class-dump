//
//     Generated by private class-dump
//

@class NSString;
@protocol TTVideoEngineNetClient;

@interface TTVideoEngineSettings : NSObject {
    BOOL _enable;
    BOOL _debug;
    id<TTVideoEngineNetClient> _netClient;
    NSString *_usEast;
    NSString *_sgSingapore;
    NSString *_cnNorth;
    NSString *_playerVersion;
    NSString *_mdlVersion;
    NSString *_strategyVersion;
    NSString *_settingsVersion;
    NSString *_engineVersion;
}

@property (copy, nonatomic) NSString *playerVersion;
@property (copy, nonatomic) NSString *mdlVersion;
@property (copy, nonatomic) NSString *strategyVersion;
@property (copy, nonatomic) NSString *settingsVersion;
@property (copy, nonatomic) NSString *engineVersion;
@property (nonatomic) BOOL debug;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) id<TTVideoEngineNetClient> netClient;
@property (copy, nonatomic) NSString *usEast;
@property (copy, nonatomic) NSString *sgSingapore;
@property (copy, nonatomic) NSString *cnNorth;

+ (id)settings;
+ (id)manager;

- (void)setNetClient:(id)arg0;
- (id)playerVersion;
- (id)netClient;
- (id /* block */)setDebug;
- (id)getVodNumber:(id)arg0 dValue:(id)arg1;
- (id)getVodDict:(id)arg0;
- (void)setUsEast:(id)arg0;
- (void)setSgSingapore:(id)arg0;
- (void)setCnNorth:(id)arg0;
- (id)engineVersion;
- (id)mdlVersion;
- (id)strategyVersion;
- (id /* block */)setEnable;
- (id /* block */)setNetClient;
- (id /* block */)setUSEast;
- (id /* block */)setSGSingapore;
- (id /* block */)setCNNorth;
- (void)start:(id)arg0 queries:(id)arg1 result:(id /* block */)arg2;
- (id)usEast;
- (id)sgSingapore;
- (id)cnNorth;
- (void)setPlayerVersion:(id)arg0;
- (void)setMdlVersion:(id)arg0;
- (void)setStrategyVersion:(id)arg0;
- (void)setEngineVersion:(id)arg0;
- (id)getVodString:(id)arg0 dValue:(id)arg1;
- (id)getVodArray:(id)arg0 dValue:(id)arg1;
- (id)getMDLNumber:(id)arg0 dValue:(id)arg1;
- (id)getMDLString:(id)arg0 dValue:(id)arg1;
- (id)getMDLDict:(id)arg0;
- (id)getMDLArray:(id)arg0 dValue:(id)arg1;
- (id)getJson:(long long)arg0;
- (BOOL)enable;
- (id)init;
- (void).cxx_destruct;
- (id /* block */)config;
- (id /* block */)load;
- (BOOL)debug;
- (void)setDebug:(BOOL)arg0;
- (void)cancel;
- (void)setEnable:(BOOL)arg0;
- (id)settingsVersion;
- (void)setSettingsVersion:(id)arg0;

@end
