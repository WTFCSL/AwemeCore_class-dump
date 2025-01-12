//
//     Generated by private class-dump
//

@class UIButton, UIImageView, UILabel;

@interface HTSLiveDoubleInteractionTitleBar : UIView {
    BOOL _isAnchor;
    unsigned long long _scene;
    UIButton *_titleButton;
    UIImageView *_titleBGView;
    UILabel *_interactTimeLabel;
    UILabel *_interactTextLabel;
    double _bgViewWidth;
    unsigned long long _elaspedTime;
}

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) UIButton *titleButton;
@property (retain, nonatomic) UIImageView *titleBGView;
@property (retain, nonatomic) UILabel *interactTimeLabel;
@property (retain, nonatomic) UILabel *interactTextLabel;
@property (nonatomic) double bgViewWidth;
@property (nonatomic) unsigned long long elaspedTime;
@property (nonatomic) BOOL isAnchor;

- (void)setIsAnchor:(BOOL)arg0;
- (void)bindAction;
- (id)titleBGView;
- (void)setTitleBGView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 scene:(unsigned long long)arg1 isAnchor:(BOOL)arg2 diContext:(id)arg3;
- (void)loadNewViews;
- (void)updateTitleLabelWithElapsedTime:(unsigned long long)arg0;
- (id)interactTimeLabel;
- (id)interactTextLabel;
- (void)setUpBGViewWithTimeString:(id)arg0;
- (void)setElaspedTime:(unsigned long long)arg0;
- (void)setBgViewWidth:(double)arg0;
- (double)bgViewWidth;
- (void)setInteractTextLabel:(id)arg0;
- (void)setInteractTimeLabel:(id)arg0;
- (unsigned long long)elaspedTime;
- (double)currentTitleWidth;
- (id)accessibilityLabel;
- (void)setScene:(unsigned long long)arg0;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (BOOL)isAccessibilityElement;
- (unsigned long long)scene;
- (void)loadViews;
- (id)titleButton;
- (void)setTitleButton:(id)arg0;

@end
