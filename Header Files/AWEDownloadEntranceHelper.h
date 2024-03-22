//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDownloadEntranceHelper : NSObject <AWEDownloadEntranceHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isDownloadAllowedWithContext:(id)arg0;
+ (BOOL)checkDownloadPermissionAfterClickedWithContext:(id)arg0;
+ (void)p_recordControlServerDiffWithMessage:(id)arg0;
+ (BOOL)shouldGrayedDownloadItemInSharePanelWithContext:(id)arg0;
+ (BOOL)shouldHideDownloadItemInSharePanelWithContext:(id)arg0;
+ (void)trackDownloadSecurityCheckWithContext:(id)arg0;

@end