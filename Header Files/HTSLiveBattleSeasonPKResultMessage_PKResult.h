//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, NSMutableArray;

@interface HTSLiveBattleSeasonPKResultMessage_PKResult : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *resultImg;
@property (nonatomic) BOOL hasResultImg;
@property (retain, nonatomic) HTSLiveImage *bgImg;
@property (nonatomic) BOOL hasBgImg;
@property (copy, nonatomic) NSString *resultStr;
@property (retain, nonatomic) NSMutableArray *descriptionsArray;
@property (readonly, nonatomic) unsigned long long descriptionsArray_Count;

+ (id)descriptor;

@end