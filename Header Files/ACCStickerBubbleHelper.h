//
//     Generated by private class-dump
//

@class NSArray, NSString, ACCBaseStickerView, AWEEditStickerBubbleManager;

@interface ACCStickerBubbleHelper : NSObject <ACCStickerBubbleProtocol> {
    BOOL _isShowingBubble;
    BOOL _isAuto;
    double _bubbleStartTime;
    id /* block */ _didClickItemCompletionWhenShowAutomatically;
    ACCBaseStickerView *_stickerView;
    NSArray *_bubbleActionList;
    NSArray *_bubbleItems;
    AWEEditStickerBubbleManager *_bubble;
}

@property (weak, nonatomic) ACCBaseStickerView *stickerView;
@property (retain, nonatomic) NSArray *bubbleActionList;
@property (retain, nonatomic) NSArray *bubbleItems;
@property (retain, nonatomic) AWEEditStickerBubbleManager *bubble;
@property (nonatomic) BOOL isAuto;
@property (nonatomic) BOOL isShowingBubble;
@property (nonatomic) double bubbleStartTime;
@property (copy, nonatomic) id /* block */ didClickItemCompletionWhenShowAutomatically;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isShowingBubble;
- (void)setIsShowingBubble:(BOOL)arg0;
- (id)bubbleItems;
- (void)setBubbleItems:(id)arg0;
- (id)bubbleActionList;
- (void)_showBubbleMenuAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)handleContentWhenBubbleChanged:(BOOL)arg0;
- (void)_showBubbleMenuAtPoint:(struct CGPoint { double x0; double x1; })arg0 autoDismiss:(BOOL)arg1;
- (void)hideBubbleMenu:(BOOL)arg0;
- (double)bubbleStartTime;
- (id)bubbleItemWithDYConfig:(id)arg0;
- (id)editBubbleItemWithCallback:(id /* block */)arg0;
- (id)selectTimeBubbleItemWithCallback:(id /* block */)arg0;
- (id)pinBubbleItemWithCallback:(id /* block */)arg0;
- (id)editAutoCaptionsBubbleItemWithCallback:(id /* block */)arg0;
- (id)deleteBubbleItemWithCallback:(id /* block */)arg0;
- (id)textReadBubbleItemWithCallback:(id /* block */)arg0;
- (id)textReadCancelBubbleItemWithCallback:(id /* block */)arg0;
- (id /* block */)didClickItemCompletionWhenShowAutomatically;
- (id)initWithWeakReferenceOfStickerView:(id)arg0 bubbleActionList:(id)arg1;
- (void)showBubbleAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)updateBubbleWithTag:(id)arg0 title:(id)arg1 image:(id)arg2;
- (void)updateBubbleActionListIfNeeded:(id)arg0;
- (void)onStickerGeometryChanged;
- (void)showBubbleAtPointAutomatically:(struct CGPoint { double x0; double x1; })arg0 lastTime:(double)arg1 autoDismissCompletion:(id /* block */)arg2;
- (BOOL)shouldBubbleDismiss;
- (void)setBubbleStartTime:(double)arg0;
- (void)setDidClickItemCompletionWhenShowAutomatically:(id /* block */)arg0;
- (void)setBubbleActionList:(id)arg0;
- (void).cxx_destruct;
- (id)bubble;
- (void)setBubble:(id)arg0;
- (id)stickerView;
- (void)setStickerView:(id)arg0;
- (BOOL)isAuto;
- (void)setIsAuto:(BOOL)arg0;
- (void)hideAnimated:(BOOL)arg0;
- (void)doDismiss;

@end
