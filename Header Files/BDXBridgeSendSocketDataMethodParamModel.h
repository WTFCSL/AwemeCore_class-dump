//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeSendSocketDataMethodParamModel : BDXBridgeModel {
    NSString *_socketTaskID;
    id _data;
    unsigned long long _dataType;
}

@property (copy, nonatomic) NSString *socketTaskID;
@property (retain, nonatomic) id data;
@property (nonatomic) unsigned long long dataType;

+ (id)requiredKeyPaths;
+ (id)dataTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)socketTaskID;
- (void)setSocketTaskID:(id)arg0;
- (void)setDataType:(unsigned long long)arg0;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (unsigned long long)dataType;

@end
