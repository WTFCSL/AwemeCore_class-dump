//
//     Generated by private class-dump
//

@class NSString, HTSLiveUser;

@interface PersonalKaraokeKtvLiveRoomRecommendResponse_RecommendItem : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long inroomUserCount;
@property (copy, nonatomic) NSString *singingSongTxt;

+ (id)descriptor;

@end
