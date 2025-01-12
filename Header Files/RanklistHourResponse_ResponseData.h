//
//     Generated by private class-dump
//

@class RanklistHourResponse_AdvanceInfo, NSString, NSMutableArray, RanklistHourResponse_Rank;

@interface RanklistHourResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *ranksArray;
@property (readonly, nonatomic) unsigned long long ranksArray_Count;
@property (retain, nonatomic) RanklistHourResponse_Rank *anchorInfo;
@property (nonatomic) BOOL hasAnchorInfo;
@property (retain, nonatomic) NSMutableArray *seatsArray;
@property (readonly, nonatomic) unsigned long long seatsArray_Count;
@property (copy, nonatomic) NSString *chartsDescription;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long beginTime;
@property (copy, nonatomic) NSString *direction;
@property (copy, nonatomic) NSString *regionName;
@property (nonatomic) BOOL isHideEntrance;
@property (copy, nonatomic) NSString *topImgURL;
@property (nonatomic) long long deltaTime;
@property (copy, nonatomic) NSString *lastHourDescription;
@property (copy, nonatomic) NSString *rulesURL;
@property (copy, nonatomic) NSString *highlightContent;
@property (retain, nonatomic) RanklistHourResponse_Rank *anchorRegionInfo;
@property (nonatomic) BOOL hasAnchorRegionInfo;
@property (copy, nonatomic) NSString *cityCode;
@property (copy, nonatomic) NSString *currency;
@property (retain, nonatomic) RanklistHourResponse_Rank *anchorShopInfo;
@property (nonatomic) BOOL hasAnchorShopInfo;
@property (copy, nonatomic) NSString *rulesURLV2;
@property (copy, nonatomic) NSString *topLeftText;
@property (copy, nonatomic) NSString *topRightText;
@property (nonatomic) BOOL isNewAnchor;
@property (retain, nonatomic) NSMutableArray *tabsArray;
@property (readonly, nonatomic) unsigned long long tabsArray_Count;
@property (retain, nonatomic) RanklistHourResponse_AdvanceInfo *advanceInfo;
@property (nonatomic) BOOL hasAdvanceInfo;

+ (id)descriptor;

@end
