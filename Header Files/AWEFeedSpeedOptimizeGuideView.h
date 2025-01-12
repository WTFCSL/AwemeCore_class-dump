//
//     Generated by private class-dump
//

@class UILabel, UIView;

@interface AWEFeedSpeedOptimizeGuideView : UIView {
    long long _guideType;
    UIView *_backgroundMaskView;
    UIView *_verticalLineView;
    UIView *_verticalCircleView;
    UIView *_horizontalLineView;
    UIView *_horizontalCircleView;
    UILabel *_textLabel;
}

@property (retain, nonatomic) UIView *backgroundMaskView;
@property (retain, nonatomic) UIView *verticalLineView;
@property (retain, nonatomic) UIView *verticalCircleView;
@property (retain, nonatomic) UIView *horizontalLineView;
@property (retain, nonatomic) UIView *horizontalCircleView;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) long long guideType;

- (long long)guideType;
- (void)setGuideType:(long long)arg0;
- (void)hideGuideView;
- (id)verticalCircleView;
- (id)horizontalCircleView;
- (void)showGuideViewOnView:(id)arg0 type:(long long)arg1;
- (void)setVerticalCircleView:(id)arg0;
- (void)setHorizontalCircleView:(id)arg0;
- (id)textLabel;
- (id)init;
- (void).cxx_destruct;
- (void)startAnimation;
- (void)setTextLabel:(id)arg0;
- (void)setupUI;
- (id)backgroundMaskView;
- (void)setBackgroundMaskView:(id)arg0;
- (id)horizontalLineView;
- (void)setHorizontalLineView:(id)arg0;
- (id)verticalLineView;
- (void)setVerticalLineView:(id)arg0;

@end
