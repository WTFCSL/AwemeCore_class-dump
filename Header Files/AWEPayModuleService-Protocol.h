//
//     Generated by private class-dump
//

@protocol AWEPayModuleService <HTSService>

- (void)getCoverInfoWithCoverID:(id)arg0 fromCache:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)getCoverImage:(id)arg0 imageType:(unsigned long long)arg1 size:(struct CGSize { double x0; double x1; })arg2 completion:(id /* block */)arg3;
- (void)getCoverImage:(id)arg0 imageType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)openSendRedPacketWithModel:(id)arg0;
- (id)dinProFontSize:(double)arg0;
- (id)dinProFontSize:(double)arg0 autoScale:(BOOL)arg1;
- (id)getTransferManager;
- (id)getVideoManager;

@end
