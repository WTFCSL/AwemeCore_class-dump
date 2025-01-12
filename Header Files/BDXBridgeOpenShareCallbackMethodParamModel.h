//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDXBridgeOpenShareCallbackMethodParamModel : BDXBridgeModel {
    NSString *_type;
    NSString *_openShareId;
    NSDictionary *_data;
}

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *openShareId;
@property (copy, nonatomic) NSDictionary *data;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)openShareId;
- (void)setOpenShareId:(id)arg0;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (id)type;
- (void)setType:(id)arg0;

@end
