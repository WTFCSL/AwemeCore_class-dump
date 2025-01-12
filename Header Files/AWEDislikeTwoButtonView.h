//
//     Generated by private class-dump
//

@class UIButton;
@protocol AWEDislikeTwoButtonViewDelegate;

@interface AWEDislikeTwoButtonView : UIView {
    id<AWEDislikeTwoButtonViewDelegate> _delegate;
    UIButton *_leftButton;
    UIButton *_rightButton;
}

@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (weak, nonatomic) id<AWEDislikeTwoButtonViewDelegate> delegate;

- (void)setTitle:(id)arg0 index:(unsigned long long)arg1;
- (double)guideButtonInterval;
- (void)leftButtonDidClicked:(id)arg0;
- (void)rightButtonDidClicked:(id)arg0;
- (void)setLeftButton:(id)arg0;
- (id)leftButton;
- (id)rightButton;
- (id)init;
- (void).cxx_destruct;
- (void)setRightButton:(id)arg0;
- (void)setup;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
