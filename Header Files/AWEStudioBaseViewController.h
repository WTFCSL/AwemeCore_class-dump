//
//     Generated by private class-dump
//

@interface AWEStudioBaseViewController : UIViewController {
    id /* block */ _willAppearBlock;
    id /* block */ _didAppearBlock;
    id /* block */ _willDisappearBlock;
    id /* block */ _didDisappearBlock;
}

@property (copy, nonatomic) id /* block */ willAppearBlock;
@property (copy, nonatomic) id /* block */ didAppearBlock;
@property (copy, nonatomic) id /* block */ willDisappearBlock;
@property (copy, nonatomic) id /* block */ didDisappearBlock;

- (id /* block */)willAppearBlock;
- (void)setWillAppearBlock:(id /* block */)arg0;
- (id /* block */)didDisappearBlock;
- (void)setDidDisappearBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (id /* block */)didAppearBlock;
- (void)setDidAppearBlock:(id /* block */)arg0;
- (id /* block */)willDisappearBlock;
- (void)setWillDisappearBlock:(id /* block */)arg0;

@end
