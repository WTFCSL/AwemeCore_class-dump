//
//     Generated by private class-dump
//

@class AWELocalDBUserModel;

@interface AWELocalUserOperationModel : AWEBaseApiModel {
    long long _opType;
    AWELocalDBUserModel *_user;
}

@property (nonatomic) long long opType;
@property (retain, nonatomic) AWELocalDBUserModel *user;

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)opType;
- (void)setOpType:(long long)arg0;
- (void)setUser:(id)arg0;
- (id)user;
- (void).cxx_destruct;

@end
