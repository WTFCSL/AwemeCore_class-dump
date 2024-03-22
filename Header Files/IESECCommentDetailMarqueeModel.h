//
//     Generated by private class-dump
//

@class NSString;

@interface IESECCommentDetailMarqueeModel : MTLModel <MTLJSONSerializing> {
    NSString *_userAvatar;
    NSString *_userName;
    NSString *_marqueeMessage;
    long long _messageType;
}

@property (copy, nonatomic) NSString *userAvatar;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *marqueeMessage;
@property (nonatomic) long long messageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)userAvatar;
- (void)setUserAvatar:(id)arg0;
- (id)marqueeMessage;
- (void)setMarqueeMessage:(id)arg0;
- (long long)messageType;
- (id)userName;
- (void).cxx_destruct;
- (void)setUserName:(id)arg0;
- (void)setMessageType:(long long)arg0;

@end
