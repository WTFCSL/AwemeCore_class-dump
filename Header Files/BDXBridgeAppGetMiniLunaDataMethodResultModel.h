//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDXBridgeAppGetMiniLunaDataMethodResultModel : BDXBridgeModel {
    NSString *_type;
    NSString *_msg;
    NSDictionary *_data;
    long long _code;
}

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSDictionary *data;
@property (nonatomic) long long code;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setCode:(long long)arg0;
- (id)data;
- (long long)code;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (id)type;
- (void)setType:(id)arg0;
- (id)msg;
- (void)setMsg:(id)arg0;

@end