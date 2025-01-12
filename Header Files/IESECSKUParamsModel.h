//
//     Generated by private class-dump
//

@class IESECSKUProductInfoParamsModel, NSString, NSArray, IESECSKUPlatformParamsParamsModel, NSDictionary, IESECSKUUserInfoParamsModel, IESECSKUCustomParamsParamsModel, IESECSKUChainInfoParamsModel, IESECSKUClientParamsParamsModel, IESECSKUBizContextParamsModel;

@interface IESECSKUParamsModel : MTLModel <MTLJSONSerializing> {
    IESECSKUProductInfoParamsModel *_productInfo;
    IESECSKUUserInfoParamsModel *_userInfo;
    IESECSKUClientParamsParamsModel *_clientParams;
    IESECSKUPlatformParamsParamsModel *_platformParams;
    NSArray *_passThrough;
    IESECSKUChainInfoParamsModel *_chainInfo;
    IESECSKUBizContextParamsModel *_bizContext;
    IESECSKUCustomParamsParamsModel *_customParams;
    NSString *_sourceBtmToken;
    NSDictionary *_orderParams;
}

@property (readonly, nonatomic) NSString *hotSaleSkuId;
@property (readonly, nonatomic) NSString *creativeID;
@property (retain, nonatomic) IESECSKUProductInfoParamsModel *productInfo;
@property (retain, nonatomic) IESECSKUUserInfoParamsModel *userInfo;
@property (retain, nonatomic) IESECSKUClientParamsParamsModel *clientParams;
@property (retain, nonatomic) IESECSKUPlatformParamsParamsModel *platformParams;
@property (retain, nonatomic) NSArray *passThrough;
@property (retain, nonatomic) IESECSKUChainInfoParamsModel *chainInfo;
@property (retain, nonatomic) IESECSKUBizContextParamsModel *bizContext;
@property (retain, nonatomic) IESECSKUCustomParamsParamsModel *customParams;
@property (copy, nonatomic) NSString *sourceBtmToken;
@property (retain, nonatomic) NSDictionary *orderParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)schemaV2ParamsFromShowRequest:(id)arg0;
+ (id)schemaV2ParamsFromNativeContext:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
+ (id)schemaV2ParamsFromOriginParams:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
+ (id)schemaV2ParamsFromJSBParams:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
+ (id)schemaParamsFilterWhiteList:(id)arg0;
+ (id)schemaParamsFilterValue:(id)arg0;
+ (id)generatePassthroughParamsWithParams:(id)arg0;
+ (id)passThroughJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setSourceBtmToken:(id)arg0;
- (id)bizContext;
- (void)setBizContext:(id)arg0;
- (id)sourceBtmToken;
- (void)setCustomParams:(id)arg0;
- (id)customParams;
- (id)orderParams;
- (id)hotSaleSkuId;
- (void)setOrderParams:(id)arg0;
- (id)findPassThroughData:(id)arg0;
- (id)platformParams;
- (void)setPlatformParams:(id)arg0;
- (void)setChainInfo:(id)arg0;
- (id)productInfo;
- (void).cxx_destruct;
- (void)setUserInfo:(id)arg0;
- (id)userInfo;
- (void)setProductInfo:(id)arg0;
- (id)chainInfo;
- (void)setClientParams:(id)arg0;
- (id)passThrough;
- (void)setPassThrough:(id)arg0;
- (id)creativeID;
- (id)clientParams;

@end
