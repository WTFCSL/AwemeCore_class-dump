//
//     Generated by private class-dump
//

@class NSString, NSDate;

@protocol IESIMMessagePropertyItemProtocol

@property (copy, nonatomic) NSString *idempotentID;
@property (nonatomic) long long sender;
@property (copy, nonatomic) NSString *senderSecID;
@property (retain, nonatomic) NSDate *createdAt;
@property (copy, nonatomic) NSString *value;

- (id)senderSecID;
- (void)setSenderSecID:(id)arg0;
- (void)setIdempotentID:(id)arg0;
- (id)idempotentID;
- (void)setSender:(long long)arg0;
- (long long)sender;
- (id)value;
- (void)setCreatedAt:(id)arg0;
- (void)setValue:(id)arg0;
- (id)createdAt;

@end
