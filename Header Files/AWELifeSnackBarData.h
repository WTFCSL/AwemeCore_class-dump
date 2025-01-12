//
//     Generated by private class-dump
//

@class NSString;

@interface AWELifeSnackBarData : AWEBaseApiModel {
    BOOL _enable;
    BOOL _needNearbyDefault;
    NSString *_text;
    NSString *_grouponText;
    long long _lifePageType;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *grouponText;
@property (nonatomic) BOOL enable;
@property (nonatomic) long long lifePageType;
@property (nonatomic) BOOL needNearbyDefault;

+ (BOOL)automaticallyDefaultMapping;

- (id)grouponText;
- (void)setGrouponText:(id)arg0;
- (long long)lifePageType;
- (void)setLifePageType:(long long)arg0;
- (BOOL)needNearbyDefault;
- (void)setNeedNearbyDefault:(BOOL)arg0;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)text;
- (void)setEnable:(BOOL)arg0;

@end
