//
//     Generated by private class-dump
//

@interface AWENoticeSwitchView : UIView {
    void /* unknown type, empty encoding */ labelMaxWidth;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ isOn;
    void /* unknown type, empty encoding */ switchValueChangedBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subTitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_switchView;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ labelMaxWidth;
@property (nonatomic, copy) id /* block */ switchValueChangedBlock;

- (double)labelMaxWidth;
- (id /* block */)switchValueChangedBlock;
- (void)setSwitchValueChangedBlock:(id /* block */)arg0;
- (id)initWithTitle:(id)arg0 subtitle:(id)arg1 isOn:(BOOL)arg2;
- (void)setSwitchOn:(BOOL)arg0 triggerCallback:(BOOL)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;

@end
