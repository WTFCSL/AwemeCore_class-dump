//
//     Generated by private class-dump
//

@class NSString;

@protocol ECOMTIMConversationOperationResponse <NSObject>

@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) long long checkCode;
@property (readonly, copy, nonatomic) NSString *checkMessage;
@property (readonly, copy, nonatomic) NSString *extraInfo;

- (id)checkMessage;
- (long long)checkCode;
- (int)status;
- (id)extraInfo;

@end
