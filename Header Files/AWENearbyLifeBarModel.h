//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWENearbyLifeBarModel : AWEBaseApiModel {
    NSString *_title;
    AWEURLModel *_iconURLModel;
    NSString *_schema;
    NSString *_distanceMinM;
    NSString *_l1Name;
    NSString *_l2Name;
    NSString *_l3Name;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *iconURLModel;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *distanceMinM;
@property (copy, nonatomic) NSString *l1Name;
@property (copy, nonatomic) NSString *l2Name;
@property (copy, nonatomic) NSString *l3Name;

+ (id)iconURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)iconURLModel;
- (void)setIconURLModel:(id)arg0;
- (id)distanceMinM;
- (void)setDistanceMinM:(id)arg0;
- (id)l1Name;
- (void)setL1Name:(id)arg0;
- (id)l2Name;
- (void)setL2Name:(id)arg0;
- (id)l3Name;
- (void)setL3Name:(id)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (id)schema;
- (void)setTitle:(id)arg0;

@end
