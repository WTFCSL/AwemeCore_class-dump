//
//     Generated by private class-dump
//

@class NSString;

@interface AWEIMBaseNoticeSubscribeModelNew : AWEBaseApiModel {
    NSString *_name;
    long long _type;
    long long _unsubscribe;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (nonatomic) long long unsubscribe;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setUnsubscribe:(long long)arg0;
- (void).cxx_destruct;
- (long long)type;
- (long long)unsubscribe;
- (void)setType:(long long)arg0;
- (void)setName:(id)arg0;
- (id)name;

@end