//
//     Generated by private class-dump
//

@interface AWETeenModeFeedTracker : NSObject

+ (void)trackAntiAddictedTime:(id)arg0 enterFrom:(id)arg1;
+ (void)trackStayTimeWithDuration:(double)arg0 enterFrom:(id)arg1;
+ (void)trackRecomAuthorVideoScrollWithAuthorID:(id)arg0 vcType:(long long)arg1;
+ (void)trackRecomAuthorShowWithAuthorID:(id)arg0 vcType:(long long)arg1;
+ (void)trackTeenEnterCreationDetailWithModel:(id)arg0 enterFrom:(id)arg1;
+ (void)shootEntranceClickWithEnterFrom:(id)arg0 shootWay:(id)arg1 specialShowType:(id)arg2 shootType:(id)arg3 fromGroupID:(id)arg4 fromAuthorID:(id)arg5 fromPediaID:(id)arg6 activityID:(id)arg7 effectID:(id)arg8;
+ (void)trackEnterSearchWithModel:(id)arg0 vcType:(long long)arg1 enterPosition:(id)arg2;
+ (void)trackTeenGrootEntranceShowWithModel:(id)arg0 enterFrom:(id)arg1 enterPosition:(id)arg2 pediaID:(id)arg3;
+ (void)trackEncyKnowledgeEntranceShowWithModel:(id)arg0 enterFrom:(id)arg1 enterPosition:(id)arg2 justWatched:(BOOL)arg3 showType:(id)arg4;
+ (void)trackTeenTrendingShowWithWordsNum:(long long)arg0 wordsSource:(id)arg1 imprID:(id)arg2 enterFrom:(id)arg3 enterGroupID:(id)arg4;
+ (void)trackTeenTrendingWordsShowWithWordsSource:(id)arg0 wordsContent:(id)arg1 groupID:(id)arg2 imprID:(id)arg3 enterFrom:(id)arg4 enterGroupID:(id)arg5 awemeModel:(id)arg6;
+ (void)shootEntranceShowWithEnterFrom:(id)arg0 shootEntrance:(id)arg1 fromGroupID:(id)arg2 fromAuthorID:(id)arg3 fromPediaID:(id)arg4;
+ (void)trackTeenCreationStickerShowWithModel:(id)arg0 enterFrom:(id)arg1;
+ (void)trackHomepageHotSlideDownWithModel:(id)arg0 enterPlayMethod:(id)arg1 playMode:(id)arg2 toGroupId:(id)arg3;
+ (void)trackHomepageHotSlideUpWithModel:(id)arg0 enterPlayMethod:(id)arg1 playMode:(id)arg2 toGroupId:(id)arg3;
+ (void)trackTeenPendantShowWithActivityID:(id)arg0;
+ (void)trackTeenPendantHideWithActivityID:(id)arg0;
+ (void)trackTeenPendantClickWithActivityID:(id)arg0;
+ (void)trackTeenInterestChannelHideWithHideType:(id)arg0;
+ (void)trackTeenInterestChannelShowWithOpenType:(id)arg0;
+ (void)trackTeenInterestChannelGuidePopoverShow;
+ (void)trackTeenUmbrellaClick;
+ (void)trackEncyKnowledgeEntranceShowWithModel:(id)arg0 enterFrom:(id)arg1 showType:(id)arg2 extra:(id)arg3;
+ (void)trackEncyKnowledgeRecomShowWithModel:(id)arg0 enterFrom:(id)arg1 extra:(id)arg2;
+ (void)trackReportSubmitWithModel:(id)arg0 vcType:(long long)arg1 isFullscreen:(BOOL)arg2 extra:(id)arg3 enterFrom:(id)arg4;
+ (void)trackHomepageTabChangeWithModel:(id)arg0 vcType:(long long)arg1 enterFrom:(id)arg2 enterMethod:(id)arg3;
+ (void)trackVideoSlideDownWithModel:(id)arg0 vcType:(long long)arg1;
+ (void)trackVideoSlideUpWithModel:(id)arg0 vcType:(long long)arg1;
+ (void)trackTeenInterestChannelItemsShowWithOpenType:(id)arg0 channelID:(id)arg1 channelName:(id)arg2;
+ (void)trackTeenInterestChannelMoreButtonShow;
+ (void)trackTeenInterestChannelMoreButtonClick;
+ (void)trackTeenInterestChannelItemClickWithChannelID:(id)arg0 channelName:(id)arg1;
+ (void)trackTeenTrendingWordsClickWithWordsSource:(id)arg0 wordsContent:(id)arg1 groupID:(id)arg2 imprID:(id)arg3 enterFrom:(id)arg4 enterGroupID:(id)arg5 awemeModel:(id)arg6;
+ (void)trackTeenUmbrellaClickTimeLock;
+ (void)trackTeenUmbrellaClickAge;
+ (void)trackTeenAgeSettingUmbrellaPopup;
+ (void)trackTeenAgeSettingUmbrellaSubmit:(id)arg0;
+ (void)trackCreationDetailVideoShowWithModel:(id)arg0;
+ (void)trackPersonalWorkTabShotClick;

@end
