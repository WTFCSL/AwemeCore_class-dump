//
//     Generated by private class-dump
//

@interface AWEXPlayPopupTask : NSObject {
    BOOL _running;
    id /* block */ _block;
}

@property (nonatomic) BOOL running;
@property (copy, nonatomic) id /* block */ block;

- (BOOL)running;
- (void)setRunning:(BOOL)arg0;
- (void)run;
- (void)completion;
- (void).cxx_destruct;
- (void)setBlock:(id /* block */)arg0;
- (id /* block */)block;

@end
