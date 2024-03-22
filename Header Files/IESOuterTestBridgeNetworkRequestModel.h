//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESOuterTestBridgeNetworkRequestModel : MTLModel <MTLJSONSerializing> {
    NSString *_url;
    NSString *_method;
    NSDictionary *_params;
    NSDictionary *_data;
}

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)data;
- (void).cxx_destruct;
- (id)method;
- (void)setMethod:(id)arg0;
- (void)setData:(id)arg0;
- (void)setUrl:(id)arg0;
- (id)params;
- (id)url;
- (void)setParams:(id)arg0;

@end
