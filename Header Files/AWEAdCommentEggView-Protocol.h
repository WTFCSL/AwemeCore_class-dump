//
//     Generated by private class-dump
//

@class UIButton;

@protocol AWEAdCommentEggView <AWECrotocol>

@property (nonatomic, copy) id /* block */ clickImageBlock;
@property (nonatomic, retain) UIButton *clickCloseButton;

- (id /* block */)clickImageBlock;
- (void)setClickImageBlock:(id /* block */)arg0;
- (id)clickCloseButton;
- (void)setClickCloseButton:(id)arg0;
- (void)updateViewWithCommentEggModel:(id)arg0 finishBlock:(id /* block */)arg1 loopBlock:(id /* block */)arg2;
- (void)updateViewWithCommentEggModel:(id)arg0 finishBlock:(id /* block */)arg1 loopBlock:(id /* block */)arg2;
- (void)remove;

@end
