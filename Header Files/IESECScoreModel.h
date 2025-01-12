//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface IESECScoreModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_score;
    NSString *_rating;
    NSNumber *_percentage;
}

@property (retain, nonatomic) NSNumber *score;
@property (copy, nonatomic) NSString *rating;
@property (retain, nonatomic) NSNumber *percentage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setScore:(id)arg0;
- (id)score;
- (void).cxx_destruct;
- (id)rating;
- (id)percentage;
- (void)setRating:(id)arg0;
- (void)setPercentage:(id)arg0;

@end
