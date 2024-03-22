//
//     Generated by private class-dump
//

@class UIView;
@protocol ACCStickerContentProtocol;

@interface AWEFeedPOIStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler {
    UIView<ACCStickerContentProtocol> *_contentView;
}

@property (weak, nonatomic) UIView<ACCStickerContentProtocol> *contentView;

+ (BOOL)canDisplaySticker:(id)arg0;

- (void)displaySticker:(BOOL)arg0;
- (void)jumpToPOIPage;
- (void)poiTrackerPropClick;
- (void)trackForPOIStickerClicked;
- (id)getPropParams;
- (void).cxx_destruct;
- (id)contentView;
- (void)setContentView:(id)arg0;
- (void)handleTapAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)willDisplay;

@end
