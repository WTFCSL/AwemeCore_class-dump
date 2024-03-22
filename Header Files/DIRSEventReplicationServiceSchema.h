//
//     Generated by private class-dump
//

@class DIRSValue, NSString, DIRSContext;

@interface DIRSEventReplicationServiceSchema : DIRSEventRequestSchema <IRISModule, IRISModuleGlobal, IRISServiceSchema, IRISConfigurationHandler> {
    DIRSValue *_config;
}

@property (retain, nonatomic) DIRSValue *config;
@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (id)sharedInstance;
+ (BOOL)isPlugin;
+ (id)moduleVersion;

- (BOOL)resultWithResponse:(id)arg0;
- (id)responseObjectWithData:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;

@end