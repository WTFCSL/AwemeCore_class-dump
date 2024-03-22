//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWENearbyUtilityMaskModel : AWEBaseApiModel {
    NSString *_normalStyleText;
    AWEURLModel *_normalStyleIconURLModel;
    NSString *_specialStyleText;
    AWEURLModel *_specialStyleIconURLModel;
    long long _type;
    long long _count;
}

@property (copy, nonatomic) NSString *normalStyleText;
@property (retain, nonatomic) AWEURLModel *normalStyleIconURLModel;
@property (copy, nonatomic) NSString *specialStyleText;
@property (retain, nonatomic) AWEURLModel *specialStyleIconURLModel;
@property (nonatomic) long long type;
@property (nonatomic) long long count;

+ (id)normalStyleIconURLModelJSONTransformer;
+ (id)specialStyleIconURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)normalStyleText;
- (id)normalStyleIconURLModel;
- (id)specialStyleText;
- (id)specialStyleIconURLModel;
- (void)setNormalStyleText:(id)arg0;
- (void)setNormalStyleIconURLModel:(id)arg0;
- (void)setSpecialStyleText:(id)arg0;
- (void)setSpecialStyleIconURLModel:(id)arg0;
- (void)setCount:(long long)arg0;
- (void).cxx_destruct;
- (long long)type;
- (BOOL)isValid;
- (void)setType:(long long)arg0;
- (long long)count;

@end
