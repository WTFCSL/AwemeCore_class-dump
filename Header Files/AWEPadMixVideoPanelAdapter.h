//
//     Generated by private class-dump
//

@class NSString, MASConstraint;

@interface AWEPadMixVideoPanelAdapter : NSObject <AWEPadMixVideoPanelAdapter> {
    MASConstraint *_containerRightOffset;
    long long _panelType;
}

@property (retain, nonatomic) MASConstraint *containerRightOffset;
@property (nonatomic) long long panelType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;
+ (BOOL)Enable;

- (long long)panelType;
- (void)setPanelType:(long long)arg0;
- (void)performViewDidLoad;
- (id)containerRightOffset;
- (BOOL)isCurrentLandscape;
- (BOOL)ifNeedAdapt;
- (void)setContainerRightOffset:(id)arg0;
- (void)performViewDidLayout;
- (void)performViewNeedlayout;
- (BOOL)panGestureShouldBegin:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)handlePanGesture:(id)arg0;
- (id)weakTarget;

@end
