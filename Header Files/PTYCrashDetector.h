//
//     Generated by private class-dump
//

@class NSString;

@interface PTYCrashDetector : NSObject <PTYCrashContextProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCrashCallBack;
+ (void)addTag:(id)arg0 forKey:(id)arg1;
+ (void)removeTagForKey:(id)arg0;
+ (void)setup:(id)arg0;

@end
