//
//     Generated by private class-dump
//

@class NSString, StarAtlasLiveInfoForBarStructV2, StarAtlasLinkStructV2, NSMutableArray;

@interface AwemeStarAtlasStructV2 : GPBMessage

@property (nonatomic) int reviewStatus;
@property (nonatomic) BOOL hasReviewStatus;
@property (retain, nonatomic) StarAtlasLinkStructV2 *linkInfo;
@property (nonatomic) BOOL hasLinkInfo;
@property (copy, nonatomic) NSString *logExtra;
@property (nonatomic) BOOL hasLogExtra;
@property (retain, nonatomic) StarAtlasLiveInfoForBarStructV2 *liveAttractInfo;
@property (nonatomic) BOOL hasLiveAttractInfo;
@property (retain, nonatomic) NSMutableArray *clickTrackURLListArray;
@property (readonly, nonatomic) unsigned long long clickTrackURLListArray_Count;
@property (retain, nonatomic) NSMutableArray *trackURLListArray;
@property (readonly, nonatomic) unsigned long long trackURLListArray_Count;

+ (id)descriptor;

- (id)logExtra;

@end
