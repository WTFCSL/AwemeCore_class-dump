//
//     Generated by private class-dump
//

@class NSString, NSDictionary, ACCNLEImageTemplateGestureProvider, UIView;
@protocol ACCStickerContainerProtocol, ACCStickerEventFlowProtocol;

@interface ACCImageTemplateDeSelectPlugin : NSObject <ACCStickerGestureResponsiblePluginProtocol> {
    UIView<ACCStickerContainerProtocol, ACCStickerEventFlowProtocol> *stickerContainer;
    NSDictionary *_commonTrackParams;
    ACCNLEImageTemplateGestureProvider *_gestureProvider;
    UIView *_handlingStickerView;
    struct CGPoint { double x; double y; } _lastCenter;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _lastTransform;
}

@property (weak, nonatomic) UIView *handlingStickerView;
@property (nonatomic) struct CGPoint { double x; double y; } lastCenter;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } lastTransform;
@property (retain, nonatomic) NSDictionary *commonTrackParams;
@property (retain, nonatomic) ACCNLEImageTemplateGestureProvider *gestureProvider;
@property (weak, nonatomic) UIView<ACCStickerContainerProtocol, ACCStickerEventFlowProtocol> *stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createPlugin;

- (struct CGPoint { double x0; double x1; })lastCenter;
- (void)setLastCenter:(struct CGPoint { double x0; double x1; })arg0;
- (id)commonTrackParams;
- (void)setCommonTrackParams:(id)arg0;
- (id)stickerContainer;
- (void)setStickerContainer:(id)arg0;
- (BOOL)featureSupportSticker:(id)arg0;
- (id)gestureProvider;
- (void)setHandlingStickerView:(id)arg0;
- (void)playerFrameChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)sticker:(id)arg0 willHandleGesture:(id)arg1;
- (void)sticker:(id)arg0 didEndGesture:(id)arg1;
- (void)setGestureProvider:(id)arg0;
- (id)handlingStickerView;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })lastTransform;
- (void)setLastTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0;
- (void)loadPlugin;
- (void).cxx_destruct;

@end
