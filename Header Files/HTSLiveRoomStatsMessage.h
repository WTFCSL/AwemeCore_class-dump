//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon;

@interface HTSLiveRoomStatsMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *displayShort;
@property (copy, nonatomic) NSString *displayMiddle;
@property (copy, nonatomic) NSString *displayLong;
@property (nonatomic) long long displayValue;
@property (nonatomic) long long displayVersion;
@property (nonatomic) BOOL incremental;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) long long total;
@property (nonatomic) long long displayType;

+ (id)descriptor;

@end
