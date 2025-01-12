//
//     Generated by private class-dump
//

@class AWEInteractiveBubbleView, AWEAwemeModel, UIView, ACCStickerContainerView, AWEFeedStickerBubbleConfig;
@protocol AWEFeedStickerBubbleHelperDelegate;

@interface AWEFeedStickerBubbleHelper : NSObject {
    BOOL _bubbling;
    BOOL _isAnimating;
    UIView *_bubbleContainer;
    AWEAwemeModel *_model;
    ACCStickerContainerView *_stickerContainer;
    id<AWEFeedStickerBubbleHelperDelegate> _delegate;
    AWEInteractiveBubbleView *_bubbleView;
    AWEFeedStickerBubbleConfig *_currentConfig;
}

@property (nonatomic) BOOL bubbling;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) AWEInteractiveBubbleView *bubbleView;
@property (retain, nonatomic) AWEFeedStickerBubbleConfig *currentConfig;
@property (weak, nonatomic) UIView *bubbleContainer;
@property (weak, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) ACCStickerContainerView *stickerContainer;
@property (weak, nonatomic) id<AWEFeedStickerBubbleHelperDelegate> delegate;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })customEdgeInset;
- (id)stickerContainer;
- (void)setStickerContainer:(id)arg0;
- (void)showBubbleAtPoint:(struct CGPoint { double x0; double x1; })arg0 config:(id)arg1;
- (void)dismissBubbleAnimated:(BOOL)arg0;
- (BOOL)bubbling;
- (void)p_buildBubbleView:(struct CGPoint { double x0; double x1; })arg0;
- (void)p_clickOnBubbleView;
- (void)p_setBubbleVisible:(BOOL)arg0 animated:(BOOL)arg1;
- (BOOL)isPointOnBubble:(struct CGPoint { double x0; double x1; })arg0;
- (void)setBubbling:(BOOL)arg0;
- (void)hideBubbleView;
- (BOOL)handleBubbleEventOnPoint:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)isAnimating;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)delegate;
- (id)currentConfig;
- (void)setCurrentConfig:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)setIsAnimating:(BOOL)arg0;
- (id)bubbleView;
- (void)setBubbleView:(id)arg0;
- (id)bubbleContainer;
- (void)setBubbleContainer:(id)arg0;

@end
