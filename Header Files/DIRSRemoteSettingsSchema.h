//
//     Generated by private class-dump
//

@class NSString, DIRSContext;

@interface DIRSRemoteSettingsSchema : DIRSBasicModule <IRISServiceSchema, IRISModuleGlobal>

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
+ (id)moduleVersion;

- (BOOL)resultWithResponse:(id)arg0;
- (id)responseObjectWithData:(id)arg0;
- (id)HTTPPath;
- (id)HTTPBody:(id)arg0 options:(id)arg1;
- (unsigned long long)serviceType;
- (id)HTTPMethod;

@end
