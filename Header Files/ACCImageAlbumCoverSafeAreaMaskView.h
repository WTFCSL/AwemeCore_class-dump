//
//     Generated by private class-dump
//

@class CALayer, NSString, UIView;
@protocol ACCStickerContainerProtocol, ACCStickerEventFlowProtocol;

@interface ACCImageAlbumCoverSafeAreaMaskView : UIView <ACCStickerGestureResponsiblePluginProtocol> {
    UIView<ACCStickerContainerProtocol, ACCStickerEventFlowProtocol> *_stickerContainer;
    CALayer *_maskLayer1;
    CALayer *_maskLeyer2;
    struct CGSize { double width; double height; } _aspectRatio;
    struct CGSize { double width; double height; } _contentSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentFrame;
}

@property (retain, nonatomic) CALayer *maskLayer1;
@property (retain, nonatomic) CALayer *maskLeyer2;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (nonatomic) struct CGSize { double width; double height; } aspectRatio;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (weak, nonatomic) UIView<ACCStickerContainerProtocol, ACCStickerEventFlowProtocol> *stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createPlugin;

- (id)stickerContainer;
- (void)setStickerContainer:(id)arg0;
- (BOOL)featureSupportSticker:(id)arg0;
- (void)playerFrameChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)didChangeLocationWithOperationStickerView:(id)arg0;
- (void)sticker:(id)arg0 willHandleGesture:(id)arg1;
- (void)sticker:(id)arg0 didHandleGesture:(id)arg1;
- (void)sticker:(id)arg0 didEndGesture:(id)arg1;
- (id)maskLayer1;
- (id)maskLeyer2;
- (void)setMaskLayer1:(id)arg0;
- (void)setMaskLeyer2:(id)arg0;
- (void)updateMaskViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })safeRect;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setAspectRatio:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })contentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrame;
- (void)loadPlugin;
- (void).cxx_destruct;
- (void)setContentSize:(struct CGSize { double x0; double x1; })arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGSize { double x0; double x1; })aspectRatio;
- (id)pluginView;

@end
