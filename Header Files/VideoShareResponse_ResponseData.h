//
//     Generated by private class-dump
//

@class NSString, HTSLiveText, HTSLiveUser;

@interface VideoShareResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) long long msgId;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long itemId;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long itemType;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (copy, nonatomic) NSString *itemIdStr;
@property (copy, nonatomic) NSString *itemTypeStr;
@property (nonatomic) long long authorId;

+ (id)descriptor;

@end
