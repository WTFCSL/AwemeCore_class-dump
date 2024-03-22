//
//     Generated by private class-dump
//

@class NSArray, UIStackView;

@interface AFDVisitorListUnAuthorizedHintView : UIView {
    NSArray *_words;
    UIStackView *_contentStackView;
}

@property (copy, nonatomic) NSArray *words;
@property (retain, nonatomic) UIStackView *contentStackView;

- (void)setupDotHintLabelViews;
- (void)setupContentStackView;
- (void)setupDotHintLabelViewWithWord:(id)arg0;
- (id)initWithHintWords:(id)arg0;
- (void).cxx_destruct;
- (id)words;
- (void)setWords:(id)arg0;
- (id)contentStackView;
- (void)setContentStackView:(id)arg0;

@end