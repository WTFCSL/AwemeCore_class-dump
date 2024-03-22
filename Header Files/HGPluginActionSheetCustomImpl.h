//
//     Generated by private class-dump
//

@class NSString;

@interface HGPluginActionSheetCustomImpl : NSObject <HGActionSheetPluginDelegate> {
    unsigned long long _orientationBackup;
}

@property (nonatomic) unsigned long long orientationBackup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)setSupportOrientation:(unsigned long long)arg0;
- (void)hg_showActionSheetWithModel:(id)arg0 completion:(id /* block */)arg1;
- (unsigned long long)getSupportOrientation;
- (void)setOrientationBackup:(unsigned long long)arg0;
- (unsigned long long)orientationBackup;

@end
