//
//     Generated by private class-dump
//

@protocol HTSLiveStreamPictureExtensionDelegate;

@protocol HTSLiveStreamPictureExtensionProvider <HTSLiveStreamPictureFaceDetectAlongAnimationProvider>

@property (weak, nonatomic) id<HTSLiveStreamPictureExtensionDelegate> delegate;

- (void)loadEnvironmentWhenLiveComponentLoaded;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end