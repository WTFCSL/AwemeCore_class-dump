//
//     Generated by private class-dump
//

@class NSString, IESECURLModel, NSNumber;

@interface IESECGoodsRecommendReasonModel : MTLModel <MTLJSONSerializing> {
    IESECURLModel *_coverIcon;
    NSString *_recommendContent;
    NSString *_schema;
    long long _reasonType;
    NSString *_rankID;
    NSNumber *_rank;
    unsigned long long _rankListStyle;
}

@property (retain, nonatomic) IESECURLModel *coverIcon;
@property (copy, nonatomic) NSString *recommendContent;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long reasonType;
@property (copy, nonatomic) NSString *rankID;
@property (retain, nonatomic) NSNumber *rank;
@property (nonatomic) unsigned long long rankListStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)rankID;
- (void)setRankID:(id)arg0;
- (unsigned long long)rankListStyle;
- (void)setRankListStyle:(unsigned long long)arg0;
- (id)recommendContent;
- (void)setRecommendContent:(id)arg0;
- (id)coverIcon;
- (void)setCoverIcon:(id)arg0;
- (long long)reasonType;
- (void)setSchema:(id)arg0;
- (void)setReasonType:(long long)arg0;
- (void)setRank:(id)arg0;
- (id)rank;
- (void).cxx_destruct;
- (id)schema;

@end
