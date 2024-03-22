//
//     Generated by private class-dump
//

@class NSString, DIRSContext;

@interface DIRSBDEncPlugin : DIRSBasicModule <IRISModuleGlobal, IRISDataCoder>

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

- (id)requiredHTTPHeaderFields;
- (id)encodedData:(id)arg0 options:(id)arg1 error:(id *)arg2;
- (id)algorithm;

@end