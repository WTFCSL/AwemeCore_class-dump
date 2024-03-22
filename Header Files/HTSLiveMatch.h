//
//     Generated by private class-dump
//

@class NSString, HTSLiveAGMatchInfo, HTSLiveMatchLive;

@interface HTSLiveMatch : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long startTimeMs;
@property (copy, nonatomic) NSString *focus;
@property (nonatomic) int tagType;
@property (retain, nonatomic) HTSLiveAGMatchInfo *agMatchInfo;
@property (nonatomic) BOOL hasAgMatchInfo;
@property (retain, nonatomic) HTSLiveMatchLive *matchLive;
@property (nonatomic) BOOL hasMatchLive;
@property (copy, nonatomic) NSString *uniqueId;

+ (id)descriptor;

@end
