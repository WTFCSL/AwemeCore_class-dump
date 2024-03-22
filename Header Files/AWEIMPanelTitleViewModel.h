//
//     Generated by private class-dump
//

@class NSAttributedString;

@interface AWEIMPanelTitleViewModel : AWEIMPanelViewModel {
    long long _numberOfLines;
    NSAttributedString *_attributedText;
}

@property (nonatomic) long long numberOfLines;
@property (copy, nonatomic) NSAttributedString *attributedText;

+ (id)titleViewModelWithTitle:(id)arg0 fontSize:(double)arg1 lineHeight:(double)arg2;
+ (double)contentHeightWithAttributedText:(id)arg0 contentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg1;
+ (id)titleViewModelWithTitle:(id)arg0;
+ (id)titleViewModelWithSubtitle:(id)arg0;

- (id)attributedText;
- (void).cxx_destruct;
- (double)contentHeight;
- (void)setAttributedText:(id)arg0;
- (long long)numberOfLines;
- (void)setNumberOfLines:(long long)arg0;

@end
