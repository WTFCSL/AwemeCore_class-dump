//
//     Generated by private class-dump
//

@class NSString, AWEFeedVideoSingleCardLayoutAdjuster, AWEModernFeedContentContainerView, UIImageView, AWEModernFeedOriginalItemContentView, AWEFeedVideoCardQualityLayoutAdjuster, CAShapeLayer, UILabel;

@interface AWEModernFeedBaseContainerView : UIView <UIGestureRecognizerDelegate> {
    BOOL _hasBottomBar;
    BOOL _clearBottomCorner;
    BOOL _clearBorder;
    BOOL _clearBorderForAdConvertButton;
    UIImageView *_repostIconImageView;
    UILabel *_repostLabel;
    AWEModernFeedOriginalItemContentView *_originContentDescView;
    AWEFeedVideoSingleCardLayoutAdjuster *_layoutAdjuster;
    AWEFeedVideoCardQualityLayoutAdjuster *_qualityLayoutAdjuster;
    AWEModernFeedContentContainerView *_contentContainerView;
    id /* block */ _baseContainerViewTappedAction;
    id /* block */ _baseContainerViewTappedActionWithGesture;
    unsigned long long _layoutType;
    long long _cutType;
    CAShapeLayer *_shapeLayer;
}

@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIImageView *repostIconImageView;
@property (retain, nonatomic) UILabel *repostLabel;
@property (retain, nonatomic) AWEModernFeedOriginalItemContentView *originContentDescView;
@property (retain, nonatomic) AWEFeedVideoSingleCardLayoutAdjuster *layoutAdjuster;
@property (retain, nonatomic) AWEFeedVideoCardQualityLayoutAdjuster *qualityLayoutAdjuster;
@property (retain, nonatomic) AWEModernFeedContentContainerView *contentContainerView;
@property (copy, nonatomic) id /* block */ baseContainerViewTappedAction;
@property (copy, nonatomic) id /* block */ baseContainerViewTappedActionWithGesture;
@property (nonatomic) unsigned long long layoutType;
@property (nonatomic) long long cutType;
@property (nonatomic) BOOL hasBottomBar;
@property (nonatomic) BOOL clearBottomCorner;
@property (nonatomic) BOOL clearBorder;
@property (nonatomic) BOOL clearBorderForAdConvertButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)cutType;
- (void)configWithFrame:(id)arg0;
- (void)updateLayoutWithFrame:(id)arg0;
- (void)baseContainerViewTapped:(id)arg0;
- (BOOL)hasBottomBar;
- (double)protectedPanelHeight;
- (void)setHasBottomBar:(BOOL)arg0;
- (void)setClearBorder:(BOOL)arg0;
- (BOOL)clearBorder;
- (id)qualityLayoutAdjuster;
- (void)setQualityLayoutAdjuster:(id)arg0;
- (void)setCutType:(long long)arg0;
- (id)layoutAdjuster;
- (void)setLayoutAdjuster:(id)arg0;
- (void)setClearBottomCorner:(BOOL)arg0;
- (BOOL)clearBottomCorner;
- (void)setClearBorderForAdConvertButton:(BOOL)arg0;
- (id)originContentDescView;
- (void)setBaseContainerViewTappedAction:(id /* block */)arg0;
- (id)repostIconImageView;
- (id)repostLabel;
- (BOOL)clearBorderForAdConvertButton;
- (id /* block */)baseContainerViewTappedActionWithGesture;
- (id /* block */)baseContainerViewTappedAction;
- (void)setRepostIconImageView:(id)arg0;
- (void)setRepostLabel:(id)arg0;
- (void)setOriginContentDescView:(id)arg0;
- (void)setBaseContainerViewTappedActionWithGesture:(id /* block */)arg0;
- (unsigned long long)layoutType;
- (void)setLayoutType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setContentContainerView:(id)arg0;
- (id)shapeLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (void)setShapeLayer:(id)arg0;
- (void)layoutSubviews;
- (id)contentContainerView;

@end