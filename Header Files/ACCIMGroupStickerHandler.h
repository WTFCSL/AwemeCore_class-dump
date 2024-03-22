//
//     Generated by private class-dump
//

@class AWEInteractionIMGroupStickerModel, ACCIMGroupStickerView, UIView;
@protocol ACCIMGroupStickerHandlerDelegate, ACCStickerProtocol;

@interface ACCIMGroupStickerHandler : ACCStickerHandler {
    id<ACCIMGroupStickerHandlerDelegate> _delegate;
    AWEInteractionIMGroupStickerModel *_currentStickerModel;
    unsigned long long _page;
    ACCIMGroupStickerView *_stickerView;
    UIView<ACCStickerProtocol> *_wrapperView;
}

@property (readonly, nonatomic) unsigned long long page;
@property (retain, nonatomic) AWEInteractionIMGroupStickerModel *currentStickerModel;
@property (weak, nonatomic) ACCIMGroupStickerView *stickerView;
@property (weak, nonatomic) UIView<ACCStickerProtocol> *wrapperView;
@property (weak, nonatomic) id<ACCIMGroupStickerHandlerDelegate> delegate;

- (void)addInteractionStickerInfoToArray:(id)arg0 idx:(long long)arg1;
- (BOOL)canRecoverSticker:(id)arg0;
- (void)recoverSticker:(id)arg0;
- (id)currentStickerModel;
- (id)updateStickerWithModel:(id)arg0;
- (id)addStickerWithModel:(id)arg0;
- (id)p_addStickerWithModel:(id)arg0 isRecover:(BOOL)arg1;
- (void)setCurrentStickerModel:(id)arg0;
- (id)p_createStickerViewWithModel:(id)arg0;
- (id)p_createStickerConfigWithModel:(id)arg0;
- (void)p_updateWrapperView;
- (struct CGPoint { double x0; double x1; })p_autoAddPoint;
- (void)didTapSticker;
- (BOOL)p_enableOptimizedRatioMask;
- (void)p_adjustScaleIfNeedWithWrapperView:(id)arg0;
- (void)p_adjustPositionIfNeedWithWrapperView:(id)arg0;
- (void)p_addInteractionStickerInfoWith:(id)arg0 toArray:(id)arg1 idx:(long long)arg2;
- (unsigned long long)page;
- (void).cxx_destruct;
- (id)delegate;
- (id)wrapperView;
- (void)setDelegate:(id)arg0;
- (id)initWithPage:(unsigned long long)arg0;
- (id)stickerView;
- (void)setStickerView:(id)arg0;
- (void)setWrapperView:(id)arg0;

@end