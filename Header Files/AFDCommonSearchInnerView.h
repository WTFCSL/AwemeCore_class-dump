//
//     Generated by private class-dump
//

@class NSString, UITextField, UIView, UIButton;
@protocol AFDCommonSearchInnerViewDelegate;

@interface AFDCommonSearchInnerView : UIView <UITextFieldDelegate> {
    id<AFDCommonSearchInnerViewDelegate> _delegate;
    UITextField *_searchTextField;
    UIButton *_returnButton;
    UIView *_searchBarContentView;
    UIButton *_scanButton;
    UIButton *_searchButton;
    UIButton *_clearButton;
}

@property (retain, nonatomic) UIButton *returnButton;
@property (retain, nonatomic) UIView *searchBarContentView;
@property (retain, nonatomic) UIButton *scanButton;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) UIButton *clearButton;
@property (weak, nonatomic) id<AFDCommonSearchInnerViewDelegate> delegate;
@property (retain, nonatomic) UITextField *searchTextField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)returnButton;
- (void)setReturnButton:(id)arg0;
- (id)searchBarContentView;
- (void)setSearchBarContentView:(id)arg0;
- (id)scanButton;
- (void)onClickBackButton;
- (void)onClickSearchButton;
- (void)onClickScanButton;
- (void)onClickClearButton;
- (void)updateConstraintsOfSearchContentViewWithAnimation:(BOOL)arg0;
- (void)defaultPlaceHolderWithString:(id)arg0;
- (void)setScanButton:(id)arg0;
- (BOOL)textFieldShouldClear:(id)arg0;
- (void).cxx_destruct;
- (void)setSearchButton:(id)arg0;
- (id)searchTextField;
- (void)setSearchTextField:(id)arg0;
- (id)searchButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)textFieldDidBeginEditing:(id)arg0;
- (void)setDelegate:(id)arg0;
- (id)clearButton;
- (BOOL)textFieldShouldReturn:(id)arg0;
- (void)textFieldDidEndEditing:(id)arg0;
- (void)setupUI;
- (void)textFieldDidChange:(id)arg0;
- (void)setClearButton:(id)arg0;

@end
