//
//     Generated by private class-dump
//

@protocol ACCRecorderEvent <NSObject>

@optional

- (void)onFinishExportVideoDataWithData:(id)arg0 error:(id)arg1;
- (void)onRecorderStateDidChange:(unsigned long long)arg0 preState:(unsigned long long)arg1;
- (void)onCaptureStillImageWithImage:(id)arg0 error:(id)arg1;
- (void)onStartExportVideoDataWithData:(id)arg0;
- (void)onWillStartVideoRecordWithRate:(double)arg0;
- (void)onWillPauseVideoRecordWithData:(id)arg0;

@end
