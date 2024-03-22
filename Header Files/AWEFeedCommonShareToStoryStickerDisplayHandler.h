//
//     Generated by private class-dump
//

@class UIView;
@protocol ACCStickerContentProtocol;

@interface AWEFeedCommonShareToStoryStickerDisplayHandler : AWEFeedBasicStickerDisplayHandler {
    BOOL _isInPureModePage;
    BOOL _hasFetched;
    UIView<ACCStickerContentProtocol> *_contentView;
}

@property (weak, nonatomic) UIView<ACCStickerContentProtocol> *contentView;
@property (nonatomic) BOOL isInPureModePage;
@property (nonatomic) BOOL hasFetched;

+ (BOOL)canDisplaySticker:(id)arg0;

- (BOOL)isInPureModePage;
- (void)setHasFetched:(BOOL)arg0;
- (void)displaySticker:(BOOL)arg0;
- (BOOL)canResponseEvent;
- (void)handleOpenPlatformTapAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (id)addDefaultValuesForInfo:(id)arg0;
- (BOOL)isShareCommentToStoryScene:(id)arg0;
- (void)showBubbleAtPointer:(struct CGPoint { double x0; double x1; })arg0 config:(id)arg1 popText:(id)arg2;
- (void)updateInteractionStickerOpenPlatformModelWithCompletion:(id /* block */)arg0;
- (void)jumpToVideoSharePage;
- (void)handleOpenPlatformJump;
- (void)setIsInPureModePage:(BOOL)arg0;
- (void).cxx_destruct;
- (id)contentView;
- (void)setContentView:(id)arg0;
- (void)handleTapAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)hasFetched;

@end