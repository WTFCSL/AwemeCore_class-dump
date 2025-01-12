//
//     Generated by private class-dump
//

@class NSString, IESLiveCategorySearchTextField, UILabel, UIButton;
@protocol IESLiveOptCategorySearchHeaderViewDelegate;

@interface IESLiveOptCategorySearchCell : UICollectionViewCell <UITextFieldDelegate> {
    BOOL _isSearchMode;
    BOOL _isEditing;
    id<IESLiveOptCategorySearchHeaderViewDelegate> _delegate;
    IESLiveCategorySearchTextField *_searchTextField;
    UIButton *_cancelSearchBtn;
    UILabel *_describeLabel;
}

@property (retain, nonatomic) IESLiveCategorySearchTextField *searchTextField;
@property (retain, nonatomic) UIButton *cancelSearchBtn;
@property (retain, nonatomic) UILabel *describeLabel;
@property (nonatomic) BOOL isSearchMode;
@property (nonatomic) BOOL isEditing;
@property (weak, nonatomic) id<IESLiveOptCategorySearchHeaderViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (id)describeLabel;
- (void)setDescribeLabel:(id)arg0;
- (BOOL)isSearchMode;
- (void)setIsSearchMode:(BOOL)arg0;
- (void)exitSearchModeIfNeed;
- (id)cancelSearchBtn;
- (void)updateUIWithSearchMode:(BOOL)arg0;
- (void)headerEnterSearchModeIfNeed;
- (void)headerExitSearchModeIfNeed;
- (void)setCancelSearchBtn:(id)arg0;
- (void)resignFirstResponder;
- (void).cxx_destruct;
- (id)searchTextField;
- (void)setSearchTextField:(id)arg0;
- (BOOL)isEditing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)textFieldShouldBeginEditing:(id)arg0;
- (id)delegate;
- (BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementString:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg0;
- (void)setDelegate:(id)arg0;
- (BOOL)textFieldShouldReturn:(id)arg0;
- (void)textFieldDidEndEditing:(id)arg0;
- (void)setupUI;
- (void)textFieldDidChange:(id)arg0;
- (void)setIsEditing:(BOOL)arg0;

@end
