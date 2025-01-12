//
//     Generated by private class-dump
//

@class HTSLiveUser, NSString, NSDictionary, NSNumber;

@interface IESLiveAudienceModel : IESLiveDynamicMTLModel <MTLJSONSerializing> {
    BOOL _isAnchor;
    NSString *_exactlyScore;
    NSNumber *_isRich;
    long long _scoreType;
}

@property (retain, nonatomic) HTSLiveUser *user;
@property (retain, nonatomic) NSNumber *rank;
@property (retain, nonatomic) NSNumber *firePowerCount;
@property (retain, nonatomic) NSString *firePowerStr;
@property (retain, nonatomic) NSString *exactlyScore;
@property (copy, nonatomic) NSString *gapDescription;
@property (retain, nonatomic) NSNumber *delta;
@property (readonly, nonatomic) NSNumber *isRich;
@property (nonatomic) BOOL rankInTotal;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) BOOL relationTagBadgeShowTracked;
@property (nonatomic) long long relationTagBadgeType;
@property (nonatomic) long long scoreType;
@property (copy, nonatomic) NSString *scoreStr;
@property (nonatomic) BOOL isAnchor;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setIsAnchor:(BOOL)arg0;
- (id)exactlyScore;
- (void)setExactlyScore:(id)arg0;
- (void)setScoreType:(long long)arg0;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (id)isRich;
- (long long)scoreType;

@end
