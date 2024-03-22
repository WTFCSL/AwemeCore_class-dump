//
//     Generated by private class-dump
//

@class NSString;

@interface AWEECOMIMChatTopInfoButton : MTLModel <MTLJSONSerializing> {
    NSString *_buttonName;
    NSString *_urlString;
    NSString *_skuURLString;
    NSString *_detailURLString;
    NSString *_btmDid;
}

@property (copy, nonatomic) NSString *buttonName;
@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *skuURLString;
@property (copy, nonatomic) NSString *detailURLString;
@property (copy, nonatomic) NSString *btmDid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setButtonName:(id)arg0;
- (id)btmDid;
- (void)setBtmDid:(id)arg0;
- (id)skuURLString;
- (void)setSkuURLString:(id)arg0;
- (id)detailURLString;
- (void)setDetailURLString:(id)arg0;
- (id)goodsCardSkipURLString;
- (id)urlString;
- (void).cxx_destruct;
- (void)setUrlString:(id)arg0;
- (id)buttonName;

@end
