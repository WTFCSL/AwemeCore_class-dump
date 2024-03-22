//
//     Generated by private class-dump
//

@class NSString, NSArray, BDXBridgeOpenAwemeDetailListBizParams, NSDictionary;

@interface BDXBridgeOpenAwemeDetailListMethodParamModel : BDXBridgeModel {
    NSString *_currentAwemeID;
    NSString *_enterFrom;
    NSString *_detailExtensionKey;
    NSArray *_awemeList;
    BDXBridgeOpenAwemeDetailListBizParams *_bizParams;
    NSDictionary *_logExtra;
    NSDictionary *_shootActivityMobJSON;
}

@property (copy, nonatomic) NSString *currentAwemeID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *detailExtensionKey;
@property (retain, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) BDXBridgeOpenAwemeDetailListBizParams *bizParams;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSDictionary *shootActivityMobJSON;

+ (id)requiredKeyPaths;
+ (id)bizParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setEnterFrom:(id)arg0;
- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (id)enterFrom;
- (id)currentAwemeID;
- (id)awemeList;
- (void)setAwemeList:(id)arg0;
- (id)bizParams;
- (void)setBizParams:(id)arg0;
- (void)setCurrentAwemeID:(id)arg0;
- (id)detailExtensionKey;
- (id)shootActivityMobJSON;
- (void)setDetailExtensionKey:(id)arg0;
- (void)setShootActivityMobJSON:(id)arg0;
- (void).cxx_destruct;

@end
