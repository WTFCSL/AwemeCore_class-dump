//
//     Generated by private class-dump
//

@interface IESLiveComponentReleaseObserver : NSObject {
    id /* block */ _block;
}

@property (copy, nonatomic) id /* block */ block;

+ (id)observerWithBlock:(id /* block */)arg0;

- (id)initWithDeallocBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)setBlock:(id /* block */)arg0;
- (void)dealloc;
- (id /* block */)block;

@end
