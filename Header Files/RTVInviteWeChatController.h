//
//     Generated by private class-dump
//

@class NSString;
@protocol RTVXRRoomSessionControllerInterface, RTVXRControllerInjector;

@interface RTVInviteWeChatController : NSObject <RTVXRControllerInterface> {
    id<RTVXRControllerInjector> _controllerInjector;
    id<RTVXRRoomSessionControllerInterface> _model;
}

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (id)controllerInjector;
- (void)renderBusinessHandler:(id)arg0 context:(id)arg1;
- (id)createPlugin;
- (void).cxx_destruct;
- (id)model;

@end
