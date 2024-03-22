//
//     Generated by private class-dump
//

@class AWELandscapeLayerDataController, NSString, AWEAwemeModel, NSMutableArray, AWEUserModel;
@protocol AWEHttpTask;

@interface AWELandScapePostDataController : NSObject <AWELandscapeSpiltScreenDataControllerProtocol> {
    BOOL _forwardHasMore;
    BOOL _reverseHasMore;
    BOOL firstFetchSuccess;
    BOOL isPreloadingFirstFetch;
    BOOL _isRequestLeft;
    BOOL _isRequestRight;
    AWEAwemeModel *currentModel;
    AWEUserModel *_currentUserModel;
    NSMutableArray *_videoArray;
    NSMutableArray *videoPanelArray;
    id<AWEHttpTask> preloadTask;
    AWELandscapeLayerDataController *_dataController;
}

@property (retain, nonatomic) AWELandscapeLayerDataController *dataController;
@property (nonatomic) BOOL isRequestLeft;
@property (nonatomic) BOOL isRequestRight;
@property (retain, nonatomic) NSMutableArray *videoArray;
@property (retain, nonatomic) NSMutableArray *videoPanelArray;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) AWEUserModel *currentUserModel;
@property (nonatomic) BOOL forwardHasMore;
@property (nonatomic) BOOL reverseHasMore;
@property (nonatomic) BOOL firstFetchSuccess;
@property (retain, nonatomic) id<AWEHttpTask> preloadTask;
@property (nonatomic) BOOL isPreloadingFirstFetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDataController:(id)arg0;
- (id)videoArray;
- (void)setVideoArray:(id)arg0;
- (id)preloadTask;
- (void)setPreloadTask:(id)arg0;
- (BOOL)firstFetchSuccess;
- (id)currentUserModel;
- (BOOL)reverseHasMore;
- (BOOL)forwardHasMore;
- (void)setCurrentUserModel:(id)arg0;
- (id)videoPanelArray;
- (void)requestForwardModel:(id /* block */)arg0;
- (BOOL)canRequestToReverse;
- (id)fetchDataWithUserID:(id)arg0 cursor:(id)arg1 requestType:(long long)arg2 forwardCount:(long long)arg3 reverseCount:(long long)arg4 isPreload:(BOOL)arg5 itemType:(long long)arg6 xiGuaUserId:(id)arg7 completion:(id /* block */)arg8;
- (BOOL)canRequestToForward;
- (void)requestReverseModel:(id /* block */)arg0;
- (void)setFirstFetchSuccess:(BOOL)arg0;
- (void)setReverseHasMore:(BOOL)arg0;
- (void)setForwardHasMore:(BOOL)arg0;
- (void)setVideoPanelArray:(id)arg0;
- (BOOL)isPreloadingFirstFetch;
- (void)setIsPreloadingFirstFetch:(BOOL)arg0;
- (BOOL)isRequestLeft;
- (BOOL)isRequestRight;
- (void)setIsRequestRight:(BOOL)arg0;
- (void)setIsRequestLeft:(BOOL)arg0;
- (void)updateByResponseModel:(id)arg0 currentModel:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)dataController;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;

@end