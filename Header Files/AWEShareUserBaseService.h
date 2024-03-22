//
//     Generated by private class-dump
//

@class NSString;

@interface AWEShareUserBaseService : AWEShareCommonImpl <AWEShareUser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPanelWithUser:(id)arg0 configurationHandler:(id /* block */)arg1 onViewController:(id)arg2;
- (id)contextWithUser:(id)arg0;
- (id)profileQRCodeContentViewWithUser:(id)arg0;
- (id)rebrandUserQRCodeImageWithContext:(id)arg0 qrCodeImage:(id)arg1 templateModel:(id)arg2;
- (id)taskWithUser:(id)arg0;
- (id)configurationWithUser:(id)arg0;
- (id)statsShareUserStage;

@end