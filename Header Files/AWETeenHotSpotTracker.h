//
//     Generated by private class-dump
//

@interface AWETeenHotSpotTracker : NSObject

+ (void)trackTrendingTopicShowWithModel:(id)arg0 itemID:(id)arg1 enterFrom:(id)arg2 enterPosition:(id)arg3 showType:(id)arg4 extra:(id)arg5;
+ (void)trackTrendingTopicShowWithModel:(id)arg0 itemID:(id)arg1 enterFrom:(id)arg2;
+ (void)trackTrendingSwitchWithModel:(id)arg0 enterMethod:(id)arg1 rank:(unsigned long long)arg2 hotSpotCount:(unsigned long long)arg3;
+ (void)trackTrendingDuration:(double)arg0 fromGroupID:(id)arg1 previousPage:(id)arg2 enterFrom:(id)arg3;
+ (void)trackTrendingTopicClickWithModel:(id)arg0 itemID:(id)arg1 enterFrom:(id)arg2;
+ (void)trackTrendingListShowWithHotSpotCount:(unsigned long long)arg0;
+ (void)trackTrendingTopicShowWithModel:(id)arg0 itemID:(id)arg1 enterFrom:(id)arg2 enterPosition:(id)arg3;
+ (void)trackTrendingTopicShowWithModel:(id)arg0 itemID:(id)arg1 enterFrom:(id)arg2 enterPosition:(id)arg3 showType:(id)arg4;
+ (void)trackTrendingTopicClickWithModel:(id)arg0 itemID:(id)arg1 enterFrom:(id)arg2 enterPosition:(id)arg3 showType:(id)arg4;
+ (void)trackTrendingTopicClickWithModel:(id)arg0 itemID:(id)arg1 enterFrom:(id)arg2 enterPosition:(id)arg3 showType:(id)arg4 extra:(id)arg5;
+ (void)trackTrendingPageShowWithModel:(id)arg0 itemID:(id)arg1 enterFrom:(id)arg2;

@end
