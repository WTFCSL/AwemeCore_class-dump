//
//     Generated by private class-dump
//

@class NSString;

@interface PIANSRService : NSObject <PIANSRService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeAfterPrepareTask;
+ (void)executePrepareServiceTask;
+ (void)injectBridgeGlobalAPI;

- (id)initService;
- (void)executeNSRWithURL:(id)arg0 configuration:(id)arg1;
- (BOOL)clearNSRContentForURL:(id)arg0;
- (void)clearAllNSRContent;

@end
