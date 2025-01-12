//
//     Generated by private class-dump
//

@class NSArray, IESGCPEvaluationStarsConfig;

@interface IESGCPEvaluationStarsView : UIView {
    id /* block */ _onTapStar;
    double _currentRating;
    IESGCPEvaluationStarsConfig *_config;
    NSArray *_starImageViews;
}

@property (nonatomic) double currentRating;
@property (retain, nonatomic) IESGCPEvaluationStarsConfig *config;
@property (retain, nonatomic) NSArray *starImageViews;
@property (copy, nonatomic) id /* block */ onTapStar;

- (void)updateStarsWithRating:(double)arg0;
- (void)setOnTapStar:(id /* block */)arg0;
- (double)currentRating;
- (long long)getCurrentStarCount;
- (void)setCurrentRating:(double)arg0;
- (id)starImageViews;
- (id /* block */)onTapStar;
- (void)didTapStarImageView:(id)arg0;
- (void)setStarImageViews:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)initWithConfig:(id)arg0;
- (void)setupViews;

@end
