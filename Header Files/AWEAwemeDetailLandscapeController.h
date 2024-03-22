//
//     Generated by private class-dump
//

@class NSArray, NSString, NSMutableIndexSet;

@interface AWEAwemeDetailLandscapeController : AWEAwemeNewDetailBaseController <AWEFeedLandscapeControllerProtocol, AWELandscapeTransitionOuterContextProvider> {
    NSArray *_landscpeInsertArray;
    NSMutableIndexSet *_insertIndexs;
}

@property (retain, nonatomic) NSArray *landscpeInsertArray;
@property (retain, nonatomic) NSMutableIndexSet *insertIndexs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentAweme;
- (id)screenCastControlView;
- (void)setLandscpeInsertArray:(id)arg0;
- (void)setInsertIndexs:(id)arg0;
- (void)insertRecallVideos:(id)arg0 playModel:(id)arg1 completion:(id /* block */)arg2;
- (void)insertRemovedXiGuaVideos:(id)arg0 playModel:(id)arg1 completion:(id /* block */)arg2;
- (void)replacePlayerWithIndex:(long long)arg0 displayModel:(id)arg1;
- (id)insertIndexs;
- (id)landscpeInsertArray;
- (void)enterScreenCastStatusIfNeeded;
- (void)updateScreenCastViewLayout:(id)arg0;
- (BOOL)scrollToModel:(id)arg0;
- (id)currentPlayerViewController;
- (BOOL)canInsertModelAfterExitLandscape;
- (void)insertLandscapeModelList:(id)arg0 playModel:(id)arg1;
- (BOOL)shouldScrollAndNotInsertAfterExitLandscape;
- (void)insertLandscapeData:(id)arg0 playModel:(id)arg1 completion:(id /* block */)arg2;
- (id)landscapeTransitionContext;
- (void)willEnterLandscape;
- (void)willExitLandscapeWithModel:(id)arg0 modelList:(id)arg1;
- (void)didExitLandscapeWithFromContext:(id)arg0;
- (double)playerControllerMoveUpOffsetWithModel:(id)arg0;
- (BOOL)useBlackMaskViewWithModel:(id)arg0;
- (BOOL)useBlackMaskViewForFocusView;
- (id)currentLandscapeController;
- (void).cxx_destruct;
- (long long)currentIndex;

@end
