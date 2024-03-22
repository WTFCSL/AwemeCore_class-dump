//
//     Generated by private class-dump
//

@class FeedItem, NSString, IESLiveInnerFeedUserFeedbackDataProviderInjection, NSMutableArray, IESLiveInnerFeedContext;

@interface IESLiveInnerFeedUserFeedbackController : NSObject <IESLiveInnerUserFeedbackService, IESLiveInnerFeedUserFeedbackDataProviderInjectionDelegate> {
    IESLiveInnerFeedContext *_context;
    NSMutableArray *_roomCorrelationFeedbackCellModels;
    FeedItem *_outterFeedbackCard;
    IESLiveInnerFeedUserFeedbackDataProviderInjection *_feedbackDataInjection;
}

@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (retain, nonatomic) NSMutableArray *roomCorrelationFeedbackCellModels;
@property (retain, nonatomic) FeedItem *outterFeedbackCard;
@property (retain, nonatomic) IESLiveInnerFeedUserFeedbackDataProviderInjection *feedbackDataInjection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)isHaveFeedbackCardWithRoomID:(id)arg0;
- (void)deleteUserFeedbackCardWithCellModel:(id)arg0;
- (void)removeUserFeedbackCardToTemporaryStorageWithCellModel:(id)arg0;
- (BOOL)isHitTimeIntervalCheck;
- (void)insertUserFeedbackCardWithCellModel:(id)arg0;
- (long long)findRoomIndexWithRoomID:(id)arg0;
- (id)findRoomIDWithRoomIndex:(long long)arg0;
- (void)resetEntranceFeedback:(BOOL)arg0 withCell:(id)arg1;
- (id)roomCorrelationFeedbackCellModels;
- (id)feedbackDataInjection;
- (void)buildOutterFeedbackCardIfNeed:(id)arg0;
- (id)outterFeedbackCard;
- (void)setRoomCorrelationFeedbackCellModels:(id)arg0;
- (void)setOutterFeedbackCard:(id)arg0;
- (void)feedbackDataProviderInjection:(id)arg0 didFilterFeedbackItems:(id)arg1;
- (BOOL)p_isSupportModify;
- (void)setFeedbackDataInjection:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)dealloc;

@end
