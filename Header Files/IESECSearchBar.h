//
//     Generated by private class-dump
//

@class NSTimer, NSString, UIButton;

@interface IESECSearchBar : UISearchBar <UITextFieldDelegate, UISearchBarDelegate> {
    BOOL _needShowKeyBoard;
    BOOL _hasCancelButton;
    BOOL _enableTextChangedChecker;
    NSString *_placeholderColor;
    UIButton *_rightCustomButton;
    id /* block */ _clearButtonTappedBlock;
    id /* block */ _beginEditBlock;
    id /* block */ _endEditBlock;
    id /* block */ _textChangedBlock;
    id /* block */ _rightCustomButtonTappedBlock;
    id /* block */ _searchButtonClickedBlock;
    double _height;
    NSTimer *_timer;
    struct CGSize { double width; double height; } _rightCustomButtonSize;
}

@property (nonatomic) double height;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL needShowKeyBoard;
@property (nonatomic) BOOL hasCancelButton;
@property (retain, nonatomic) NSString *placeholderColor;
@property (readonly, nonatomic) long long cursorPosition;
@property (nonatomic) BOOL enableTextChangedChecker;
@property (retain, nonatomic) UIButton *rightCustomButton;
@property (nonatomic) struct CGSize { double width; double height; } rightCustomButtonSize;
@property (copy, nonatomic) id /* block */ clearButtonTappedBlock;
@property (copy, nonatomic) id /* block */ beginEditBlock;
@property (copy, nonatomic) id /* block */ endEditBlock;
@property (copy, nonatomic) id /* block */ textChangedBlock;
@property (copy, nonatomic) id /* block */ rightCustomButtonTappedBlock;
@property (copy, nonatomic) id /* block */ searchButtonClickedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)searchButtonClickedBlock;
- (void)setSearchButtonClickedBlock:(id /* block */)arg0;
- (void)configureUI;
- (BOOL)needShowKeyBoard;
- (void)invalidateTextChangedTimer;
- (id /* block */)textChangedBlock;
- (BOOL)enableTextChangedChecker;
- (void)checkTextChanged;
- (id /* block */)clearButtonTappedBlock;
- (void)fireTextChangedTimer;
- (id /* block */)beginEditBlock;
- (id /* block */)endEditBlock;
- (void)setNeedShowKeyBoard:(BOOL)arg0;
- (void)setEnableTextChangedChecker:(BOOL)arg0;
- (void)setClearButtonTappedBlock:(id /* block */)arg0;
- (void)setBeginEditBlock:(id /* block */)arg0;
- (void)setEndEditBlock:(id /* block */)arg0;
- (void)setTextChangedBlock:(id /* block */)arg0;
- (id)rightCustomButton;
- (void)updateRightButtonVisibility:(id)arg0;
- (id /* block */)rightCustomButtonTappedBlock;
- (void)rightCustomButtonDidClick:(id)arg0;
- (void)updateRightButtonConstraints;
- (void)setRightCustomButton:(id)arg0;
- (struct CGSize { double x0; double x1; })rightCustomButtonSize;
- (void)setRightCustomButtonSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setRightCustomButtonTappedBlock:(id /* block */)arg0;
- (id)placeholderColor;
- (void)setPlaceholderColor:(id)arg0;
- (id)timer;
- (BOOL)textFieldShouldClear:(id)arg0;
- (void)setHasCancelButton:(BOOL)arg0;
- (void).cxx_destruct;
- (double)height;
- (void)searchBar:(id)arg0 textDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)hasCancelButton;
- (void)didMoveToWindow;
- (void)setTimer:(id)arg0;
- (void)setPlaceholder:(id)arg0;
- (void)textFieldDidBeginEditing:(id)arg0;
- (void)setHeight:(double)arg0;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)textFieldDidEndEditing:(id)arg0;
- (void)searchBarSearchButtonClicked:(id)arg0;
- (long long)cursorPosition;
- (BOOL)searchBar:(id)arg0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementText:(id)arg2;

@end
