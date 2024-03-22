//
//     Generated by private class-dump
//

@class NSArray, NSString, AWEPoiRankConfigModel, AWEURLModel;

@interface AWEPoiRankFeedResStruct : MTLModel <MTLJSONSerializing> {
    NSArray *_rankPOIs;
    NSString *_rankGenre;
    NSString *_rankTab;
    NSString *_detailRank;
    NSString *_rankPoiDistrict;
    NSString *_rankTitle;
    AWEURLModel *_rankBarIconURL;
    AWEURLModel *_rankFloatIconURL;
    NSString *_rankTopURL;
    NSString *_rankBottomURL;
    AWEPoiRankConfigModel *_rankConfig;
    long long _rankType;
    NSString *_ipName;
    NSString *_ipTheme;
    long long _rankFloatIconWidth;
    long long _rankFloatIconHeight;
    long long _rankBarIconWidth;
    long long _rankBarIconHeight;
}

@property (copy, nonatomic) NSArray *rankPOIs;
@property (copy, nonatomic) NSString *rankGenre;
@property (copy, nonatomic) NSString *rankTab;
@property (copy, nonatomic) NSString *detailRank;
@property (copy, nonatomic) NSString *rankPoiDistrict;
@property (copy, nonatomic) NSString *rankTitle;
@property (retain, nonatomic) AWEURLModel *rankBarIconURL;
@property (retain, nonatomic) AWEURLModel *rankFloatIconURL;
@property (copy, nonatomic) NSString *rankTopURL;
@property (copy, nonatomic) NSString *rankBottomURL;
@property (retain, nonatomic) AWEPoiRankConfigModel *rankConfig;
@property (nonatomic) long long rankType;
@property (copy, nonatomic) NSString *ipName;
@property (copy, nonatomic) NSString *ipTheme;
@property (nonatomic) long long rankFloatIconWidth;
@property (nonatomic) long long rankFloatIconHeight;
@property (nonatomic) long long rankBarIconWidth;
@property (nonatomic) long long rankBarIconHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rankPOIsJSONTransformer;
+ (id)rankBarIconUrlJSONTransformer;
+ (id)rankFloatIconUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)rankTitle;
- (void)setRankTitle:(id)arg0;
- (id)rankBarIconURL;
- (id)rankFloatIconURL;
- (id)rankGenre;
- (id)rankTab;
- (id)detailRank;
- (id)rankPoiDistrict;
- (id)rankTopURL;
- (id)rankBottomURL;
- (id)ipName;
- (id)ipTheme;
- (long long)rankFloatIconWidth;
- (long long)rankFloatIconHeight;
- (long long)rankBarIconWidth;
- (long long)rankBarIconHeight;
- (void)setRankGenre:(id)arg0;
- (void)setRankTab:(id)arg0;
- (void)setDetailRank:(id)arg0;
- (void)setRankPoiDistrict:(id)arg0;
- (void)setRankBarIconURL:(id)arg0;
- (void)setRankFloatIconURL:(id)arg0;
- (id)rankConfig;
- (void)setRankConfig:(id)arg0;
- (void)setIpName:(id)arg0;
- (void)setIpTheme:(id)arg0;
- (void)setRankFloatIconWidth:(long long)arg0;
- (void)setRankFloatIconHeight:(long long)arg0;
- (void)setRankBarIconWidth:(long long)arg0;
- (void)setRankBarIconHeight:(long long)arg0;
- (id)rankPOIs;
- (void)setRankBottomURL:(id)arg0;
- (void)setRankTopURL:(id)arg0;
- (void)setRankPOIs:(id)arg0;
- (void).cxx_destruct;
- (void)setRankType:(long long)arg0;
- (long long)rankType;

@end
