//
//     Generated by private class-dump
//

@interface IESLiveInnerFeedStore : NSObject {
    BOOL _scrollEnabled;
    id /* block */ _scrollEnableBlock;
}

@property (copy, nonatomic) id /* block */ scrollEnableBlock;
@property (nonatomic) BOOL scrollEnabled;

- (id /* block */)scrollEnableBlock;
- (void)setScrollEnableBlock:(id /* block */)arg0;
- (void)updateEnableScroll:(id /* block */)arg0;
- (void)setScrollEnabled:(BOOL)arg0;
- (id)init;
- (BOOL)scrollEnabled;
- (void).cxx_destruct;

@end