//
//     Generated by private class-dump
//

@class NSString;

@interface IESECShareServiceImpl : NSObject <IESECShareService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)saveImageToAlbum:(id)arg0 completion:(id /* block */)arg1;
+ (void)fetchQRCodeImageWithType:(unsigned long long)arg0 itemID:(id)arg1 extraInfo:(id)arg2 useRebrandStyle:(BOOL)arg3 activityInfo:(id)arg4 shareScene:(id)arg5 completion:(id /* block */)arg6;
+ (void)openSharePanelToShareImage:(id)arg0;
+ (void)fetchTranspondFirstPersonHeadImage:(id /* block */)arg0;
+ (void)openSharePanelToShareImage:(id)arg0 params:(id)arg1;
+ (void)appJumpWithOpenUrl:(id)arg0;

@end