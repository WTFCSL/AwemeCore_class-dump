//
//     Generated by private class-dump
//

@class NSString, BDADWindmillModel;

@interface BDADAwemeModel : NSObject {
    BOOL _isAds;
    NSString *_itemID;
    BDADWindmillModel *_originAdInfo;
}

@property (nonatomic) BOOL isAds;
@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) BDADWindmillModel *originAdInfo;

- (id)originAdInfo;
- (BOOL)isAds;
- (void)setIsAds:(BOOL)arg0;
- (void)setOriginAdInfo:(id)arg0;
- (void).cxx_destruct;
- (id)itemID;
- (void)setItemID:(id)arg0;

@end
