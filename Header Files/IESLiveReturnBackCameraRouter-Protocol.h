//
//     Generated by private class-dump
//

@class HTSLiveRoom;

@protocol IESLiveReturnBackCameraRouter <NSObject>

@property (readonly, nonatomic) HTSLiveRoom *backRoom;

- (void)clearStack;
- (void)returnBack;
- (id)backRoom;
- (BOOL)canRecordRoomCamera:(id)arg0 room:(id)arg1;
- (void)recordAsyncForCamera:(id)arg0 room:(id)arg1;
- (BOOL)canReturnBackCamera:(id)arg0 room:(id)arg1;
- (id)renderIndicatorView:(id)arg0 needResetAnimation:(BOOL)arg1;
- (BOOL)returnBackIndicatorShowing;
- (void)clearStore;

@end