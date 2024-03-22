//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, HTSLiveMatchShareBackground, HTSLiveToutiaoMatchData, HTSLiveMatchTitle, NSMutableArray, GPBInt64Int64Dictionary, HTSLiveMatchRoomImInfo, HTSLiveMatchTabFrame;

@interface HTSLiveMatchRoomInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveMatchTabFrame *matchTabFrame;
@property (nonatomic) BOOL hasMatchTabFrame;
@property (retain, nonatomic) HTSLiveMatchTitle *matchTitle;
@property (nonatomic) BOOL hasMatchTitle;
@property (retain, nonatomic) HTSLiveToutiaoMatchData *matchData;
@property (nonatomic) BOOL hasMatchData;
@property (retain, nonatomic) GPBInt64Int64Dictionary *matchHostChannel;
@property (readonly, nonatomic) unsigned long long matchHostChannel_Count;
@property (copy, nonatomic) NSString *matchHashTag;
@property (retain, nonatomic) NSMutableArray *backgroundImageURLListArray;
@property (readonly, nonatomic) unsigned long long backgroundImageURLListArray_Count;
@property (retain, nonatomic) HTSLiveImage *shareIcon;
@property (nonatomic) BOOL hasShareIcon;
@property (retain, nonatomic) HTSLiveMatchRoomImInfo *imInfo;
@property (nonatomic) BOOL hasImInfo;
@property (retain, nonatomic) HTSLiveMatchShareBackground *matchShareBackground;
@property (nonatomic) BOOL hasMatchShareBackground;
@property (copy, nonatomic) NSString *themeId;
@property (retain, nonatomic) HTSLiveMatchShareBackground *matchLiveShareBackground;
@property (nonatomic) BOOL hasMatchLiveShareBackground;
@property (nonatomic) long long matchId;

+ (id)descriptor;

@end
