//
//     Generated by private class-dump
//

@class NSString, AWEECMallHeaderViewController, AWEECMallSFActivityResultModel, AWEECMallSFSearchResultModel, UIViewController;
@protocol AWEECMallViewControllerProtocol;

@interface AWEECMallHeaderComponent : NSObject {
    BOOL _isJumping;
    BOOL _refreshTriggerByMySelf;
    BOOL _hasBeenTrackResourceShow;
    BOOL _isInteractive;
    BOOL _showSearch;
    BOOL _showActivity;
    UIViewController<AWEECMallViewControllerProtocol> *_hostViewController;
    NSString *_previousPage;
    NSString *_pageName;
    long long _currentDirection;
    AWEECMallHeaderViewController *_headerViewController;
    double _startPullTime;
    NSString *_jumpSchema;
    AWEECMallSFActivityResultModel *_activityModel;
    AWEECMallSFSearchResultModel *_searchModel;
    NSString *_requestID;
}

@property (nonatomic) long long currentDirection;
@property (retain, nonatomic) AWEECMallHeaderViewController *headerViewController;
@property (nonatomic) BOOL isJumping;
@property (nonatomic) BOOL refreshTriggerByMySelf;
@property (nonatomic) double startPullTime;
@property (nonatomic) BOOL hasBeenTrackResourceShow;
@property (nonatomic) BOOL isInteractive;
@property (copy, nonatomic) NSString *jumpSchema;
@property (retain, nonatomic) AWEECMallSFActivityResultModel *activityModel;
@property (retain, nonatomic) AWEECMallSFSearchResultModel *searchModel;
@property (nonatomic) BOOL showSearch;
@property (nonatomic) BOOL showActivity;
@property (copy, nonatomic) NSString *requestID;
@property (weak, nonatomic) UIViewController<AWEECMallViewControllerProtocol> *hostViewController;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *pageName;

- (id)jumpSchema;
- (void)setJumpSchema:(id)arg0;
- (BOOL)showSearch;
- (id)activityModel;
- (void)setActivityModel:(id)arg0;
- (void)subscriberInteractable;
- (void)recoverTabbar;
- (void)showGuideIfNeeded;
- (void)resetUIWithAnimated:(BOOL)arg0;
- (void)_showGuideIfNeededWithSubscriber:(id)arg0;
- (BOOL)preventDefaultFeedRefresh;
- (void)updateFrameWithProgerss:(double)arg0 animated:(BOOL)arg1 isAutoBottom:(BOOL)arg2 animationBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)setupHeaderIfNeededWithCompletion:(id /* block */)arg0;
- (void)setStartPullTime:(double)arg0;
- (void)setHasBeenTrackResourceShow:(BOOL)arg0;
- (void)setShowSearch:(BOOL)arg0;
- (id)jointSchema;
- (void)trackResourceShowOnce;
- (void)autoScrollToBottom;
- (void)updateFrameWithProgerss:(double)arg0 animated:(BOOL)arg1;
- (void)reboundToRefresh;
- (void)trackScrollEndedWithOffsetY:(double)arg0;
- (BOOL)refreshTriggerByMySelf;
- (void)setRefreshTriggerByMySelf:(BOOL)arg0;
- (BOOL)isJumping;
- (void)setIsJumping:(BOOL)arg0;
- (void)hiddenTabbar;
- (void)jumpToSecondFloor;
- (void)trackSearchClick;
- (id)updateQueryFromURLString:(id)arg0 replaceDic:(id)arg1;
- (double)startPullTime;
- (BOOL)hasBeenTrackResourceShow;
- (id)searchCommonParams;
- (id)searchWordsAdditionParams;
- (void)loadComponent;
- (void)refreshFinished;
- (id)init;
- (void)setRequestID:(id)arg0;
- (id)requestID;
- (void).cxx_destruct;
- (id)headerViewController;
- (BOOL)isInteractive;
- (void)viewDidAppear;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (void)setCurrentDirection:(long long)arg0;
- (long long)currentDirection;
- (void)setHeaderViewController:(id)arg0;
- (void)setIsInteractive:(BOOL)arg0;
- (void)handlePanGesture:(id)arg0;
- (id)searchModel;
- (void)setSearchModel:(id)arg0;
- (void)setShowActivity:(BOOL)arg0;
- (BOOL)showActivity;
- (id)hostViewController;
- (void)setHostViewController:(id)arg0;
- (void)viewDidDisappear;
- (void)setPageName:(id)arg0;
- (id)pageName;

@end
