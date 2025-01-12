//
//     Generated by private class-dump
//

@class IESLiveReturnBackCameraStore, NSString, HTSLiveRoom, NSMutableArray, IESLiveReturnBackCameraIndicatorView;

@interface IESLiveReturnBackCameraRouterImpl : NSObject <IESLiveReferenceActions, IESLiveReturnBackCameraRouter> {
    IESLiveReturnBackCameraIndicatorView *_indicatorView;
    IESLiveReturnBackCameraStore *_store;
    unsigned long long _returnBackStyle;
    NSMutableArray *_backStores;
}

@property (retain, nonatomic) IESLiveReturnBackCameraIndicatorView *indicatorView;
@property (retain, nonatomic) IESLiveReturnBackCameraStore *store;
@property (nonatomic) unsigned long long returnBackStyle;
@property (retain, nonatomic) NSMutableArray *backStores;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HTSLiveRoom *backRoom;

+ (id)shared;

- (id)attachingDIContext;
- (void)clearStack;
- (void)returnBack;
- (double)returnBackIndicatorViewWidth;
- (id)backRoom;
- (void)didLeaveAudienceRoom;
- (unsigned long long)returnBackStyle;
- (void)setReturnBackStyle:(unsigned long long)arg0;
- (BOOL)canRecordRoomCamera:(id)arg0 room:(id)arg1;
- (void)recordAsyncForCamera:(id)arg0 room:(id)arg1;
- (BOOL)canReturnBackCamera:(id)arg0 room:(id)arg1;
- (id)renderIndicatorView:(id)arg0 needResetAnimation:(BOOL)arg1;
- (BOOL)returnBackIndicatorShowing;
- (void)setBackStores:(id)arg0;
- (id)backStores;
- (double)timeForKey:(id)arg0 defaultValue:(double)arg1;
- (double)newTimeForKey:(id)arg0 defaultValue:(double)arg1;
- (void)returnBackAction:(double)arg0 trackContext:(id)arg1;
- (BOOL)hasBeenRecordCamera:(id)arg0 room:(id)arg1;
- (BOOL)canReturnBackCameraWithRoom:(id)arg0;
- (id)renderIndicatorViewWithTrackContext:(id)arg0 clickAction:(id /* block */)arg1 needResetAnimation:(BOOL)arg2;
- (id)init;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg0;
- (id)cameraID;
- (void)clearStore;

@end
