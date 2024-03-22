//
//     Generated by private class-dump
//

@class NSString;

@interface IESGCPEvaluationStarsConfig : NSObject {
    BOOL _isUserEnabled;
    BOOL _updateAfterTapStar;
    double _padding;
    long long _totalStarsCount;
    long long _pointsPerStar;
    NSString *_normalStarImageName;
    NSString *_selectedStarImageName;
    NSString *_halfStarImageName;
    double _rating;
    struct CGSize { double width; double height; } _starSize;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _insets;
}

@property (nonatomic) struct CGSize { double width; double height; } starSize;
@property (nonatomic) double padding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) long long totalStarsCount;
@property (nonatomic) long long pointsPerStar;
@property (nonatomic) BOOL isUserEnabled;
@property (nonatomic) BOOL updateAfterTapStar;
@property (copy, nonatomic) NSString *normalStarImageName;
@property (copy, nonatomic) NSString *selectedStarImageName;
@property (copy, nonatomic) NSString *halfStarImageName;
@property (nonatomic) double rating;

+ (id)configForDisplayOnListWithRating:(double)arg0;
+ (id)configForDisplayOnListWithRatingNew:(double)arg0;
+ (id)configForPublishWithRating:(double)arg0;

- (void)setStarSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setIsUserEnabled:(BOOL)arg0;
- (void)setUpdateAfterTapStar:(BOOL)arg0;
- (void)setSelectedStarImageName:(id)arg0;
- (void)setNormalStarImageName:(id)arg0;
- (void)setHalfStarImageName:(id)arg0;
- (void)setPointsPerStar:(long long)arg0;
- (void)setTotalStarsCount:(long long)arg0;
- (long long)totalStarsCount;
- (long long)pointsPerStar;
- (BOOL)updateAfterTapStar;
- (id)normalStarImageName;
- (id)selectedStarImageName;
- (id)halfStarImageName;
- (void)setPadding:(double)arg0;
- (void)setInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void).cxx_destruct;
- (double)rating;
- (BOOL)isUserEnabled;
- (double)padding;
- (void)setRating:(double)arg0;
- (struct CGSize { double x0; double x1; })starSize;

@end
