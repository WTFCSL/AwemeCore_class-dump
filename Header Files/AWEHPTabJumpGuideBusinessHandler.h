//
//     Generated by private class-dump
//

@class AWEFeedTabJumpStrategyItemModel, NSString, AWEAwemeModel, AWEJumpTabInfoModel, AWEFeedTabJumpConditionTriggerManager;
@protocol AWEHPTabJumpGuideBusinessHandlerDelegate, AWEHPTabJumpModelProtocol;

@interface AWEHPTabJumpGuideBusinessHandler : NSObject {
    AWEAwemeModel *_awemeModel;
    NSString *_referString;
    AWEJumpTabInfoModel *_infoModel;
    AWEFeedTabJumpStrategyItemModel *_itemModel;
    AWEFeedTabJumpConditionTriggerManager *_triggerManager;
    id<AWEHPTabJumpModelProtocol> _jumpModel;
    id<AWEHPTabJumpGuideBusinessHandlerDelegate> _delegate;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEFeedTabJumpConditionTriggerManager *triggerManager;
@property (retain, nonatomic) AWEJumpTabInfoModel *infoModel;
@property (retain, nonatomic) AWEFeedTabJumpStrategyItemModel *itemModel;
@property (retain, nonatomic) id<AWEHPTabJumpModelProtocol> jumpModel;
@property (retain, nonatomic) id<AWEHPTabJumpGuideBusinessHandlerDelegate> delegate;

- (id)awemeModel;
- (id)referString;
- (void)setAwemeModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (id)itemModel;
- (id)infoModel;
- (void)setItemModel:(id)arg0;
- (void)setInfoModel:(id)arg0;
- (void)triggerEventWithEventType:(long long)arg0;
- (BOOL)shouldLoadTabJumpGuide;
- (id)createTabJumpModelWithTabID:(id)arg0 withAwemeModel:(id)arg1 withReferString:(id)arg2 withInfoModel:(id)arg3;
- (void)setJumpModel:(id)arg0;
- (id)p_schemaWithPath:(id)arg0 schema:(id)arg1 byAddingQueryDict:(id)arg2;
- (id)jumpModel;
- (void)p_lifeClientAITriggerIfNeededWithProgress:(long long)arg0;
- (id)tabJumpModelRegisterDic;
- (id)initWithAwemeModel:(id)arg0 withInfoModel:(id)arg1 withItemModel:(id)arg2 withReferString:(id)arg3 withDelegate:(id)arg4;
- (void)handleJumpInfoModelIfNeed;
- (void)tabJumpGuideShowWithComponent:(id)arg0 withTrackParams:(id)arg1;
- (void)tabJumpGuideClickWithComponent:(id)arg0 withTrackParams:(id)arg1;
- (void)landingTabWithModel:(id)arg0 withComponent:(id)arg1;
- (void)onChangeAwemePlayTime:(double)arg0 withTotalTime:(double)arg1;
- (void)onChangeAwemeDigg;
- (void)onChangeAwemeAddComment;
- (void)onChangeAwemeFavorite;
- (void)onChangeAwemeShare;
- (void)onChangeAwemeAnchorToMall;
- (void)onChangeAwemeAnchorToPOI;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)triggerManager;
- (void)setTriggerManager:(id)arg0;

@end
