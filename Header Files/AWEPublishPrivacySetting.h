//
//     Generated by private class-dump
//

@interface AWEPublishPrivacySetting : NSObject

+ (BOOL)shouldShowAlert:(unsigned long long)arg0;
+ (void)showSelfAlertIfNeeded:(unsigned long long)arg0 publishModel:(id)arg1;
+ (BOOL)shouldShowXiguaPrivacySettingsWithPublishModel:(id)arg0;
+ (BOOL)shouldShowXiguaPrivacySettingsWithPublishModel:(id)arg0 checkStartAtlas:(BOOL)arg1;
+ (void)trackChangeXiguaPrivacyWithXiguaPrivacyType:(long long)arg0 awemeModel:(id)arg1 isReedit:(BOOL)arg2 isStarAtlas:(BOOL)arg3 success:(BOOL)arg4;
+ (id)keyWithType:(unsigned long long)arg0;
+ (void)showSelfAlert:(unsigned long long)arg0 publishModel:(id)arg1;

@end
