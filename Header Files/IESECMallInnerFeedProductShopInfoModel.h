//
//     Generated by private class-dump
//

@class NSDictionary, NSString, IESECMallInnerFeedProductShopBaseInfoModel;

@interface IESECMallInnerFeedProductShopInfoModel : MTLModel <MTLJSONSerializing> {
    BOOL _isLive;
    IESECMallInnerFeedProductShopBaseInfoModel *_base;
    NSDictionary *_custom;
}

@property (copy, nonatomic) IESECMallInnerFeedProductShopBaseInfoModel *base;
@property (nonatomic) BOOL isLive;
@property (retain, nonatomic) NSDictionary *custom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isLive;
- (void).cxx_destruct;
- (void)setBase:(id)arg0;
- (id)base;
- (id)custom;
- (void)setCustom:(id)arg0;
- (void)setIsLive:(BOOL)arg0;

@end