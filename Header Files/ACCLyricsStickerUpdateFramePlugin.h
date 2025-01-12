//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol ACCEditStickerProtocol, ACCStickerContainerProtocol, ACCStickerEventFlowProtocol;

@interface ACCLyricsStickerUpdateFramePlugin : NSObject <ACCStickerOverAheadGesturePluginProtocol> {
    UIView<ACCStickerContainerProtocol, ACCStickerEventFlowProtocol> *_stickerContainer;
    id<ACCEditStickerProtocol> _editStickerService;
}

@property (retain, nonatomic) id<ACCEditStickerProtocol> editStickerService;
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
- (void)setEditStickerService:(id)arg0;
- (id)editStickerService;
- (void)stickerContainer:(id)arg0 beforeRecognizerGesture:(id)arg1;
- (void)loadPlugin;
- (void).cxx_destruct;

@end
