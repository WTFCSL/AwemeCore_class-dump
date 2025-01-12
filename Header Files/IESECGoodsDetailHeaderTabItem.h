//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESECGoodsDetailHeaderTabItem : IESECBaseApiModel {
    unsigned long long _tabType;
    NSString *_tabName;
    long long _startIndex;
    long long _totalCount;
    NSDictionary *_trackParams;
}

@property (nonatomic) unsigned long long tabType;
@property (copy, nonatomic) NSString *tabName;
@property (nonatomic) long long startIndex;
@property (nonatomic) long long totalCount;
@property (copy, nonatomic) NSDictionary *trackParams;

+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)tabType;
- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (void)setTabType:(unsigned long long)arg0;
- (long long)startIndex;
- (void)setStartIndex:(long long)arg0;
- (void).cxx_destruct;
- (long long)totalCount;
- (void)setTotalCount:(long long)arg0;
- (void)setTabName:(id)arg0;
- (id)tabName;

@end
