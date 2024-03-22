//
//     Generated by private class-dump
//

@interface NLEProcessUnit : NSObject {
    BOOL _consumed;
    BOOL _isTail;
    id /* block */ _runBlock;
    NLEProcessUnit *_next;
    id /* block */ _nextBlock;
    id /* block */ _doneBlock;
}

@property (copy, nonatomic) id /* block */ runBlock;
@property (retain, nonatomic) NLEProcessUnit *next;
@property (copy, nonatomic) id /* block */ nextBlock;
@property (copy, nonatomic) id /* block */ doneBlock;
@property (nonatomic) BOOL consumed;
@property (nonatomic) BOOL isTail;

- (BOOL)isTail;
- (id /* block */)doneBlock;
- (void)setRunBlock:(id /* block */)arg0;
- (void)setDoneBlock:(id /* block */)arg0;
- (void)setIsTail:(BOOL)arg0;
- (id)next;
- (void)run;
- (void)setNext:(id)arg0;
- (void).cxx_destruct;
- (id /* block */)runBlock;
- (BOOL)consumed;
- (void)setConsumed:(BOOL)arg0;
- (id)description;
- (id /* block */)nextBlock;
- (void)setNextBlock:(id /* block */)arg0;

@end