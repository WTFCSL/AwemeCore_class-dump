//
//     Generated by private class-dump
//

@class UIView;

@interface IESFormatMessageDigitalHumanThinkingAnimationView : UIView {
    BOOL _shouldStopAnimation;
    UIView *_viewA;
    UIView *_viewB;
    UIView *_viewC;
}

@property (retain, nonatomic) UIView *viewA;
@property (retain, nonatomic) UIView *viewB;
@property (retain, nonatomic) UIView *viewC;
@property (nonatomic) BOOL shouldStopAnimation;

- (void)p_layoutSubView;
- (id)viewA;
- (id)viewB;
- (id)viewC;
- (void)p_startAnimation;
- (void)setViewA:(id)arg0;
- (void)setViewB:(id)arg0;
- (void)setViewC:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)startAnimation;
- (void)stopAnimation;
- (BOOL)shouldStopAnimation;
- (void)setShouldStopAnimation:(BOOL)arg0;

@end
