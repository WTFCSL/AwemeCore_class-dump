//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, IESLiveComponentContext;
@protocol IESLiveRoomServiceAdapter;

@interface IESLiveInvisibleStore : NSObject <IESLiveInvisibleRouter> {
    id<IESLiveRoomServiceAdapter> _room;
    HTSEventContext *_trackContext;
    IESLiveComponentContext *_componentContext;
}

@property (readonly, nonatomic) id<IESLiveRoomServiceAdapter> room;
@property (readonly, nonatomic) HTSEventContext *trackContext;
@property (readonly, nonatomic) IESLiveComponentContext *componentContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (id)componentContext;
- (void)didSetAttachingDIContext;
- (id)initWithRoom:(id)arg0 componentContext:(id)arg1 trackContext:(id)arg2;
- (void)registerInvisiblePrivilegeEnterRoomToast:(id)arg0;
- (void)cleanInvisiblePrivilegeEnterRoomToast;
- (id)invisiblePrivilegeEnterRoomToast;
- (void).cxx_destruct;
- (id)room;

@end
