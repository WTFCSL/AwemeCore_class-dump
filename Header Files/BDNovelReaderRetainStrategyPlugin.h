//
//     Generated by private class-dump
//

@class BDNovelReaderNavBarView;

@interface BDNovelReaderRetainStrategyPlugin : BDNovelReaderBasePlugin {
    id /* block */ _addBookShelfResultHandler;
}

@property (copy, nonatomic) id /* block */ addBookShelfResultHandler;
@property (readonly, nonatomic) BDNovelReaderNavBarView *navBarView;

- (id)navBarView;
- (void)setAddBookShelfResultHandler:(id /* block */)arg0;
- (void)disableDefaultAddShelfGuide;
- (void)configExitInterruptAction:(id /* block */)arg0;
- (id /* block */)addBookShelfResultHandler;
- (void).cxx_destruct;

@end
