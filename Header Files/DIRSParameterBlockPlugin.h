//
//     Generated by private class-dump
//

@class NSString, DIRSContext;

@interface DIRSParameterBlockPlugin : DIRSBasicModule <IRISEventPreProcedureHandler, IRISParameterHandler>

@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (long long)priority;
+ (id)moduleVersion;

- (id)supportedParameterKeys;
- (id)exportParameters:(id)arg0;
- (BOOL)prehandleProcedure:(id)arg0 withError:(id *)arg1;
- (id)blockParameters;
- (void)commonInit;

@end
