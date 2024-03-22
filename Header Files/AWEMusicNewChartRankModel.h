//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEMusicNewChartRankModel : AWEBaseDataModel {
    int _heat;
    int _rankTrend;
    NSString *_rankId;
    NSString *_desc;
    NSString *_detailUrl;
    NSNumber *_rank;
}

@property (copy, nonatomic) NSString *rankId;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *detailUrl;
@property (retain, nonatomic) NSNumber *rank;
@property (nonatomic) int heat;
@property (nonatomic) int rankTrend;

+ (id)JSONKeyPathsByPropertyKey;

- (id)detailUrl;
- (void)setDetailUrl:(id)arg0;
- (id)rankId;
- (void)setRankId:(id)arg0;
- (int)heat;
- (void)setHeat:(int)arg0;
- (int)rankTrend;
- (void)setRankTrend:(int)arg0;
- (id)desc;
- (void)setRank:(id)arg0;
- (id)rank;
- (void).cxx_destruct;
- (void)setDesc:(id)arg0;

@end