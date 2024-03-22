//
//     Generated by private class-dump
//

@class NSArray, CJPayLocalThemeStyle, CJPaySafeKeyboardStyleConfigModel;

@interface CJPaySafeKeyboard : UIView {
    BOOL _needRelayout;
    id /* block */ _numberClickedBlock;
    id /* block */ _characterClickedBlock;
    id /* block */ _deleteClickedBlock;
    id /* block */ _completeClickedBlock;
    CJPayLocalThemeStyle *_themeStyle;
    unsigned long long _keyboardType;
    CJPaySafeKeyboardStyleConfigModel *_styleConfigModel;
    NSArray *_titleList;
    long long _rowCount;
    long long _columnCount;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastBounds;
}

@property (copy, nonatomic) NSArray *titleList;
@property (nonatomic) long long rowCount;
@property (nonatomic) long long columnCount;
@property (retain, nonatomic) CJPaySafeKeyboardStyleConfigModel *styleConfigModel;
@property (nonatomic) BOOL needRelayout;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastBounds;
@property (copy, nonatomic) id /* block */ numberClickedBlock;
@property (copy, nonatomic) id /* block */ characterClickedBlock;
@property (copy, nonatomic) id /* block */ deleteClickedBlock;
@property (copy, nonatomic) id /* block */ completeClickedBlock;
@property (retain, nonatomic) CJPayLocalThemeStyle *themeStyle;
@property (nonatomic) unsigned long long keyboardType;

- (void)setThemeStyle:(id)arg0;
- (void)setupUIWithModel:(id)arg0;
- (void)setTitleList:(id)arg0;
- (id)titleList;
- (void)p_buttonClicked:(id)arg0;
- (BOOL)needRelayout;
- (void)setNeedRelayout:(BOOL)arg0;
- (void)setDeleteClickedBlock:(id /* block */)arg0;
- (void)setNumberClickedBlock:(id /* block */)arg0;
- (void)setCharacterClickedBlock:(id /* block */)arg0;
- (void)setCompleteClickedBlock:(id /* block */)arg0;
- (id /* block */)completeClickedBlock;
- (void)p_updateKeyBoardBtnSecureState;
- (void)p_resetLayout;
- (id)styleConfigModel;
- (void)setStyleConfigModel:(id)arg0;
- (id)p_keyboardContentWithType:(unsigned long long)arg0;
- (void)p_setupUIWithModel:(id)arg0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (id /* block */)deleteClickedBlock;
- (id /* block */)characterClickedBlock;
- (id /* block */)numberClickedBlock;
- (long long)rowCount;
- (long long)columnCount;
- (void)setKeyboardType:(unsigned long long)arg0;
- (unsigned long long)keyboardType;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setColumnCount:(long long)arg0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;
- (id)themeStyle;
- (void)setRowCount:(long long)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lastBounds;
- (void)setLastBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end