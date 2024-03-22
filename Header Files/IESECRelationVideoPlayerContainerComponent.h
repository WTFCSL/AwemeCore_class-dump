//
//     Generated by private class-dump
//

@class IESECStoreVideoPlayer;

@interface IESECRelationVideoPlayerContainerComponent : UIView <IESECLLComponent> {
    IESECStoreVideoPlayer *_containerView;
}

@property (retain, nonatomic) IESECStoreVideoPlayer *containerView;

+ (id /* block */)containerInDoubleColumn;
+ (id /* block */)containerInSingleColumn;
+ (id /* block */)containerWithSize:(struct CGSize { double x0; double x1; })arg0 cornerRadius:(double)arg1;

- (void)p_setupUI;
- (void)updateUIWithModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)containerView;

@end