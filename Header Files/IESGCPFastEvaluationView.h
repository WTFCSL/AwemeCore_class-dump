//
//     Generated by private class-dump
//

@class IESGCPEvaluationStarsView, NSString, UILabel, UIButton;

@interface IESGCPFastEvaluationView : UIView {
    BOOL _isDark;
    BOOL _isUpdateAfterTapStar;
    id /* block */ _evaluateDetailHandler;
    id /* block */ _evaluateStarHandler;
    UILabel *_promptLabel;
    IESGCPEvaluationStarsView *_evaluateStarView;
    UIButton *_evaluateButton;
    NSString *_promptString;
    double _rating;
}

@property (retain, nonatomic) UILabel *promptLabel;
@property (retain, nonatomic) IESGCPEvaluationStarsView *evaluateStarView;
@property (retain, nonatomic) UIButton *evaluateButton;
@property (nonatomic) BOOL isDark;
@property (copy, nonatomic) NSString *promptString;
@property (nonatomic) BOOL isUpdateAfterTapStar;
@property (nonatomic) double rating;
@property (readonly, nonatomic) double currentRating;
@property (copy, nonatomic) id /* block */ evaluateDetailHandler;
@property (copy, nonatomic) id /* block */ evaluateStarHandler;

- (void)updateStarsWithRating:(double)arg0;
- (void)setIsDark:(BOOL)arg0;
- (void)setupWith:(id)arg0;
- (double)currentRating;
- (void)setEvaluateDetailHandler:(id /* block */)arg0;
- (void)setEvaluateStarHandler:(id /* block */)arg0;
- (void)updateScoreGuidePrompt:(double)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 isDark:(BOOL)arg1 isUpdateAfterTapStar:(BOOL)arg2;
- (void)initUserInterface;
- (void)makeTrackNode;
- (id)evaluateStarView;
- (id)evaluateButton;
- (id /* block */)evaluateDetailHandler;
- (void)trackCommentStarClickEvent;
- (void)trackCommentButtonClickEvent;
- (BOOL)isContentFullScreen;
- (BOOL)isUpdateAfterTapStar;
- (id /* block */)evaluateStarHandler;
- (void)evaluateButtonDidClicked;
- (void)setEvaluateStarView:(id)arg0;
- (void)setEvaluateButton:(id)arg0;
- (void)setIsUpdateAfterTapStar:(BOOL)arg0;
- (BOOL)isDark;
- (void)setPromptLabel:(id)arg0;
- (id)promptLabel;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)rating;
- (void)setRating:(double)arg0;
- (void)setPromptString:(id)arg0;
- (id)promptString;

@end
