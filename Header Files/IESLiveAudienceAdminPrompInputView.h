//
//     Generated by private class-dump
//

@class NSString, UITextField, UIImageView, UILabel, UIView;

@interface IESLiveAudienceAdminPrompInputView : UIView <UITextFieldDelegate> {
    id /* block */ _sendBlock;
    id /* block */ _reachMaxBlock;
    long long _maxWordLength;
    NSString *_placeHolder;
    UIView *_lineView;
    UITextField *_inputTextField;
    UILabel *_placeholdLabel;
    UIImageView *_sliderBlock;
    UILabel *_tipLabel;
    UIView *_rightView;
    UILabel *_rightTipLabel;
}

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UITextField *inputTextField;
@property (retain, nonatomic) UILabel *placeholdLabel;
@property (retain, nonatomic) UIImageView *sliderBlock;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) UILabel *rightTipLabel;
@property (copy, nonatomic) id /* block */ sendBlock;
@property (copy, nonatomic) id /* block */ reachMaxBlock;
@property (nonatomic) long long maxWordLength;
@property (copy, nonatomic) NSString *placeHolder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sliderBlock;
- (void)setSliderBlock:(id)arg0;
- (id)rightTipLabel;
- (void)setRightTipLabel:(id)arg0;
- (void)showInputView;
- (BOOL)inputViewShowing;
- (void)setReachMaxBlock:(id /* block */)arg0;
- (void)hiddenInputView;
- (void)textFieldEditChange:(id)arg0;
- (long long)maxWordLength;
- (id /* block */)reachMaxBlock;
- (void)p_showTipsWhenReachMax:(id)arg0;
- (id)placeholdLabel;
- (void)setMaxWordLength:(long long)arg0;
- (void)setPlaceholdLabel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (BOOL)textFieldShouldReturn:(id)arg0;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (id)rightView;
- (void)setRightView:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (id /* block */)sendBlock;
- (void)setSendBlock:(id /* block */)arg0;
- (id)inputTextField;
- (void)setInputTextField:(id)arg0;
- (id)placeHolder;
- (void)setPlaceHolder:(id)arg0;

@end