//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEECommerceEcomButtonModel : AWEBaseApiModel {
    NSString *_schema;
    long long _width;
    long long _height;
    NSString *_backgroundColor;
    long long _animationDelay;
    NSArray *_initialAreas;
    NSArray *_finalAreas;
}

@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) long long animationDelay;
@property (copy, nonatomic) NSArray *initialAreas;
@property (copy, nonatomic) NSArray *finalAreas;

+ (id)initialAreasJSONTransformer;
+ (id)finalAreasJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initialAreas;
- (void)setInitialAreas:(id)arg0;
- (id)finalAreas;
- (void)setFinalAreas:(id)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (long long)height;
- (void)setAnimationDelay:(long long)arg0;
- (void)setWidth:(long long)arg0;
- (id)backgroundColor;
- (void)setHeight:(long long)arg0;
- (long long)width;
- (id)schema;
- (void)setBackgroundColor:(id)arg0;
- (long long)animationDelay;

@end
