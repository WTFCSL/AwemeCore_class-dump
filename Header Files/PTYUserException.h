//
//     Generated by private class-dump
//

@class NSString;

@interface PTYUserException : NSObject <PTYUserExceptionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackAllThreads:(id)arg0 skippedDepth:(int)arg1 params:(id)arg2 filters:(id)arg3;
+ (void)trackCurrentThreads:(id)arg0 skippedDepth:(int)arg1 params:(id)arg2 filters:(id)arg3;
+ (void)setup:(id)arg0;

@end
