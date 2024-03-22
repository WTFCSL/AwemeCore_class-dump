//
//     Generated by private class-dump
//

@class NSString, NSAttributedString, AWEProfileEditViewModel;

@interface AWEProfileEditItemModel : NSObject {
    long long _type;
    NSString *_title;
    NSAttributedString *_attributedText;
    NSString *_placeholder;
    NSString *_detail;
    NSString *_key;
    AWEProfileEditViewModel *_viewModel;
    NSString *_rightIcon;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) NSString *placeholder;
@property (retain, nonatomic) NSString *detail;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) AWEProfileEditViewModel *viewModel;
@property (copy, nonatomic) NSString *rightIcon;

- (void)setRightIcon:(id)arg0;
- (id)initWithType:(long long)arg0 viewModel:(id)arg1;
- (void)setType:(long long)arg0 viewModel:(id)arg1;
- (id)key;
- (id)attributedText;
- (void)setDetail:(id)arg0;
- (void).cxx_destruct;
- (void)setAttributedText:(id)arg0;
- (long long)type;
- (void)setViewModel:(id)arg0;
- (id)title;
- (void)setKey:(id)arg0;
- (void)setType:(long long)arg0;
- (id)detail;
- (void)setPlaceholder:(id)arg0;
- (id)viewModel;
- (id)placeholder;
- (void)setTitle:(id)arg0;
- (id)rightIcon;

@end
