//
//     Generated by private class-dump
//

@class NSString;

@interface AWECommentAdComponent : AWEBaseApiModel {
    unsigned long long _type;
    NSString *_adPageID;
    NSString *_adID;
    NSString *_creativeID;
    NSString *_clickID;
    NSString *_advertiserID;
    NSString *_adComponentID;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *adPageID;
@property (copy, nonatomic) NSString *adID;
@property (copy, nonatomic) NSString *creativeID;
@property (copy, nonatomic) NSString *clickID;
@property (copy, nonatomic) NSString *advertiserID;
@property (copy, nonatomic) NSString *adComponentID;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setCreativeID:(id)arg0;
- (id)adID;
- (void)setAdID:(id)arg0;
- (id)adPageID;
- (void)setAdPageID:(id)arg0;
- (id)clickID;
- (void)setClickID:(id)arg0;
- (id)advertiserID;
- (void)setAdvertiserID:(id)arg0;
- (id)adComponentID;
- (void)setAdComponentID:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (id)creativeID;

@end
