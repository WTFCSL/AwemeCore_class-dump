//
//     Generated by private class-dump
//

@class ACCCameraSubscription, NSString, ACCGroupedPredicate;

@interface ACCRecordSystemLivePhotoServiceImpl : NSObject <ACCRecordSystemLivePhotoService> {
    BOOL _enableSystemLivePhoto;
    ACCCameraSubscription *_subscription;
    ACCGroupedPredicate *_isSystemLivePhotoFlowPredicate;
    ACCGroupedPredicate *_showHoldingTipPredicate;
}

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) ACCGroupedPredicate *isSystemLivePhotoFlowPredicate;
@property (retain, nonatomic) ACCGroupedPredicate *showHoldingTipPredicate;
@property (nonatomic) BOOL enableSystemLivePhoto;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPublishModel:(id)arg0;
- (BOOL)enableSystemLivePhoto;
- (void)setEnableSystemLivePhoto:(BOOL)arg0;
- (id)isSystemLivePhotoFlowPredicate;
- (id)showHoldingTipPredicate;
- (void)setShowHoldingTipPredicate:(id)arg0;
- (BOOL)p_enableSystemLivePhoto:(id)arg0;
- (void)setIsSystemLivePhotoFlowPredicate:(id)arg0;
- (void).cxx_destruct;
- (void)setSubscription:(id)arg0;
- (void)addSubscriber:(id)arg0;
- (id)subscription;
- (void)removeSubscriber:(id)arg0;

@end