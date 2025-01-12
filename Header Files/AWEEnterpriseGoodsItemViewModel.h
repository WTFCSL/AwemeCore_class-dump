//
//     Generated by private class-dump
//

@class NSString, AWEEnterpriseIMMessageGoodsItemModel;

@interface AWEEnterpriseGoodsItemViewModel : NSObject {
    BOOL _hasSubTitle;
    NSString *_mainTitle;
    NSString *_subTitle;
    NSString *_priceString;
    NSString *_avatarUrl;
    AWEEnterpriseIMMessageGoodsItemModel *_detailData;
}

@property (retain, nonatomic) AWEEnterpriseIMMessageGoodsItemModel *detailData;
@property (nonatomic) BOOL hasSubTitle;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *priceString;
@property (copy, nonatomic) NSString *avatarUrl;

- (void)setAvatarUrl:(id)arg0;
- (id)avatarUrl;
- (void)configWithData:(id)arg0;
- (id)detailData;
- (void)setDetailData:(id)arg0;
- (id)convertPrice:(id)arg0;
- (BOOL)hasSubTitle;
- (void)setHasSubTitle:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (id)priceString;
- (id)mainTitle;
- (void)setMainTitle:(id)arg0;
- (void)setPriceString:(id)arg0;

@end
