//
//     Generated by private class-dump
//

@class UIView;
@protocol ACCStickerContentProtocol;

@interface AWEFeedIMGroupStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler {
    BOOL _disableTap;
    UIView<ACCStickerContentProtocol> *_contentView;
}

@property (nonatomic) BOOL disableTap;
@property (weak, nonatomic) UIView<ACCStickerContentProtocol> *contentView;

+ (BOOL)canDisplaySticker:(id)arg0;

- (void)setDisableTap:(BOOL)arg0;
- (BOOL)disableTap;
- (id)p_commonParams;
- (BOOL)canHandleTapAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)displaySticker:(BOOL)arg0;
- (BOOL)displayByNative;
- (void)p_showTracker;
- (id)p_enableForFrequencyControl;
- (id)p_enableForLogin;
- (id)p_enableForTeenMode;
- (id)p_transferToJonGroupPage;
- (void)p_clickTracker;
- (id)p_handleError:(id)arg0;
- (id)p_enableForBasicMode;
- (void).cxx_destruct;
- (id)contentView;
- (void)setContentView:(id)arg0;
- (void)handleTapAtPoint:(struct CGPoint { double x0; double x1; })arg0;

@end
