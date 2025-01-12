//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWEPOIRankContentItemModel : AWEPOIContentItemModel {
    BOOL _isMain;
    NSString *_brandID;
    NSString *_cardType;
    AWEURLModel *_poiRankScoreIconURL;
}

@property (copy, nonatomic) NSString *brandID;
@property (copy, nonatomic) NSString *cardType;
@property (retain, nonatomic) AWEURLModel *poiRankScoreIconURL;
@property (nonatomic) BOOL isMain;

+ (id)poiRankScoreIconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setIsMain:(BOOL)arg0;
- (id)poiRankScoreIconURL;
- (void)setPoiRankScoreIconURL:(id)arg0;
- (void).cxx_destruct;
- (id)cardType;
- (void)setCardType:(id)arg0;
- (BOOL)isMain;
- (id)brandID;
- (void)setBrandID:(id)arg0;

@end
