//
//     Generated by private class-dump
//

@class IESECWinAuthorInfo, IESECRelationShoppingCartInfoModel;

@interface IESECWinAuthorInfoResponse : IESECBaseApiModel {
    IESECWinAuthorInfo *_authorInfo;
    IESECRelationShoppingCartInfoModel *_shoppingCartInfo;
}

@property (retain, nonatomic) IESECWinAuthorInfo *authorInfo;
@property (retain, nonatomic) IESECRelationShoppingCartInfoModel *shoppingCartInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setAuthorInfo:(id)arg0;
- (id)authorInfo;
- (id)shoppingCartInfo;
- (void)setShoppingCartInfo:(id)arg0;
- (void).cxx_destruct;

@end
