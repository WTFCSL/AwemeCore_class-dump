//
//     Generated by private class-dump
//

@class BDNovelReaderNavPlugin;

@interface BDNovelReaderBookShelfPlugin : BDNovelReaderBasePlugin {
    id /* block */ _addBookShelfResultHandler;
    BDNovelReaderNavPlugin *_navPlugin;
}

@property (weak, nonatomic) BDNovelReaderNavPlugin *navPlugin;
@property (copy, nonatomic) id /* block */ addBookShelfResultHandler;

+ (void)managerDidFirstStart;

- (void)pluginReaderDidAppear;
- (id)navPlugin;
- (void)setNavPlugin:(id)arg0;
- (void)addToShelfWithFrom:(unsigned long long)arg0;
- (void)addToShelfWithShowResultMsg:(BOOL)arg0 from:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)setAddBookShelfResultHandler:(id /* block */)arg0;
- (id /* block */)addBookShelfResultHandler;
- (void).cxx_destruct;

@end