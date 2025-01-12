//
//     Generated by private class-dump
//

@class UIView;
@protocol ACCStickerContentProtocol;

@interface AWEFeedShareOrderStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler {
    UIView<ACCStickerContentProtocol> *_contentView;
}

@property (weak, nonatomic) UIView<ACCStickerContentProtocol> *contentView;

+ (BOOL)canDisplaySticker:(id)arg0;

- (void)trackEntranceShow;
- (void)displaySticker:(BOOL)arg0;
- (void)jumpToGoodsDetail;
- (void)trackEntranceClick;
- (id)getGoodsPanelParamsFromAweme:(id)arg0;
- (void).cxx_destruct;
- (id)contentView;
- (void)setContentView:(id)arg0;
- (void)handleTapAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)willDisplay;

@end
