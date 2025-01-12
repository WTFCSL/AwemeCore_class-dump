//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEFeedShareReflowCardAndVideoDelegate;

@interface AWEFeedShareReflowCardAndVideoManager : NSObject <AWEFeedShareReflowCardAndVideoManagerProtocol> {
    id<AWEFeedShareReflowCardAndVideoDelegate> _delegate;
}

@property (weak, nonatomic) id<AWEFeedShareReflowCardAndVideoDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)impressionShareReflowUser:(id)arg0;
- (BOOL)shouldInsertVideoToFeed;
- (BOOL)shouldFetchCard:(id)arg0 dataList:(id)arg1 processModel:(id)arg2;
- (void)fetchCardWithUID:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)existedCardInPlayList:(id)arg0 currentPlayIndex:(long long)arg1;
- (BOOL)canInsertToListAfterFetchCard:(id)arg0;
- (BOOL)isVideoBelongToShareReflow:(id)arg0;
- (void)trackTokenFindReturnWhenVideoInsertToFeed:(id)arg0;
- (BOOL)isCurrentHotFeedVC;
- (id)showRule:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
