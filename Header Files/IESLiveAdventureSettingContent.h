//
//     Generated by private class-dump
//

@class IESLiveAdventureStageInfo, HTSLiveImage, NSMutableArray;

@interface IESLiveAdventureSettingContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *headerBackground;
@property (nonatomic) BOOL hasHeaderBackground;
@property (retain, nonatomic) NSMutableArray *stageInfoListArray;
@property (readonly, nonatomic) unsigned long long stageInfoListArray_Count;
@property (retain, nonatomic) IESLiveAdventureStageInfo *callStage;
@property (nonatomic) BOOL hasCallStage;

+ (id)descriptor;

@end
