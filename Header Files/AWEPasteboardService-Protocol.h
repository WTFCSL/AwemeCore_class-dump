//
//     Generated by private class-dump
//

@protocol AWEPasteboardService <HTSService>

- (void)getPasteboardContentWithCert:(id)arg0 completion:(id /* block */)arg1;
- (void)getPasteboardItemsWithCert:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)canAutoreadPasteboardContent;
- (void)updateCanAutoreadPasteboardContent:(BOOL)arg0;
- (void)requestAutoreadPasteboardContentPermission:(id /* block */)arg0 enterFrom:(id)arg1;
- (void)hintForAutoreadPasteboardPermission:(id /* block */)arg0;
- (void)showAutoreadPasteboardPermissionCard:(id /* block */)arg0;

@end
