//
//     Generated by private class-dump
//

@class BDXBridgePoiLocationServiceError;

@interface BDXBridgePoiLocationServiceMethodResultModel : BDXBridgeModel {
    BOOL _allow;
    BDXBridgePoiLocationServiceError *_error;
}

@property (nonatomic) BOOL allow;
@property (retain, nonatomic) BDXBridgePoiLocationServiceError *error;

+ (id)errorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setAllow:(BOOL)arg0;
- (BOOL)allow;
- (void).cxx_destruct;
- (void)setError:(id)arg0;
- (id)error;

@end
