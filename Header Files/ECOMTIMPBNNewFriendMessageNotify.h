//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, ECOMTIMPBNFriendCommandMessage;

@interface ECOMTIMPBNNewFriendMessageNotify : GPBMessage

@property (nonatomic) int messageType;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) long long fromId;
@property (nonatomic) BOOL hasFromId;
@property (nonatomic) long long toId;
@property (nonatomic) BOOL hasToId;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL hasContent;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;
@property (retain, nonatomic) ECOMTIMPBNFriendCommandMessage *message;
@property (nonatomic) BOOL hasMessage;

+ (id)descriptor;

@end
