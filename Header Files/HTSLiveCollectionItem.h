//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, GPBEnumArray;

@interface HTSLiveCollectionItem : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *collectionId;
@property (nonatomic) int collectionType;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) HTSLiveImage *coverImg;
@property (nonatomic) BOOL hasCoverImg;
@property (copy, nonatomic) NSString *originalVid;
@property (copy, nonatomic) NSString *videoDuration;
@property (copy, nonatomic) NSString *collectionTiming;
@property (copy, nonatomic) NSString *tmplVid;
@property (retain, nonatomic) GPBEnumArray *reflowTagListArray;
@property (readonly, nonatomic) unsigned long long reflowTagListArray_Count;
@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) int collectionSource;
@property (copy, nonatomic) NSString *originalVidURL;
@property (nonatomic) int collectionTag;
@property (copy, nonatomic) NSString *episodeId;
@property (copy, nonatomic) NSString *shareInfo;
@property (nonatomic) long long createTime;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *ugShareInfo;
@property (copy, nonatomic) NSString *degradeVidURL;
@property (nonatomic) long long eventTime;

+ (id)descriptor;

@end