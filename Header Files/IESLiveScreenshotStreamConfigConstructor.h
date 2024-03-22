//
//     Generated by private class-dump
//

@protocol IESLiveRoomServiceAdapter;

@interface IESLiveScreenshotStreamConfigConstructor : NSObject {
    id<IESLiveRoomServiceAdapter> _room;
}

@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> room;

- (id)constructStreamConfigWithRoom:(id)arg0 clarityConfig:(id)arg1;
- (id)preprocessRTMPPushSDKParams:(id)arg0 isLandscape:(BOOL)arg1 clarityConfig:(id)arg2;
- (id)adaptWidthHeight:(id)arg0 isLandscape:(BOOL)arg1;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;

@end