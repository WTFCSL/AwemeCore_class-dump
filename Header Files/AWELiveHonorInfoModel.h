//
//     Generated by private class-dump
//

@class NSNumber;

@interface AWELiveHonorInfoModel : AWEBaseApiModel {
    NSNumber *_honorLevel;
    NSNumber *_honorScore;
}

@property (retain, nonatomic) NSNumber *honorLevel;
@property (retain, nonatomic) NSNumber *honorScore;

+ (id)JSONKeyPathsByPropertyKey;

- (id)honorLevel;
- (BOOL)hasUnlockedSecondaryBarrage;
- (BOOL)hasUnlockedSecondaryEntryAnimation;
- (void)setHonorLevel:(id)arg0;
- (id)honorScore;
- (void)setHonorScore:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg0;

@end
