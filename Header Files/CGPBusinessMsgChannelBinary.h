//
//     Generated by private class-dump
//

@class NSString, CGPBusinessMsgChannelBinary_MsgChannelMsg;

@interface CGPBusinessMsgChannelBinary : GPBMessage

@property (retain, nonatomic) CGPBusinessMsgChannelBinary_MsgChannelMsg *payload;
@property (nonatomic) BOOL hasPayload;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *ackId;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *destUserId;

+ (id)descriptor;

@end