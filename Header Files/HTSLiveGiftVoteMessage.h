//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon, NSMutableArray;

@interface HTSLiveGiftVoteMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long msgType;
@property (nonatomic) long long voteId;
@property (retain, nonatomic) NSMutableArray *resultsArray;
@property (readonly, nonatomic) unsigned long long resultsArray_Count;
@property (nonatomic) long long finishTime;
@property (nonatomic) long long currentTime;
@property (nonatomic) long long voteType;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end