//
//     Generated by private class-dump
//

@class NSString;

@interface AWEACCImageAlbumEditTransferImpl : NSObject <ACCImageAlbumEditTransferProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)videoEditorWithModel:(id)arg0;
- (void)continueAddedAssets:(id)arg0 selectedAssets:(id)arg1 publishModel:(id)arg2 successBlock:(id /* block */)arg3 failedBlock:(id /* block */)arg4;
- (id)transformLivePhotoVideoEditorWithModel:(id)arg0;

@end
