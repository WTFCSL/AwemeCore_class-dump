//
//     Generated by private class-dump
//

@protocol ACCMergeVideoHelperProtocol <NSObject>

- (void)useSequenceEditService:(id)arg0;
- (void)fetchAllWithWorkspace:(id)arg0 onProgress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)fetchVideoWithIndex:(long long)arg0 workspace:(id)arg1 onProgress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)cancel;

@end