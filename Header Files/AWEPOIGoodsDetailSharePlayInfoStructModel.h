//
//     Generated by private class-dump
//

@class AWEPOIGoodsDetailSharePlayInfoModel, NSString;

@interface AWEPOIGoodsDetailSharePlayInfoStructModel : MTLModel <MTLJSONSerializing> {
    AWEPOIGoodsDetailSharePlayInfoModel *_sharePlayInfo;
    long long _statusCode;
    NSString *_statusMessage;
}

@property (retain, nonatomic) AWEPOIGoodsDetailSharePlayInfoModel *sharePlayInfo;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharePlayInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)sharePlayInfo;
- (void)setSharePlayInfo:(id)arg0;
- (long long)statusCode;
- (void)setStatusCode:(long long)arg0;
- (void).cxx_destruct;
- (id)statusMessage;
- (void)setStatusMessage:(id)arg0;

@end
