//
//     Generated by private class-dump
//

@class NSString, ReportMidiScoreResponse_UserInfo;

@interface ReportMidiScoreResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) long long rankPercent;
@property (retain, nonatomic) ReportMidiScoreResponse_UserInfo *singerUserInfo;
@property (nonatomic) BOOL hasSingerUserInfo;
@property (nonatomic) BOOL isHighScoreSinging;
@property (nonatomic) double highScoreSongThreshold;
@property (copy, nonatomic) NSString *highScoreFeedbackText;
@property (copy, nonatomic) NSString *notHighScoreFeedbackText;
@property (copy, nonatomic) NSString *componentHighScoreEndingText;
@property (copy, nonatomic) NSString *componentNotHighScoreEndingText;
@property (nonatomic) BOOL ifSingForEnoughTime;

+ (id)descriptor;

@end
