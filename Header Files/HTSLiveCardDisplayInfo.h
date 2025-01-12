//
//     Generated by private class-dump
//

@class HTSLiveCardPreDefeatStrategy, NSString, HTSLiveLandScapeConfig, HTSLiveCardShowDefeatStrategy, NSMutableArray, HTSLiveCardTriggerConfig;

@interface HTSLiveCardDisplayInfo : IESLivePBBaseMessage

@property (nonatomic) int cardId;
@property (copy, nonatomic) NSString *URL;
@property (copy, nonatomic) NSString *fallbackURL;
@property (nonatomic) int containerType;
@property (nonatomic) long long durationMs;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int bottom;
@property (nonatomic) unsigned int right;
@property (copy, nonatomic) NSString *containerPayload;
@property (retain, nonatomic) HTSLiveCardTriggerConfig *triggerConfig;
@property (nonatomic) BOOL hasTriggerConfig;
@property (retain, nonatomic) NSMutableArray *conditionListArray;
@property (readonly, nonatomic) unsigned long long conditionListArray_Count;
@property (retain, nonatomic) HTSLiveCardPreDefeatStrategy *preDefeatStrategy;
@property (nonatomic) BOOL hasPreDefeatStrategy;
@property (retain, nonatomic) HTSLiveCardShowDefeatStrategy *showDefeatStrategy;
@property (nonatomic) BOOL hasShowDefeatStrategy;
@property (retain, nonatomic) HTSLiveLandScapeConfig *landscapeConfig;
@property (nonatomic) BOOL hasLandscapeConfig;
@property (copy, nonatomic) NSString *accessibleName;

+ (id)descriptor;

- (id)dictionary;

@end
