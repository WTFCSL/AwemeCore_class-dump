//
//     Generated by private class-dump
//

@interface AWEClientCacheStrategy : AWEBaseApiModel {
    unsigned long long _action;
    long long _operationReason;
}

@property (nonatomic) unsigned long long action;
@property (nonatomic) long long operationReason;

+ (id)actionReasonJSONTransformer;
+ (id)operationReasonJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)operationReason;
- (void)setOperationReason:(long long)arg0;
- (void)setAction:(unsigned long long)arg0;
- (unsigned long long)action;

@end