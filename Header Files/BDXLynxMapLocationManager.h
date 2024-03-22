//
//     Generated by private class-dump
//

@class NSMapTable, NSString, CLHeading, CLLocationManager;

@interface BDXLynxMapLocationManager : NSObject <CLLocationManagerDelegate> {
    CLLocationManager *_manager;
    NSMapTable *_headingSubscriptionMap;
}

@property (retain, nonatomic) CLLocationManager *manager;
@property (retain, nonatomic) NSMapTable *headingSubscriptionMap;
@property (readonly, copy, nonatomic) CLHeading *heading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)headingAvailable;

- (id)headingSubscriptionMap;
- (void)subscribeToHeadingUpdatesForTarget:(id)arg0 completion:(id /* block */)arg1;
- (void)unsubscribeToHeadingUpdatesForTarget:(id)arg0;
- (void)setHeadingSubscriptionMap:(id)arg0;
- (id)init;
- (id)heading;
- (void).cxx_destruct;
- (void)locationManager:(id)arg0 didUpdateHeading:(id)arg1;
- (void)setManager:(id)arg0;
- (id)manager;

@end
