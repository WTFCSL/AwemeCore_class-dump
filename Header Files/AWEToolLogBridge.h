//
//     Generated by private class-dump
//

@class NSString;

@interface AWEToolLogBridge : NSObject <IESEditorLoggerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)build;

- (void)IESEditorlogToLocal:(id)arg0 andLevel:(long long)arg1;

@end
