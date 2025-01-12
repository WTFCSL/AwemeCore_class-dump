//
//     Generated by private class-dump
//

@class UIView, NSString, AWECommonSearchBar, NSAttributedString, UIImage, UIFont, UITextField, UIColor;

@interface AWEStudioCommonSearchBar : NSObject <ACCMusicCommonSearchBarProtocol, AWECommonSearchBarDelegate> {
    NSString *text;
    UITextField *textField;
    unsigned long long type;
    UIColor *textColor;
    UIColor *searchTintColor;
    NSAttributedString *attributedPlaceHolder;
    UIImage *clearImage;
    UIImage *lensImage;
    id /* block */ rightButtonClickedBlock;
    UIColor *searchFiledBackgroundColor;
    id /* block */ searchBarTextChangeBlock;
    id /* block */ textFieldBeginEditingBlock;
    id /* block */ textFieldShouldReturnBlock;
    id /* block */ textFieldDidEndEditingBlock;
    UIFont *rightButtonTitleFont;
    id /* block */ searchButtonClickedBlock;
    AWECommonSearchBar *_searchBar;
}

@property (retain, nonatomic) AWECommonSearchBar *searchBar;
@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) UITextField *textField;
@property (readonly, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedPlaceHolder;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *searchFiledBackgroundColor;
@property (retain, nonatomic) UIColor *searchTintColor;
@property (retain, nonatomic) UIImage *clearImage;
@property (retain, nonatomic) UIImage *lensImage;
@property (retain, nonatomic) UIFont *rightButtonTitleFont;
@property (copy, nonatomic) id /* block */ rightButtonClickedBlock;
@property (copy, nonatomic) id /* block */ searchButtonClickedBlock;
@property (copy, nonatomic) id /* block */ searchBarTextChangeBlock;
@property (copy, nonatomic) id /* block */ textFieldBeginEditingBlock;
@property (copy, nonatomic) id /* block */ textFieldDidEndEditingBlock;
@property (copy, nonatomic) id /* block */ textFieldShouldReturnBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)searchFiledBackgroundColor;
- (id)lensImage;
- (void)animatedShowCancelButton:(BOOL)arg0;
- (id /* block */)rightButtonClickedBlock;
- (id /* block */)searchButtonClickedBlock;
- (void)hideSearchButton:(BOOL)arg0;
- (void)setAttributedPlaceHolder:(id)arg0;
- (id)attributedPlaceHolder;
- (void)setSearchFiledBackgroundColor:(id)arg0;
- (void)setSearchTintColor:(id)arg0;
- (id)searchTintColor;
- (void)setLensImage:(id)arg0;
- (void)setClearImage:(id)arg0;
- (void)setRightButtonTitleFont:(id)arg0;
- (id)rightButtonTitleFont;
- (void)setRightButtonClickedBlock:(id /* block */)arg0;
- (void)setSearchButtonClickedBlock:(id /* block */)arg0;
- (void)setTextFieldBeginEditingBlock:(id /* block */)arg0;
- (id /* block */)searchBarTextChangeBlock;
- (id /* block */)textFieldBeginEditingBlock;
- (id /* block */)textFieldDidEndEditingBlock;
- (id /* block */)textFieldShouldReturnBlock;
- (void)textFieldBecomeFirstResponder;
- (id)targetSearchBar;
- (void)setSearchBarTextChangeBlock:(id /* block */)arg0;
- (void)setTextFieldDidEndEditingBlock:(id /* block */)arg0;
- (void)setTextFieldShouldReturnBlock:(id /* block */)arg0;
- (id)searchBar;
- (id)init;
- (id)textField;
- (void)setSearchBar:(id)arg0;
- (id)clearImage;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (void)searchBar:(id)arg0 textDidChange:(id)arg1;
- (unsigned long long)type;
- (BOOL)textFieldShouldBeginEditing:(id)arg0;
- (id)contentView;
- (void)setType:(unsigned long long)arg0;
- (id)text;
- (BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementString:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg0;
- (void)setTextColor:(id)arg0;
- (BOOL)textFieldShouldReturn:(id)arg0;
- (void)textFieldDidEndEditing:(id)arg0;
- (id)textColor;
- (void)clearSearchBar;

@end
