//
//     Generated by private class-dump
//

@class NSString;

@interface IMShareRecordStructV2 : GPBMessage

@property (nonatomic) long long fromUid;
@property (nonatomic) BOOL hasFromUid;
@property (nonatomic) long long messageId;
@property (nonatomic) BOOL hasMessageId;
@property (nonatomic) long long convShortId;
@property (nonatomic) BOOL hasConvShortId;
@property (copy, nonatomic) NSString *clientMessageId;
@property (nonatomic) BOOL hasClientMessageId;
@property (copy, nonatomic) NSString *convId;
@property (nonatomic) BOOL hasConvId;
@property (nonatomic) long long attachMsgId;
@property (nonatomic) BOOL hasAttachMsgId;
@property (copy, nonatomic) NSString *attachMsgContent;
@property (nonatomic) BOOL hasAttachMsgContent;
@property (copy, nonatomic) NSString *attachClientMessageId;
@property (nonatomic) BOOL hasAttachClientMessageId;
@property (copy, nonatomic) NSString *shareId;
@property (nonatomic) BOOL hasShareId;

+ (id)descriptor;

@end