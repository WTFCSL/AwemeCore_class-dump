//
//     Generated by private class-dump
//

@class NSTimer, NSString, UITapGestureRecognizer, BDPUniqueID, CAShapeLayer, UIButton, BDPBubbleTipModel, BDPTimingEvent, UILabel;
@protocol BDPBubbleTipDelegate;

@interface BDPBubbleTip : UIView <CAAnimationDelegate> {
    BOOL _isBubbleShown;
    id<BDPBubbleTipDelegate> _delegate;
    BDPBubbleTipModel *_tipModel;
    BDPUniqueID *_uniqueID;
    id /* block */ _bubbleShowCompletion;
    id /* block */ _bubbleHideCompletion;
    CAShapeLayer *_borderLayer;
    UILabel *_tipLabel;
    UITapGestureRecognizer *_tapGesture;
    UITapGestureRecognizer *_defaultTapGesture;
    UIButton *_closeButton;
    NSTimer *_hideTimer;
    NSTimer *_showTimer;
    BDPTimingEvent *_trackerTiming;
    id /* block */ _performShowAnimationBlock;
    id /* block */ _performHideAnimationBlock;
}

@property (retain, nonatomic) BDPBubbleTipModel *tipModel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UITapGestureRecognizer *defaultTapGesture;
@property (copy, nonatomic) id /* block */ performShowAnimationBlock;
@property (copy, nonatomic) id /* block */ performHideAnimationBlock;
@property (weak, nonatomic) id<BDPBubbleTipDelegate> delegate;
@property (copy, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL isBubbleShown;
@property (copy, nonatomic) id /* block */ bubbleShowCompletion;
@property (copy, nonatomic) id /* block */ bubbleHideCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setUpModelWithDefaultValue:(id)arg0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caculateFrameWithTipModel:(id)arg0;

- (void)showOnView:(id)arg0;
- (void)closeBtnClicked:(id)arg0;
- (void)layoutBubbleWithOrigin:(struct CGPoint { double x0; double x1; })arg0 reverseOffsetX:(double)arg1;
- (void)tapGestureAction:(id)arg0;
- (void)setPerformShowAnimationBlock:(id /* block */)arg0;
- (id /* block */)performShowAnimationBlock;
- (id)defaultTapGesture;
- (void)setDefaultTapGesture:(id)arg0;
- (void)setupAnimation;
- (id /* block */)performHideAnimationBlock;
- (void)setPerformHideAnimationBlock:(id /* block */)arg0;
- (id)tipModel;
- (void)setTipModel:(id)arg0;
- (void)setBubbleShowCompletion:(id /* block */)arg0;
- (id /* block */)bubbleShowCompletion;
- (void)setIsBubbleShown:(BOOL)arg0;
- (id /* block */)bubbleHideCompletion;
- (id)initWithDelegate:(id)arg0 tipModel:(id)arg1;
- (void)hideWithUser;
- (void)hideWithCP;
- (void)addGestureRecognizerToLabel:(id)arg0;
- (BOOL)isBubbleShown;
- (void)setBubbleHideCompletion:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setUniqueID:(id)arg0;
- (id)tapGesture;
- (id)delegate;
- (void)hide;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setTapGesture:(id)arg0;

@end