//
//     Generated by private class-dump
//

@class NSString, IESLiveViewLevelController;

@interface HTSEventForwardingView : UIView <IESLiveHierarchyContainerView> {
    BOOL _disableForwarding;
    NSString *_levelName;
    IESLiveViewLevelController *_levelController;
}

@property (nonatomic) BOOL disableForwarding;
@property (retain, nonatomic) IESLiveViewLevelController *levelController;
@property (copy, nonatomic) NSString *levelName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLevelName:(id)arg0;
- (void)addSubview:(id)arg0 identifier:(id)arg1;
- (id)levelName;
- (BOOL)disableForwarding;
- (void)setDisableForwarding:(BOOL)arg0;
- (id)levelController;
- (void)setLevelController:(id)arg0;
- (id)viewForIdentifier:(id)arg0;
- (void).cxx_destruct;
- (void)willRemoveSubview:(id)arg0;
- (void)didAddSubview:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (BOOL)containsSubview:(id)arg0;

@end
