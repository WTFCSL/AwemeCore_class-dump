//
//     Generated by private class-dump
//

@class NSString;

@interface IESLivePinCommentAnswerParams : NSObject {
    NSString *_nickName;
    long long _userId;
    NSString *_userNums;
    NSString *_describe;
    NSString *_content;
    long long _answerMsgId;
    long long _msgId;
    NSString *_scene;
}

@property (copy, nonatomic) NSString *nickName;
@property (nonatomic) long long userId;
@property (copy, nonatomic) NSString *userNums;
@property (copy, nonatomic) NSString *describe;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long answerMsgId;
@property (nonatomic) long long msgId;
@property (copy, nonatomic) NSString *scene;

- (void)setDescribe:(id)arg0;
- (void)setUserNums:(id)arg0;
- (long long)answerMsgId;
- (void)setAnswerMsgId:(long long)arg0;
- (id)userNums;
- (void)setNickName:(id)arg0;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)content;
- (long long)userId;
- (void)setContent:(id)arg0;
- (id)nickName;
- (void)setUserId:(long long)arg0;
- (id)scene;
- (id)describe;
- (long long)msgId;
- (void)setMsgId:(long long)arg0;

@end