//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface LSIMSendMessage : NSObject {
    NSString *_sender;
    NSString *_createTime;
    long long _senderRoleType;
    NSString *_pigeonBizType;
    NSString *_bizRole;
    NSString *_pigeonMessageType;
    NSDictionary *_originExt;
    NSDictionary *_bizExt;
    NSDictionary *_localExt;
}

@property (copy, nonatomic) NSString *sender;
@property (copy, nonatomic) NSString *createTime;
@property (nonatomic) long long senderRoleType;
@property (copy, nonatomic) NSString *pigeonBizType;
@property (copy, nonatomic) NSString *bizRole;
@property (copy, nonatomic) NSString *pigeonMessageType;
@property (copy, nonatomic) NSDictionary *originExt;
@property (copy, nonatomic) NSDictionary *bizExt;
@property (copy, nonatomic) NSDictionary *localExt;

- (void)setBizExt:(id)arg0;
- (id)localExt;
- (void)setLocalExt:(id)arg0;
- (id)bizRole;
- (void)setBizRole:(id)arg0;
- (void)setPigeonBizType:(id)arg0;
- (id)pigeonBizType;
- (id)originExt;
- (id)bizExt;
- (id)pigeonMessageType;
- (long long)senderRoleType;
- (void)setSenderRoleType:(long long)arg0;
- (void)setOriginExt:(id)arg0;
- (void)setPigeonMessageType:(id)arg0;
- (void)setSender:(id)arg0;
- (void).cxx_destruct;
- (id)sender;
- (void)setCreateTime:(id)arg0;
- (id)createTime;

@end
