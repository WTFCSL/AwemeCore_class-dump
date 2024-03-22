//
//     Generated by private class-dump
//

@class NSString, NSNumber, AWEURLModel;

@interface AWESearchNewEffectsDetailItemModel : AWEBaseApiModel {
    NSString *_ID;
    NSString *_name;
    NSNumber *_useCount;
    AWEURLModel *_iconURL;
    NSString *_desc;
    long long _effectType;
    long long _mvType;
}

@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *useCount;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) long long effectType;
@property (nonatomic) long long mvType;

+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)mvType;
- (void)setMvType:(long long)arg0;
- (id)desc;
- (id)ID;
- (long long)effectType;
- (void)setID:(id)arg0;
- (void).cxx_destruct;
- (void)setIconURL:(id)arg0;
- (id)iconURL;
- (void)setUseCount:(id)arg0;
- (void)setName:(id)arg0;
- (id)useCount;
- (void)setDesc:(id)arg0;
- (id)name;
- (void)setEffectType:(long long)arg0;

@end
