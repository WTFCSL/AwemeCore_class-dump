//
//     Generated by private class-dump
//

@class NSArray, NSString, AWEInsideSplitScreenItemDetail, AWEFeedSplitScreenFunction;

@interface AWEFeed2UserPageSplitScreenManager : NSObject <AWEUserMessage, AWESplitScreenBussinessDelegate> {
    BOOL _enable;
    BOOL _enableLeftScroll;
    BOOL _needHideInteractionAfterSplit;
    BOOL _needDismissWhenEnterSplit;
    AWEInsideSplitScreenItemDetail *splitDetail;
    NSArray *_tabs;
    AWEFeedSplitScreenFunction *_feedFunction;
}

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL enableLeftScroll;
@property (nonatomic) BOOL needHideInteractionAfterSplit;
@property (retain, nonatomic) NSArray *tabs;
@property (nonatomic) BOOL needDismissWhenEnterSplit;
@property (retain, nonatomic) AWEFeedSplitScreenFunction *feedFunction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) AWEInsideSplitScreenItemDetail *splitDetail;

- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishBlockUser:(id)arg0 status:(long long)arg1;
- (void)setEnableLeftScroll:(BOOL)arg0;
- (void)setNeedHideInteractionAfterSplit:(BOOL)arg0;
- (void)setFeedFunction:(id)arg0;
- (id)splitDetail;
- (void)setNeedDismissWhenEnterSplit:(BOOL)arg0;
- (BOOL)enableLeftScroll;
- (BOOL)needHideInteractionAfterSplit;
- (id)feedFunction;
- (BOOL)needDismissWhenEnterSplit;
- (BOOL)needShowFullRightVCWhenEnterPortrait;
- (long long)showActionType;
- (BOOL)needCreateNewBussinessVC;
- (BOOL)canLeftContainerScroll;
- (void)setSplitDetail:(id)arg0;
- (void)willEnterSplitScreen;
- (void)didEnterSplitScreen;
- (void)willQuitSplitScreenToFullRight:(BOOL)arg0;
- (void)didQuitSplitScreenToFullRight:(BOOL)arg0;
- (void)splitScreenViewWillAppear;
- (void)splitScreenViewDidAppear;
- (BOOL)enable;
- (id)init;
- (void).cxx_destruct;
- (void)setup;
- (void)setEnable:(BOOL)arg0;
- (void)dealloc;
- (id)tabs;
- (void)setTabs:(id)arg0;

@end
