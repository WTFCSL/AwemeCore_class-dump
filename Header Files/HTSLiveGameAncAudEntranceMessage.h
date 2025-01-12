//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon, NSMutableArray;

@interface HTSLiveGameAncAudEntranceMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long gameId;
@property (nonatomic) long long gameKind;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL showAudienceFloatEntrance;
@property (retain, nonatomic) NSMutableArray *versionRangeArray;
@property (readonly, nonatomic) unsigned long long versionRangeArray_Count;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *metaVersion;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *iconURL;
@property (nonatomic) long long startId;

+ (id)descriptor;

@end
