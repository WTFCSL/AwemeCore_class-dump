//
//     Generated by private class-dump
//

@class UIStackView, NSArray, NSString, UIView, UILabel;

@interface IESGCPEvaluationStarsDistributionView : UITableViewHeaderFooterView <IESGCPEvaluationHeaderViewProtocol> {
    UIView *_containerView;
    UIStackView *_progressStackView;
    UIStackView *_starsStackView;
    NSArray *_evaluateProgressViews;
    NSArray *_evaluateStarViews;
    UILabel *_pointLabel;
    UILabel *_commentCountLabel;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIStackView *progressStackView;
@property (retain, nonatomic) UIStackView *starsStackView;
@property (copy, nonatomic) NSArray *evaluateProgressViews;
@property (copy, nonatomic) NSArray *evaluateStarViews;
@property (retain, nonatomic) UILabel *pointLabel;
@property (retain, nonatomic) UILabel *commentCountLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)arg0;
- (id)commentCountLabel;
- (void)setCommentCountLabel:(id)arg0;
- (void)updateToUnShownPoint;
- (id)pointLabel;
- (void)setPointLabel:(id)arg0;
- (id)starsStackView;
- (id)evaluateStarViews;
- (id)evaluateProgressViews;
- (void)updatePoint:(double)arg0 commentCount:(unsigned long long)arg1 starScoreGroup:(id)arg2 shouldShowEvaluatePoint:(BOOL)arg3;
- (void)setStarsStackView:(id)arg0;
- (void)setEvaluateProgressViews:(id)arg0;
- (void)setEvaluateStarViews:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)layoutView;
- (id)initWithReuseIdentifier:(id)arg0;
- (void)setupView;
- (id)progressStackView;
- (void)setProgressStackView:(id)arg0;

@end
