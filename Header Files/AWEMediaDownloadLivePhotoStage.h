//
//     Generated by private class-dump
//

@interface AWEMediaDownloadLivePhotoStage : AWEMediaDownloadBaseStage

- (long long)progressUnitCount;
- (void)convertVideoToLivePhoto;
- (void)handleCompleteWithVideoURL:(id)arg0 imageURL:(id)arg1 error:(id)arg2;
- (void)run;
- (BOOL)shouldRun;
- (void)handleProgress:(double)arg0;

@end