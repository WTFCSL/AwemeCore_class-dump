//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, GPBInt64Array;

@interface IESLiveAdventureStageInfo : IESLivePBBaseMessage

@property (nonatomic) long long stageId;
@property (copy, nonatomic) NSString *stageName;
@property (retain, nonatomic) HTSLiveImage *stageBackground;
@property (nonatomic) BOOL hasStageBackground;
@property (nonatomic) long long stageLowerLimitScore;
@property (retain, nonatomic) GPBInt64Array *stageLowerLimitScoreListArray;
@property (readonly, nonatomic) unsigned long long stageLowerLimitScoreListArray_Count;
@property (nonatomic) int buttonStatus;
@property (nonatomic) long long stageCallDuration;
@property (retain, nonatomic) GPBInt64Array *stageCallDurationListArray;
@property (readonly, nonatomic) unsigned long long stageCallDurationListArray_Count;
@property (nonatomic) int stageType;
@property (retain, nonatomic) HTSLiveImage *processBarTrackImage;
@property (nonatomic) BOOL hasProcessBarTrackImage;
@property (retain, nonatomic) HTSLiveImage *processBarImage;
@property (nonatomic) BOOL hasProcessBarImage;
@property (retain, nonatomic) HTSLiveImage *processBarDotImage;
@property (nonatomic) BOOL hasProcessBarDotImage;
@property (retain, nonatomic) HTSLiveImage *processBarHeaderImage;
@property (nonatomic) BOOL hasProcessBarHeaderImage;
@property (retain, nonatomic) HTSLiveImage *processBarBubbleImage;
@property (nonatomic) BOOL hasProcessBarBubbleImage;
@property (retain, nonatomic) HTSLiveImage *processBarBubbleHeaderImage;
@property (nonatomic) BOOL hasProcessBarBubbleHeaderImage;
@property (retain, nonatomic) HTSLiveImage *pairedUserAvatarBg;
@property (nonatomic) BOOL hasPairedUserAvatarBg;
@property (copy, nonatomic) NSString *pairedUserAvatarBgBorderColor;
@property (nonatomic) long long stageBgType;

+ (id)descriptor;

@end