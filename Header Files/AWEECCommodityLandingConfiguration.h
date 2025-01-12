//
//     Generated by private class-dump
//

@class NSString;

@interface AWEECCommodityLandingConfiguration : NSObject {
    BOOL _disableRelatedMerchandises;
    BOOL _isOptAB;
    NSString *_commodityID;
    long long _landingType;
    NSString *_keyword;
    NSString *_itemID;
    NSString *_sourceBtmToken;
}

@property (copy, nonatomic) NSString *commodityID;
@property (nonatomic) long long landingType;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) BOOL disableRelatedMerchandises;
@property (nonatomic) BOOL isOptAB;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *sourceBtmToken;

- (void)setSourceBtmToken:(id)arg0;
- (id)sourceBtmToken;
- (long long)landingType;
- (void)setLandingType:(long long)arg0;
- (BOOL)isOptAB;
- (void)setIsOptAB:(BOOL)arg0;
- (id)commodityID;
- (void)setCommodityID:(id)arg0;
- (BOOL)disableRelatedMerchandises;
- (void)setDisableRelatedMerchandises:(BOOL)arg0;
- (void).cxx_destruct;
- (id)itemID;
- (void)setItemID:(id)arg0;
- (void)setKeyword:(id)arg0;
- (id)keyword;

@end
