//
//     Generated by private class-dump
//

@protocol AVCapturePhotoCaptureDelegate <NSObject>

@optional

- (void)captureOutput:(id)arg0 didFinishRecordingLivePhotoMovieForEventualFileAtURL:(id)arg1 resolvedSettings:(id)arg2;
- (void)captureOutput:(id)arg0 didCapturePhotoForResolvedSettings:(id)arg1;
- (void)captureOutput:(id)arg0 didFinishProcessingPhoto:(id)arg1 error:(id)arg2;
- (void)captureOutput:(id)arg0 didFinishProcessingLivePhotoToMovieFileAtURL:(id)arg1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg2 photoDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg3 resolvedSettings:(id)arg4 error:(id)arg5;
- (void)captureOutput:(id)arg0 willBeginCaptureForResolvedSettings:(id)arg1;
- (void)captureOutput:(id)arg0 willCapturePhotoForResolvedSettings:(id)arg1;
- (void)captureOutput:(id)arg0 didFinishCaptureForResolvedSettings:(id)arg1 error:(id)arg2;
- (void)captureOutput:(id)arg0 didFinishProcessingPhotoSampleBuffer:(struct opaqueCMSampleBuffer { } *)arg1 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer { } *)arg2 resolvedSettings:(id)arg3 bracketSettings:(id)arg4 error:(id)arg5;
- (void)captureOutput:(id)arg0 didFinishProcessingRawPhotoSampleBuffer:(struct opaqueCMSampleBuffer { } *)arg1 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer { } *)arg2 resolvedSettings:(id)arg3 bracketSettings:(id)arg4 error:(id)arg5;

@end
