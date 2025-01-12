//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPasteboardServiceImplV2 : HTSService <AWEPasteboardService> {
    id /* block */ _hintCompleteBlock;
}

@property (copy, nonatomic) id /* block */ hintCompleteBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getPasteboardContentWithCert:(id)arg0 completion:(id /* block */)arg1;
- (void)getPasteboardItemsWithCert:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)canAutoreadPasteboardContent;
- (void)updateCanAutoreadPasteboardContent:(BOOL)arg0;
- (void)requestAutoreadPasteboardContentPermission:(id /* block */)arg0 enterFrom:(id)arg1;
- (void)hintForAutoreadPasteboardPermission:(id /* block */)arg0;
- (void)showAutoreadPasteboardPermissionCard:(id /* block */)arg0;
- (void)hintForAutoreadPasteboardPermissionFinish:(id)arg0;
- (BOOL)p_canShowPasteboardSettingGuideView;
- (void)setHintCompleteBlock:(id /* block */)arg0;
- (id /* block */)hintCompleteBlock;
- (id)__getStringWithCert:(id)arg0 error:(id *)arg1;
- (id)__getItemsWithCert:(id)arg0 error:(id *)arg1;
- (BOOL)__enableAutoReadPasteboardWithCert:(id)arg0;
- (BOOL)__isCertInAllowList:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
