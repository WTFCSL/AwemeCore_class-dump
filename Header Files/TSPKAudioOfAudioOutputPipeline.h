//
//     Generated by private class-dump
//

@interface TSPKAudioOfAudioOutputPipeline : TSPKDetectPipeline

+ (id)stubbedClass;
+ (BOOL)isEntryDefaultEnable;
+ (id)stubbedCAPIs;
+ (id)forwardEventWithMethodName:(id)arg0 apiUsageType:(unsigned long long)arg1 ci:(struct OpaqueAudioComponentInstance { } *)arg2 status:(int)arg3 isNonsenstive:(BOOL)arg4 isDowngrade:(BOOL)arg5;
+ (id)forwardEventWithMethodName:(id)arg0 apiUsageType:(unsigned long long)arg1 ci:(struct OpaqueAudioComponentInstance { } *)arg2 status:(int)arg3 isNonsenstive:(BOOL)arg4 apiStoreType:(unsigned long long)arg5 isDowngrade:(BOOL)arg6;
+ (unsigned long long)storeType;
+ (void)preload;
+ (id)dataType;
+ (id)pipelineType;

- (BOOL)deferPreload;

@end
