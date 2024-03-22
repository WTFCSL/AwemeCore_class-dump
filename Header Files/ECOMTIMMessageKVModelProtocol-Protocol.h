//
//     Generated by private class-dump
//

@class NSString;

@protocol ECOMTIMMessageKVModelProtocol <NSObject>

+ (id)referMessageKeyWithServerMessageID:(long long)arg0;
+ (id)referRootMessageQueryChildrenKeyWithRootMessageServerID:(long long)arg0;

@property (copy, nonatomic) NSString *belongingMessageID;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *value;

- (void)refreshWithMessageID:(id)arg0 key:(id)arg1 value:(id)arg2;
- (id)belongingMessageID;
- (void)setBelongingMessageID:(id)arg0;
- (id)key;
- (id)value;
- (void)setKey:(id)arg0;
- (void)setValue:(id)arg0;

@end