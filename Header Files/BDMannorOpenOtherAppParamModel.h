//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDMannorOpenOtherAppParamModel : BDXBridgeModel {
    NSString *_url;
    NSString *_refer;
    NSString *_tag;
    NSDictionary *_extra;
    NSDictionary *_adExtraData;
}

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *adExtraData;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (void)setAdExtraData:(id)arg0;
- (id)adExtraData;
- (void)setRefer:(id)arg0;
- (id)refer;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (id)extra;
- (void)setTag:(id)arg0;
- (id)tag;
- (id)url;

@end
