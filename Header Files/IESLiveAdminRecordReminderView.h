//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIButton;

@interface IESLiveAdminRecordReminderView : UIView {
    id /* block */ _screenRecordAction;
    UIImageView *_screenRecordImage;
    UILabel *_functionTitleLabel;
    UILabel *_entranceTitleLabel;
    UIButton *_screenRecordBtn;
}

@property (retain, nonatomic) UIImageView *screenRecordImage;
@property (retain, nonatomic) UILabel *functionTitleLabel;
@property (retain, nonatomic) UILabel *entranceTitleLabel;
@property (retain, nonatomic) UIButton *screenRecordBtn;
@property (copy, nonatomic) id /* block */ screenRecordAction;

- (void)setEntranceTitleLabel:(id)arg0;
- (id)entranceTitleLabel;
- (void)screenRecordBtnAction;
- (id /* block */)screenRecordAction;
- (void)setScreenRecordAction:(id /* block */)arg0;
- (id)screenRecordImage;
- (void)setScreenRecordImage:(id)arg0;
- (id)functionTitleLabel;
- (void)setFunctionTitleLabel:(id)arg0;
- (id)screenRecordBtn;
- (void)setScreenRecordBtn:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;

@end
