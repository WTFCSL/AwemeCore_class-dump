//
//     Generated by private class-dump
//

@class UIView;
@protocol ACCMediaContainerViewProtocol, ACCVideoCoverEditTemplateProtocol, ACCEditVideoCoverMixedProtocol, ACCVideoCoverEditSessionProtocol;

@protocol ACCVideoCoverEditServiceProtocol <ACCCameraSubscription>

@property (readonly, nonatomic) id<ACCEditVideoCoverMixedProtocol> videoCoverMixed;
@property (readonly, nonatomic) id<ACCVideoCoverEditTemplateProtocol> videoCoverEditTemplate;
@property (retain, nonatomic) id<ACCVideoCoverEditSessionProtocol> editBuilder;
@property (readonly, nonatomic) UIView<ACCMediaContainerViewProtocol> *mediaContainerView;

- (id)mediaContainerView;
- (id)initWithPublishModel:(id)arg0;
- (void)buildEditSession;
- (id)editBuilder;
- (void)setEditBuilder:(id)arg0;
- (id)videoCoverMixed;
- (id)videoCoverEditTemplate;

@end
