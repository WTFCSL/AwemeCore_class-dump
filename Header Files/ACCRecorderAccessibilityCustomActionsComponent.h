//
//     Generated by private class-dump
//

@class ACCRecorderAccessibilityCustomActionsView;
@protocol ACCRecorderViewContainer, ACCRecorderAccessibilityCustomActionsServiceProtocol;

@interface ACCRecorderAccessibilityCustomActionsComponent : ACCFeatureComponent {
    ACCRecorderAccessibilityCustomActionsView *_accessibilityCustomActionsView;
    id<ACCRecorderViewContainer> _viewContainer;
    id<ACCRecorderAccessibilityCustomActionsServiceProtocol> _accessibilityService;
}

@property (retain, nonatomic) ACCRecorderAccessibilityCustomActionsView *accessibilityCustomActionsView;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecorderAccessibilityCustomActionsServiceProtocol> accessibilityService;

- (id)accessibilityService;
- (void)setAccessibilityService:(id)arg0;
- (void)p_setupUI;
- (void)componentDidMount;
- (id)accessibilityCustomActionsView;
- (void)setAccessibilityCustomActionsView:(id)arg0;
- (void).cxx_destruct;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
