//
//     Generated by private class-dump
//

@class ACCStickerContainerView, UIView;
@protocol ACCEditPreviewProtocol, ACCEditTransitionServiceProtocol, ACCStickerSelectTimeVCDelegate, ACCSequenceEditServiceProtocol, ACCStickerProtocol, ACCStickerPlayerApplying, ACCEditServiceProtocol;

@interface ACCEditStickerSelectTimeInputData : NSObject {
    id<ACCEditTransitionServiceProtocol> _transitionService;
    id<ACCStickerSelectTimeVCDelegate> _delegate;
    id<ACCStickerPlayerApplying> _player;
    UIView<ACCStickerProtocol> *_stickerView;
    ACCStickerContainerView *_stickerContainer;
    id<ACCEditServiceProtocol> _editService;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    id<ACCEditPreviewProtocol> _previewService;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _playerRect;
}

@property (weak, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (weak, nonatomic) id<ACCStickerSelectTimeVCDelegate> delegate;
@property (retain, nonatomic) id<ACCStickerPlayerApplying> player;
@property (retain, nonatomic) UIView<ACCStickerProtocol> *stickerView;
@property (retain, nonatomic) ACCStickerContainerView *stickerContainer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playerRect;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) id<ACCEditPreviewProtocol> previewService;

- (id)transitionService;
- (void)setTransitionService:(id)arg0;
- (id)editService;
- (void)setEditService:(id)arg0;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (id)stickerContainer;
- (void)setStickerContainer:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerRect;
- (void)setPreviewService:(id)arg0;
- (id)previewService;
- (void)setPlayerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void).cxx_destruct;
- (void)setPlayer:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)player;
- (id)stickerView;
- (void)setStickerView:(id)arg0;

@end
