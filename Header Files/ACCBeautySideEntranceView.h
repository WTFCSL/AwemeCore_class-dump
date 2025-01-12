//
//     Generated by private class-dump
//

@class UIButton;

@interface ACCBeautySideEntranceView : UIView {
    UIButton *_adjustBeautyBtn;
    UIButton *_closeBeautyBtn;
    UIButton *_openBeautyBtn;
    id /* block */ _adjustBlock;
    id /* block */ _closeBlock;
    id /* block */ _openBlock;
}

@property (retain, nonatomic) UIButton *adjustBeautyBtn;
@property (retain, nonatomic) UIButton *closeBeautyBtn;
@property (retain, nonatomic) UIButton *openBeautyBtn;
@property (copy, nonatomic) id /* block */ adjustBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ openBlock;

- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg0;
- (void)setOpenBlock:(id /* block */)arg0;
- (id /* block */)openBlock;
- (id /* block */)adjustBlock;
- (void)setAdjustBlock:(id /* block */)arg0;
- (void)updateBeautySwitchStatus:(BOOL)arg0;
- (void)updateButtonVisibleStatus:(BOOL)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 adjustBlock:(id /* block */)arg1 closeBlock:(id /* block */)arg2 openBlock:(id /* block */)arg3;
- (id)adjustBeautyBtn;
- (id)closeBeautyBtn;
- (id)openBeautyBtn;
- (void)adjustBeautyClicked:(id)arg0;
- (void)closeBeautyClicked:(id)arg0;
- (void)openBeautyClicked:(id)arg0;
- (void)setAdjustBeautyBtn:(id)arg0;
- (void)setCloseBeautyBtn:(id)arg0;
- (void)setOpenBeautyBtn:(id)arg0;
- (void).cxx_destruct;
- (void)setupUI;

@end
