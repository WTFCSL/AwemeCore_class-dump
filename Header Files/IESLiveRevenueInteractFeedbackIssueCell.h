//
//     Generated by private class-dump
//

@class RACDisposable, IESLiveRevenueInteractFeedbackViewModel, IssueCategory, UILabel, IESLiveRevenueInteractFeedbackStyleConfig, RACCompoundDisposable;

@interface IESLiveRevenueInteractFeedbackIssueCell : UICollectionViewCell {
    IssueCategory *_category;
    UILabel *_issueLabel;
    RACCompoundDisposable *_disposable;
    RACDisposable *_multiSelectedDisposable;
    IESLiveRevenueInteractFeedbackViewModel *_viewModel;
    IESLiveRevenueInteractFeedbackStyleConfig *_styleConfig;
}

@property (retain, nonatomic) UILabel *issueLabel;
@property (retain, nonatomic) RACCompoundDisposable *disposable;
@property (retain, nonatomic) RACDisposable *multiSelectedDisposable;
@property (weak, nonatomic) IESLiveRevenueInteractFeedbackViewModel *viewModel;
@property (retain, nonatomic) IESLiveRevenueInteractFeedbackStyleConfig *styleConfig;
@property (retain, nonatomic) IssueCategory *category;

- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)setStyleConfig:(id)arg0;
- (id)styleConfig;
- (void)p_dispose;
- (void)updateUIWithSelected:(BOOL)arg0;
- (void)updateUIWithIssue:(id)arg0 viewModel:(id)arg1 type:(long long)arg2 styleConfig:(id)arg3;
- (void)setIssueLabel:(id)arg0;
- (id)issueLabel;
- (id)multiSelectedDisposable;
- (void)setMultiSelectedDisposable:(id)arg0;
- (id)category;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg0;
- (void)setCategory:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)prepareForReuse;
- (void)dealloc;
- (void)layoutUI;

@end
