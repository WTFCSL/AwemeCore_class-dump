//
//     Generated by private class-dump
//

@class UIView;

@interface IESECRelationLivePlayerContainerComponent : UIView <IESECLLComponent> {
    UIView *_containerView;
}

@property (retain, nonatomic) UIView *containerView;

+ (id /* block */)containerWithSize:(struct CGSize { double x0; double x1; })arg0;
+ (id /* block */)containerInDoubleColumn;
+ (id /* block */)containerInSingleColumn;

- (void)p_setupUI;
- (void)updateUIWithModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)containerView;

@end
