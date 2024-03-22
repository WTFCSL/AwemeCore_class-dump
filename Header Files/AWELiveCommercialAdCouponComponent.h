//
//     Generated by private class-dump
//

@class HTSEventContext, NSObject, AWEAwemeModel;
@protocol IESLiveRoomService, AWECommerceLiveComponentsManager;

@interface AWELiveCommercialAdCouponComponent : NSObject {
    id<IESLiveRoomService> _roomInfo;
    HTSEventContext *_trackContext;
    NSObject<AWECommerceLiveComponentsManager> *_componentsManager;
    AWEAwemeModel *_aweme;
}

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) id<IESLiveRoomService> roomInfo;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) NSObject<AWECommerceLiveComponentsManager> *componentsManager;

- (id)roomInfo;
- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)aweme;
- (void)setAweme:(id)arg0;
- (void)setRoomInfo:(id)arg0;
- (void)componentDidMount;
- (void)componentWillUnmount;
- (id)componentsManager;
- (void)setComponentsManager:(id)arg0;
- (void)resetAdCouponInfo;
- (void)configWithFragmentInfo:(id)arg0 roomContext:(id)arg1 componentsManager:(id)arg2 componentModel:(id)arg3;
- (void)tryReceivingAdCouponForAudience;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end