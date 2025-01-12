//
//     Generated by private class-dump
//

@class NSString, NLEInterface_OC;

@interface ACCNLEEditCaptureFrameWrapper : NSObject <ACCEditBuildListener, ACCEditCaptureFrameProtocol> {
    NLEInterface_OC *_nle;
}

@property (weak, nonatomic) NLEInterface_OC *nle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getProcessedPreviewImageAtTime:(double)arg0 preferredSize:(struct CGSize { double x0; double x1; })arg1 compeletion:(id /* block */)arg2;
- (id)nle;
- (void)setNle:(id)arg0;
- (id)capturePreviewUIImage;
- (void)processImageWithCompleteBlock:(id /* block */)arg0;
- (void)getSourcePreviewImageAtTime:(double)arg0 preferredSize:(struct CGSize { double x0; double x1; })arg1 compeletion:(id /* block */)arg2;
- (void)setEditSessionProvider:(id)arg0;
- (void)getProcessedPreviewImageAtTime:(double)arg0 seekToTime:(BOOL)arg1 preferredSize:(struct CGSize { double x0; double x1; })arg2 compeletion:(id /* block */)arg3;
- (void)getPreviewImages:(id)arg0 preferredSize:(struct CGSize { double x0; double x1; })arg1 withEffect:(BOOL)arg2 compeletion:(id /* block */)arg3;
- (void)getProcessedPreviewImageAtIndex:(long long)arg0 preferredSize:(struct CGSize { double x0; double x1; })arg1 compeletion:(id /* block */)arg2;
- (void)getSourcePreviewImageAtIndex:(long long)arg0 preferredSize:(struct CGSize { double x0; double x1; })arg1 compeletion:(id /* block */)arg2;
- (BOOL)isNLEInited;
- (void)beginImageAlbumPreviewTaskExportItemRetainAndReuse;
- (void)endImageAlbumPreviewTaskExportItemRetainAndReuse;
- (void)onEditSessionInit:(id)arg0;
- (void)onNLEEditorInit:(id)arg0;
- (void)getSourcePreviewImageAtTime:(double)arg0 seekToTime:(BOOL)arg1 preferredSize:(struct CGSize { double x0; double x1; })arg2 compeletion:(id /* block */)arg3;
- (void).cxx_destruct;

@end
