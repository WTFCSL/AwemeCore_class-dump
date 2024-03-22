//
//     Generated by private class-dump
//

@class NSString;

@interface IESLivePinCommentParams : NSObject {
    NSString *_nickName;
    NSString *_content;
    long long _userId;
    long long _eventId;
    NSString *_contentType;
    long long _msgId;
    NSString *_scene;
}

@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long userId;
@property (nonatomic) long long eventId;
@property (copy, nonatomic) NSString *contentType;
@property (nonatomic) long long msgId;
@property (copy, nonatomic) NSString *scene;

- (void)setContentType:(id)arg0;
- (id)contentType;
- (void)setNickName:(id)arg0;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)content;
- (long long)userId;
- (void)setContent:(id)arg0;
- (id)nickName;
- (void)setUserId:(long long)arg0;
- (id)scene;
- (long long)msgId;
- (void)setMsgId:(long long)arg0;
- (long long)eventId;
- (void)setEventId:(long long)arg0;

@end
