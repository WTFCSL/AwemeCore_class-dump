//
//     Generated by private class-dump
//

@class NSString, NSMapTable, UIView;

@interface HTSLiveLayoutSceneAudio : NSObject <HTSLiveLayoutSceneProtocol> {
    BOOL _isAnchorl;
    NSMapTable *_viewTable;
    UIView *_containerView;
}

@property (weak, nonatomic) NSMapTable *viewTable;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsAnchor:(BOOL)arg0;
- (id)viewTable;
- (void)setViewTable:(id)arg0;
- (void)layoutPluginIfNeed;
- (id)viewOfType:(id)arg0;
- (void)supportInfoForScene:(id)arg0 container:(id)arg1 isAnchor:(BOOL)arg2;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (unsigned long long)currentScene;
- (void)setContainerView:(id)arg0;
- (id)containerView;

@end
