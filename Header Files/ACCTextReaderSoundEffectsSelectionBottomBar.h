//
//     Generated by private class-dump
//

@class UILabel, UIButton, UIView;

@interface ACCTextReaderSoundEffectsSelectionBottomBar : UIView {
    UIView *_lineView;
    UILabel *_titleLbl;
    UIButton *_cancelBtn;
    UIButton *_saveBtn;
    id /* block */ _didTapSaveButtonBlock;
    id /* block */ _didTapCancelButtonBlock;
}

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *titleLbl;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *saveBtn;
@property (copy, nonatomic) id /* block */ didTapSaveButtonBlock;
@property (copy, nonatomic) id /* block */ didTapCancelButtonBlock;

- (id)cancelBtn;
- (void)setCancelBtn:(id)arg0;
- (void)p_setupUI;
- (void)setTitleLbl:(id)arg0;
- (id)titleLbl;
- (id)saveBtn;
- (void)setSaveBtn:(id)arg0;
- (void)p_didClickCancelBtn:(id)arg0;
- (void)p_didClickSaveBtn:(id)arg0;
- (id /* block */)didTapCancelButtonBlock;
- (id /* block */)didTapSaveButtonBlock;
- (void)setDidTapSaveButtonBlock:(id /* block */)arg0;
- (void)setDidTapCancelButtonBlock:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)lineView;
- (void)setLineView:(id)arg0;

@end