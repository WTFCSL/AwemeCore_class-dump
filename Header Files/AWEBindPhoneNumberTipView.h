//
//     Generated by private class-dump
//

@class UILabel, UIButton;

@interface AWEBindPhoneNumberTipView : UIView {
    UIButton *_closeBtn;
    unsigned long long _type;
    UILabel *_tipLabel;
}

@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (nonatomic) unsigned long long type;

- (id)closeBtn;
- (void)setCloseBtn:(id)arg0;
- (id)initWithSepLine:(BOOL)arg0;
- (void)addCloseBtnTarget:(id)arg0 action:(SEL)arg1;
- (void)addLabelTapTarget:(id)arg0 action:(SEL)arg1;
- (id)initWithType:(unsigned long long)arg0 sepLine:(BOOL)arg1;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setType:(unsigned long long)arg0;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;

@end