//
//     Generated by private class-dump
//

@class NSArray, NSNumber, AWESearchMerchandiseMainPictureRegionAnimation;

@interface AWESearchMerchandiseMainPictureRegion : AWEBaseApiModel {
    NSArray *_iconTagElementList;
    NSNumber *_onlyServerIcon;
    AWESearchMerchandiseMainPictureRegionAnimation *_animation;
}

@property (retain, nonatomic) NSArray *iconTagElementList;
@property (retain, nonatomic) NSNumber *onlyServerIcon;
@property (retain, nonatomic) AWESearchMerchandiseMainPictureRegionAnimation *animation;

+ (id)iconTagElementListJSONTransformer;
+ (id)animationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)iconTagElementList;
- (void)setIconTagElementList:(id)arg0;
- (id)onlyServerIcon;
- (void)setOnlyServerIcon:(id)arg0;
- (void).cxx_destruct;
- (id)animation;
- (void)setAnimation:(id)arg0;

@end
