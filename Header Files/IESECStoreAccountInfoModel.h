//
//     Generated by private class-dump
//

@class IESECShopValueInfoItem;

@interface IESECStoreAccountInfoModel : NSObject {
    BOOL _showAccountInfo;
    IESECShopValueInfoItem *_fansValueItem;
    IESECShopValueInfoItem *_salesValueItem;
    IESECShopValueInfoItem *_worksValueItem;
}

@property (nonatomic) BOOL showAccountInfo;
@property (copy, nonatomic) IESECShopValueInfoItem *fansValueItem;
@property (copy, nonatomic) IESECShopValueInfoItem *salesValueItem;
@property (copy, nonatomic) IESECShopValueInfoItem *worksValueItem;

- (id)fansValueItem;
- (id)salesValueItem;
- (id)worksValueItem;
- (BOOL)showAccountInfo;
- (void)setShowAccountInfo:(BOOL)arg0;
- (void)setFansValueItem:(id)arg0;
- (void)setSalesValueItem:(id)arg0;
- (void)setWorksValueItem:(id)arg0;
- (void).cxx_destruct;

@end
