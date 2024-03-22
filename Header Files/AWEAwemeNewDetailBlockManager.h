//
//     Generated by private class-dump
//

@protocol AWEAwemeNewDetailBlockManagerDelegate;

@interface AWEAwemeNewDetailBlockManager : NSObject {
    id<AWEAwemeNewDetailBlockManagerDelegate> _delegate;
}

@property (weak, nonatomic) id<AWEAwemeNewDetailBlockManagerDelegate> delegate;

- (void)setupWithDelegate:(id)arg0;
- (void)playWithBlockManagerHelper:(id)arg0;
- (void)onAwemeDeleted:(id)arg0 isDislike:(BOOL)arg1 blockManagerHelper:(id)arg2;
- (id)cellReuseIdentifierForRowWithModel:(id)arg0 blockManagerHelper:(id)arg1;
- (void)loadPrevious:(BOOL)arg0 blockManagerHelper:(id)arg1;
- (void)headerWithRefreshingBlockWithBlockManagerHelper:(id)arg0;
- (void)loadMoreForOldStyleCompletionWithList:(id)arg0 error:(id)arg1 blockManagerHelper:(id)arg2;
- (void)hasSlideToOtherFeedWithBlockManagerHelper:(id)arg0;
- (BOOL)shouldPreventPauseWithBlockManagerHelper:(id)arg0;
- (BOOL)closeCellPreloadWithBlockManagerHelper:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
