//
//     Generated by private class-dump
//

@class AWEAwemeModel;

@interface AWEKnowledgeSwiftImpl.HangoutNiceWaterfallSectionViewModel : AWEKnowledgeSwiftImpl.KnowledgeBaseSectionViewModel <AFDFullPageHangoutSectionViewModelProtocol, AWEHangoutWaterfallSectionViewModelProtocol, AWEPublishTaskMessage, AWEHangoutNiceWaterfallSectionViewModelProtocol> {
    void /* unknown type, empty encoding */ removeTaskDelegate;
    void /* unknown type, empty encoding */ refer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pageContext;
    void /* unknown type, empty encoding */ everShow;
    void /* unknown type, empty encoding */ totalRequestTimes;
    void /* unknown type, empty encoding */ task;
    void /* unknown type, empty encoding */ requestMethod;
    void /* unknown type, empty encoding */ preloadGroup;
    void /* unknown type, empty encoding */ hangoutCoverMinRatio;
    void /* unknown type, empty encoding */ hangoutCoverMaxRatio;
    void /* unknown type, empty encoding */ FAVOURITE;
    void /* unknown type, empty encoding */ COMMENT;
    void /* unknown type, empty encoding */ suggestWordLogID;
    void /* unknown type, empty encoding */ searchRecommendWordsKey;
    void /* unknown type, empty encoding */ recommendWordModel;
    void /* unknown type, empty encoding */ cardHeight;
    void /* unknown type, empty encoding */ publishImage;
    void /* unknown type, empty encoding */ placeholderImage;
    void /* unknown type, empty encoding */ loadMoreCountRefreshZero;
    void /* unknown type, empty encoding */ loadMoreOrder;
    void /* unknown type, empty encoding */ font;
    void /* unknown type, empty encoding */ sectionConfig;
    void /* unknown type, empty encoding */ titleLineHeight;
    void /* unknown type, empty encoding */ titleKern;
    void /* unknown type, empty encoding */ $__lazy_storage_$_attributeTitle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_attributeTitleInitializer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shouldOptimizeLfeedCover;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageOriginRatio;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageRatio;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageRatioInitializer;
    void /* unknown type, empty encoding */ _following;
    void /* unknown type, empty encoding */ _collected;
    void /* unknown type, empty encoding */ _collectCount;
    void /* unknown type, empty encoding */ _interested;
    void /* unknown type, empty encoding */ _interestCount;
    void /* unknown type, empty encoding */ _commentCount;
    void /* unknown type, empty encoding */ _commentCountIsZero;
    void /* unknown type, empty encoding */ _showDislikeMaskView;
    void /* unknown type, empty encoding */ _publishState;
    void /* unknown type, empty encoding */ replaceModel;
    void /* unknown type, empty encoding */ curRetryCount;
    void /* unknown type, empty encoding */ collectCountNumber;
    void /* unknown type, empty encoding */ interestCountNumber;
    void /* unknown type, empty encoding */ commentCountNumber;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playInteractor;
    void /* unknown type, empty encoding */ markShow;
    void /* unknown type, empty encoding */ isSelfPublish;
    void /* unknown type, empty encoding */ maxInnerUpSlideIndex;
    void /* unknown type, empty encoding */ dateOfEnterDetail;
    void /* unknown type, empty encoding */ itemCountToInner;
    void /* unknown type, empty encoding */ cellItemStartShow;
    void /* unknown type, empty encoding */ cellItemEndShow;
    void /* unknown type, empty encoding */ hasTrack;
    void /* unknown type, empty encoding */ currentAwemePlayTime;
    void /* unknown type, empty encoding */ visibleSectioinSlideStartTime;
    void /* unknown type, empty encoding */ innerFirstItemStartTime;
    void /* unknown type, empty encoding */ innerFistItemPlayDuration;
    void /* unknown type, empty encoding */ isFirstScreenCard;
    void /* unknown type, empty encoding */ coverLoadDate;
    void /* unknown type, empty encoding */ coverLoadCounter;
    void /* unknown type, empty encoding */ cardClickCounter;
    void /* unknown type, empty encoding */ inflowPreloadDate;
    void /* unknown type, empty encoding */ inflowCoverPreloadStatus;
    void /* unknown type, empty encoding */ inflowStreamPreloadStatus;
}

@property (nonatomic, readonly) AWEAwemeModel *itemModel;
@property (nonatomic) BOOL showDislikeMaskView;

- (void)task:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (void)task:(id)arg0 progressDidChangeWithInfo:(id)arg1;
- (void)task:(id)arg0 didPendingAtStage:(id)arg1 error:(id)arg2;
- (void)task:(id)arg0 cancelWithResult:(BOOL)arg1;
- (id)itemModel;
- (void)updateLogExtra:(id)arg0;
- (void)replaceByModels:(id)arg0 animated:(BOOL)arg1;
- (BOOL)showDislikeMaskView;
- (void)setShowDislikeMaskView:(BOOL)arg0;
- (void)collectActionNotificationWithNotification:(id)arg0;
- (void)collectBatchCancelActionNotificationWithNotification:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end