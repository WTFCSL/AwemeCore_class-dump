//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface ACCBlockSequencer : NSObject {
    NSMutableArray *_blocks;
    id /* block */ _completionBlock;
    id /* block */ _errorBlock;
}

@property (retain, nonatomic) NSMutableArray *blocks;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ errorBlock;

+ (id)sequencerWithBlock:(id /* block */)arg0;

- (id)completion:(id /* block */)arg0;
- (void)runWithResult:(id)arg0;
- (void)run;
- (id)init;
- (id)error:(id /* block */)arg0;
- (id)then:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)blocks;
- (id /* block */)completionBlock;
- (void)stop;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)setBlocks:(id)arg0;
- (void)dealloc;
- (id /* block */)errorBlock;
- (void)setErrorBlock:(id /* block */)arg0;

@end