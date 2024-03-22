//
//     Generated by private class-dump
//

@class NSMutableArray;
@protocol ACCCameraService;

@interface ACCEffectTouchDeliveryGestureRecognizer : UIGestureRecognizer {
    BOOL _deliveryImmediately;
    BOOL _openDeliveryByTap;
    BOOL _isTouching;
    BOOL _needCacheTouch;
    id /* block */ _touchFilterBlock;
    id<ACCCameraService> _cameraService;
    long long _tapCounter;
    NSMutableArray *_cachedTouchInfoList;
}

@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (nonatomic) BOOL isTouching;
@property (nonatomic) BOOL needCacheTouch;
@property (nonatomic) long long tapCounter;
@property (retain, nonatomic) NSMutableArray *cachedTouchInfoList;
@property (nonatomic) BOOL deliveryImmediately;
@property (nonatomic) BOOL openDeliveryByTap;
@property (copy, nonatomic) id /* block */ touchFilterBlock;

- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (id)initWithCameraService:(id)arg0;
- (void)setTouchFilterBlock:(id /* block */)arg0;
- (void)deliveryCachedTouches;
- (void)setOpenDeliveryByTap:(BOOL)arg0;
- (void)setDeliveryImmediately:(BOOL)arg0;
- (void)setNeedCacheTouch:(BOOL)arg0;
- (long long)tapCounter;
- (void)setTapCounter:(long long)arg0;
- (void)delayCheckOpenDeliveryWithCount:(long long)arg0;
- (id)cachedTouchInfoList;
- (BOOL)deliveryImmediately;
- (void)_handleTouches:(id)arg0;
- (BOOL)_checkAllTouchesFinished:(id)arg0;
- (void)_delayReset;
- (BOOL)openDeliveryByTap;
- (id /* block */)touchFilterBlock;
- (BOOL)needCacheTouch;
- (void)setCachedTouchInfoList:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isTouching;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (void)touchesMoved:(id)arg0 withEvent:(id)arg1;
- (void)touchesCancelled:(id)arg0 withEvent:(id)arg1;
- (void)setIsTouching:(BOOL)arg0;

@end
