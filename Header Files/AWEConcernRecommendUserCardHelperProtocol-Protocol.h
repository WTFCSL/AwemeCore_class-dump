//
//     Generated by private class-dump
//

@protocol AWEConcernRecommendUserCardHelperProtocol <NSObject>

+ (void)insertRecommendCardIfNeedWithResponse:(id)arg0 currentDataSource:(id)arg1;
+ (void)addFollowFeedRecommendCardParams:(id)arg0 logExtraDict:(id)arg1 referString:(id)arg2;
+ (unsigned long long)followFeedEmptyOptStrategy;
+ (BOOL)alreadyLoginEnableShowFollowFeedRecommendCard;
+ (BOOL)shouldUseBigCardStyle;
+ (id)createCellViewController;
+ (long long)alreadyLoginRecommendRequestCount;
+ (long long)alreadyLoginRecommendMaxCount;
+ (id)findAwemeToDisplayForAuthor:(id)arg0;
+ (struct CGSize { double x0; double x1; })dragContainerSizeForSingleCard;
+ (struct CGSize { double x0; double x1; })IPadRotate_dragContainerSizeForMultiCardPortraitWithSize:(struct CGSize { double x0; double x1; })arg0;
+ (struct CGSize { double x0; double x1; })IPadRotate_dragContainerSizeForMultiCardLandscapeWithSize:(struct CGSize { double x0; double x1; })arg0;
+ (struct CGSize { double x0; double x1; })IPadRotate_dragContainerSizeForSingleCardPortraitWithSize:(struct CGSize { double x0; double x1; })arg0;
+ (struct CGSize { double x0; double x1; })IPadRotate_dragContainerSizeForSingleCardLandscapeWithSize:(struct CGSize { double x0; double x1; })arg0;
+ (void)trackFollowFromRecUserForConcernIfNeed:(id)arg0 trackParam:(id)arg1;
+ (id)recommendCardParamDict;
+ (void)enterAwemeDetailTableViewControllerWithModel:(id)arg0 extraParam:(id)arg1;
+ (void)enterPersonalHomepageWithUser:(id)arg0 enterFrom:(id)arg1 extraParam:(id)arg2;
+ (BOOL)followFeedEmptyRecommendCardOptEnable;

@end
