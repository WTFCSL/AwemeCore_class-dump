//
//     Generated by private class-dump
//

@class NSString, HTSLivePinCommon;

@interface HTSLiveHighlightDataAnswer : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *scene;
@property (nonatomic) long long answerId;
@property (copy, nonatomic) NSString *question;
@property (copy, nonatomic) NSString *answer;
@property (nonatomic) long long audienceNumber;
@property (copy, nonatomic) NSString *audienceNumberStr;
@property (copy, nonatomic) NSString *nickName;
@property (nonatomic) long long anchorId;
@property (nonatomic) long long commenterId;
@property (nonatomic) long long questionMsgId;
@property (nonatomic) long long answerMsgId;
@property (retain, nonatomic) HTSLivePinCommon *pinCommon;
@property (nonatomic) BOOL hasPinCommon;

+ (id)descriptor;

@end
