//
//     Generated by private class-dump
//

@protocol IESLiveOcrModelService <NSObject>

- (void)startCaptrueVideoImage;
- (void)stopCaptrueVideoImage;
- (BOOL)isOcrModelReady;
- (void)downloadOcrModelWithCompletion:(id /* block */)arg0;
- (void)uploadOcrModelData:(id)arg0;

@end
