//
//     Generated by private class-dump
//

@class NSString;

@interface HTSLiveLiveInfo : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int episodeStage;
@property (nonatomic) long long roomStartTime;
@property (nonatomic) int liveStatus;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *replayIdStr;
@property (nonatomic) BOOL isReplay;
@property (nonatomic) int delivery;
@property (nonatomic) long long viewRight;
@property (copy, nonatomic) NSString *anchorSignTagContent;
@property (copy, nonatomic) NSString *roomIdStr;
@property (nonatomic) int paidLiveBringProductFlag;

+ (id)descriptor;

@end