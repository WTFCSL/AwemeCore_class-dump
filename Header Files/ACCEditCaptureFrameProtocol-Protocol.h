//
//     Generated by private class-dump
//

@protocol ACCEditCaptureFrameProtocol <ACCEditWrapper>

- (void)getProcessedPreviewImageAtTime:(double)arg0 preferredSize:(struct CGSize { double x0; double x1; })arg1 compeletion:(id /* block */)arg2;
- (id)capturePreviewUIImage;
- (void)processImageWithCompleteBlock:(id /* block */)arg0;
- (void)getSourcePreviewImageAtTime:(double)arg0 preferredSize:(struct CGSize { double x0; double x1; })arg1 compeletion:(id /* block */)arg2;
- (void)getProcessedPreviewImageAtTime:(double)arg0 seekToTime:(BOOL)arg1 preferredSize:(struct CGSize { double x0; double x1; })arg2 compeletion:(id /* block */)arg3;
- (void)getProcessedPreviewImageAtIndex:(long long)arg0 preferredSize:(struct CGSize { double x0; double x1; })arg1 compeletion:(id /* block */)arg2;
- (void)getSourcePreviewImageAtIndex:(long long)arg0 preferredSize:(struct CGSize { double x0; double x1; })arg1 compeletion:(id /* block */)arg2;
- (void)beginImageAlbumPreviewTaskExportItemRetainAndReuse;
- (void)endImageAlbumPreviewTaskExportItemRetainAndReuse;
- (void)getSourcePreviewImageAtTime:(double)arg0 seekToTime:(BOOL)arg1 preferredSize:(struct CGSize { double x0; double x1; })arg2 compeletion:(id /* block */)arg3;

@optional

- (void)getPreviewImages:(id)arg0 preferredSize:(struct CGSize { double x0; double x1; })arg1 withEffect:(BOOL)arg2 compeletion:(id /* block */)arg3;
- (BOOL)isNLEInited;

@end