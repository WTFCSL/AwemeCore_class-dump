//
//     Generated by private class-dump
//

@class NSString, UIImageView, UITextField, UIView;
@protocol LSIMMemberSearchBarDelegate;

@interface LSIMMemberSearchBar : UIView <UITextFieldDelegate> {
    id<LSIMMemberSearchBarDelegate> _delegate;
    unsigned long long _style;
    UIView *_containerView;
    UIImageView *_iconView;
    UITextField *_textField;
    UIView *_separatorView;
}

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIView *separatorView;
@property (weak, nonatomic) id<LSIMMemberSearchBarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initView;
- (unsigned long long)style;
- (void)setTextField:(id)arg0;
- (BOOL)isFirstResponder;
- (id)textField;
- (BOOL)isFullScreen;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)arg0;
- (void)setSeparatorView:(id)arg0;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (void)setContainerView:(id)arg0;
- (id)delegate;
- (id)containerView;
- (void)textFieldDidBeginEditing:(id)arg0;
- (id)separatorView;
- (void)setDelegate:(id)arg0;
- (void)setStyle:(unsigned long long)arg0;
- (void)textFieldDidChangeSelection:(id)arg0;

@end