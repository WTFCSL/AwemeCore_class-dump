//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveOpenPlatformPreviewDebugLauncher : NSObject <IESLiveOpenPlatformDebugLauncher>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)debugLogEventWithLevel:(id)arg0 log:(id)arg1;
- (void)leaveCurrentDebug;
- (void)startDebugWithDebugSchema:(id)arg0 WithCompletion:(id /* block */)arg1;
- (unsigned long long)pr_validSchemaEnableDebug:(id)arg0;
- (id)pr_calcSumForSchemaString:(id)arg0;

@end
