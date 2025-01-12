//
//     Generated by private class-dump
//

@class AWETeenProfileEditItemModel, NSDictionary, NSString, AWEUILoadingView, AWEUserModel;

@interface AWETeenProfileEditTextViewController : AWETextEditViewController <UITextFieldDelegate, UITextViewDelegate, NSLayoutManagerDelegate> {
    id /* block */ completionBlock;
    NSDictionary *_logExtraDict;
    NSDictionary *_pageFromDict;
    AWEUserModel *_user;
    AWETeenProfileEditItemModel *_itemModel;
    AWEUILoadingView *_loadingView;
}

@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSDictionary *pageFromDict;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWETeenProfileEditItemModel *itemModel;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)itemModel;
- (void)setItemModel:(id)arg0;
- (void)setTipLabelForContentTextView;
- (void)saveButtonClicked;
- (void)updateEmptyNumberText;
- (void)deleteButtonClicked;
- (void)editTextFieldDidChange:(id)arg0;
- (void)editTextViewDidChange:(id)arg0;
- (long long)maxTextLength;
- (id)initWithEditType:(long long)arg0 user:(id)arg1;
- (unsigned long long)textEditStyle;
- (id)preTitleWithType;
- (id)numberWithTypeAndLength:(long long)arg0;
- (id)navStringWithType;
- (void)submitChanges:(id)arg0;
- (id)pageFromDict;
- (void)setTipLabelForContentTextViewWithMaxLength:(long long)arg0;
- (unsigned long long)nicknameTextEditStyle;
- (void)setPageFromDict:(id)arg0;
- (void)setUser:(id)arg0;
- (id)user;
- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (BOOL)textFieldShouldBeginEditing:(id)arg0;
- (void)viewDidLoad;
- (void)textViewDidChange:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
