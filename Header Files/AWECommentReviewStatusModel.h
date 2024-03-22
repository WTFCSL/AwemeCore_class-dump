//
//     Generated by private class-dump
//

@class NSString;

@interface AWECommentReviewStatusModel : AWEBaseApiModel {
    BOOL _canAccelerateReview;
    BOOL _safeCountEnable;
    BOOL _isCommentAccelerateOpen;
    BOOL _isCommentAccelerating;
    NSString *_reviewText;
    NSString *_accelerateText;
}

@property (copy, nonatomic) NSString *reviewText;
@property (nonatomic) BOOL canAccelerateReview;
@property (copy, nonatomic) NSString *accelerateText;
@property (nonatomic) BOOL safeCountEnable;
@property (nonatomic) BOOL isCommentAccelerateOpen;
@property (nonatomic) BOOL isCommentAccelerating;

+ (id)JSONKeyPathsByPropertyKey;

- (id)accelerateText;
- (BOOL)canAccelerateReview;
- (void)setCanAccelerateReview:(BOOL)arg0;
- (void)setAccelerateText:(id)arg0;
- (BOOL)safeCountEnable;
- (void)setSafeCountEnable:(BOOL)arg0;
- (BOOL)isCommentAccelerateOpen;
- (void)setIsCommentAccelerateOpen:(BOOL)arg0;
- (BOOL)isCommentAccelerating;
- (void)setIsCommentAccelerating:(BOOL)arg0;
- (void).cxx_destruct;
- (id)reviewText;
- (void)setReviewText:(id)arg0;

@end