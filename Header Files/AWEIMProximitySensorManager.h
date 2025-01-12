//
//     Generated by private class-dump
//

@class NSString, NSMutableSet, AWEIMFakeBlackScreenHelper;

@interface AWEIMProximitySensorManager : HTSService <AWEIMProximitySensorManagerProtocol> {
    BOOL _hasCheckedSensorAvailability;
    BOOL _isProximitySensorAvailable;
    NSMutableSet *_observers;
    AWEIMFakeBlackScreenHelper *_fakeBlackScreenHelper;
}

@property (retain, nonatomic) NSMutableSet *observers;
@property (retain, nonatomic) AWEIMFakeBlackScreenHelper *fakeBlackScreenHelper;
@property (nonatomic) BOOL hasCheckedSensorAvailability;
@property (nonatomic) BOOL isProximitySensorAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)serviceScopeType;

- (void)proximityMonitorStateChangeNotification:(id)arg0;
- (id)fakeBlackScreenHelper;
- (void)addProximityStateObserver:(id)arg0;
- (void)removeProximityStateObserver:(id)arg0;
- (BOOL)isProximitySensorAvailable;
- (void)setFakeBlackScreenHelper:(id)arg0;
- (BOOL)hasCheckedSensorAvailability;
- (void)setHasCheckedSensorAvailability:(BOOL)arg0;
- (void)setIsProximitySensorAvailable:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)observers;
- (void)setObservers:(id)arg0;
- (void)dealloc;

@end
