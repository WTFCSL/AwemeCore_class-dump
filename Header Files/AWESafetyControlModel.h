//
//     Generated by private class-dump
//

@interface AWESafetyControlModel : AWEBaseApiModel {
    BOOL _needVideoPlayCheck;
    long long _potentialRiskLevel;
}

@property (nonatomic) BOOL needVideoPlayCheck;
@property (nonatomic) long long potentialRiskLevel;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)needVideoPlayCheck;
- (void)setNeedVideoPlayCheck:(BOOL)arg0;
- (long long)potentialRiskLevel;
- (void)setPotentialRiskLevel:(long long)arg0;

@end
