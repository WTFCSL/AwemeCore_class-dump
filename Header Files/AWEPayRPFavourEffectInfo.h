//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPayRPFavourEffectInfo : AWEBaseApiModel {
    BOOL _hasEffect;
    NSString *_effectKey;
}

@property (nonatomic) BOOL hasEffect;
@property (copy, nonatomic) NSString *effectKey;

+ (id)JSONKeyPathsByPropertyKey;

- (id)effectKey;
- (void)setEffectKey:(id)arg0;
- (void).cxx_destruct;
- (void)setHasEffect:(BOOL)arg0;
- (BOOL)hasEffect;

@end
