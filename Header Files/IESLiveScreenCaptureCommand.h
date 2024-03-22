//
//     Generated by private class-dump
//

@class UIImage, IESLiveShareCaptureWidget, UIView;

@interface IESLiveScreenCaptureCommand : NSObject {
    UIImage *_screenshot;
    UIView *_mediaView;
    IESLiveShareCaptureWidget *_widget;
}

@property (retain, nonatomic) UIView *mediaView;
@property (retain, nonatomic) UIImage *screenshot;
@property (weak, nonatomic) IESLiveShareCaptureWidget *widget;

- (void)saveAlbum;
- (id)initWithCaptureWidget:(id)arg0;
- (id)tryToFindMetalView;
- (BOOL)renderWaterMarkOnScreenshot;
- (id)widget;
- (void).cxx_destruct;
- (BOOL)takeScreenshot;
- (void)setMediaView:(id)arg0;
- (id)mediaView;
- (void)setWidget:(id)arg0;
- (id)screenshot;
- (void)setScreenshot:(id)arg0;

@end
