//
//     Generated by private class-dump
//

@class NSString;

@interface PrivacyFailInfoStructV2 : GPBMessage

@property (nonatomic) int code;
@property (nonatomic) BOOL hasCode;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) BOOL hasReason;
@property (copy, nonatomic) NSString *msg;
@property (nonatomic) BOOL hasMsg;

+ (id)descriptor;

- (id)msg;
- (id)reason;
- (int)code;

@end
