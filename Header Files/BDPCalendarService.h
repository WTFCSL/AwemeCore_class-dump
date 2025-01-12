//
//     Generated by private class-dump
//

@class EKSource, NSDateFormatter, EKEventStore, NSMutableSet, NSString;

@interface BDPCalendarService : NSObject <BDPCalendarService> {
    EKEventStore *_eventStore;
    EKSource *_source;
    NSDateFormatter *_dateFormatter;
    NSMutableSet *_toastStateChecking;
}

@property (retain, nonatomic) EKEventStore *eventStore;
@property (retain, nonatomic) EKSource *source;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSMutableSet *toastStateChecking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)showCalendarEventPopupForAppID:(id)arg0 title:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
- (void)bdp_addCalendarEventWithAppID:(id)arg0 param:(id)arg1 callback:(id /* block */)arg2;
- (void)bdp_checkCalendarEventWithAppID:(id)arg0 param:(id)arg1 callback:(id /* block */)arg2;
- (void)bdp_removeCalendarEventWithAppID:(id)arg0 param:(id)arg1 callback:(id /* block */)arg2;
- (id)checkCalendarWithAppID:(id)arg0 apiName:(id)arg1;
- (id)toastStateChecking;
- (id)addCalendarEventWithParam:(id)arg0 appID:(id)arg1;
- (void)removeLocalEventWithParams:(id)arg0;
- (void)checkLocalEventWithParams:(id)arg0 type:(id)arg1 appID:(id)arg2 completion:(id /* block */)arg3;
- (void)checkCalendarEventWithDurationParam:(id)arg0 type:(id)arg1 appID:(id)arg2 completion:(id /* block */)arg3;
- (id)lastSecondForDate:(id)arg0;
- (id)creatCalendarWithAppID:(id)arg0;
- (id)addLocalEventWithParams:(id)arg0 ekEvent:(id)arg1;
- (id)localEventKeyWithEventParams:(id)arg0;
- (id)cleanLocalEventsForLimit:(id)arg0;
- (id)getToastTextWithParam:(id)arg0;
- (void)setToastStateChecking:(id)arg0;
- (id)source;
- (void).cxx_destruct;
- (void)setDateFormatter:(id)arg0;
- (id)dateFormatter;
- (id)eventStore;
- (void)setSource:(id)arg0;
- (void)setEventStore:(id)arg0;

@end
