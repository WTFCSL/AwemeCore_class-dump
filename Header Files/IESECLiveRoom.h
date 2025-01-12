//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveRoomService, IESECLiveRoomCart;

@interface IESECLiveRoom : NSObject <IESECLiveRoom> {
    BOOL _orientationLandscape;
    id<IESLiveRoomService> _roomService;
}

@property (weak, nonatomic) id<IESLiveRoomService> roomService;
@property (nonatomic, getter=isOrientationLandscape) BOOL orientationLandscape;
@property (readonly, copy, nonatomic) NSString *roomID;
@property (readonly, copy, nonatomic) NSString *anchorID;
@property (readonly, copy, nonatomic) NSString *anchorSecUserID;
@property (readonly, copy, nonatomic) NSString *authorID;
@property (readonly, nonatomic) long long followStatus;
@property (readonly, nonatomic) BOOL withCommercePermission;
@property (readonly, nonatomic) BOOL withFusionShopEntry;
@property (readonly, nonatomic) id liveDIContext;
@property (readonly, copy, nonatomic) NSString *logID;
@property (readonly, nonatomic) long long scene;
@property (readonly, nonatomic) id<IESECLiveRoomCart> roomCart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)followStatus;
- (BOOL)withFusionShopEntry;
- (id)roomCart;
- (BOOL)withCommercePermission;
- (id)anchorID;
- (int)roomType;
- (id)initWithRoomService:(id)arg0;
- (void)setRoomService:(id)arg0;
- (id)roomService;
- (void)forceUpdateToOrientation:(long long)arg0;
- (id)liveDIContext;
- (BOOL)isOrientationLandscape;
- (id)anchorSecUserID;
- (void)setOrientationLandscape:(BOOL)arg0;
- (BOOL)isD3Room;
- (void).cxx_destruct;
- (long long)scene;
- (id)roomID;
- (id)logID;
- (id)authorID;

@end
