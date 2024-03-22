//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEAlertConfigModel : NSObject {
    BOOL _cancelOtherAlerts;
    NSString *_alertID;
    NSString *_eventID;
    Class _eventClass;
    NSString *_eventClassName;
    long long _priority;
    NSString *_lynxURL;
    NSNumber *_lynxURLTimeout;
    NSString *_lynxControllerURL;
    NSNumber *_lynxControllerURLTimeout;
}

@property (retain, nonatomic) Class eventClass;
@property (copy, nonatomic) NSString *alertID;
@property (copy, nonatomic) NSString *eventID;
@property (copy, nonatomic) NSString *eventClassName;
@property (nonatomic) long long priority;
@property (nonatomic) BOOL cancelOtherAlerts;
@property (copy, nonatomic) NSString *lynxURL;
@property (retain, nonatomic) NSNumber *lynxURLTimeout;
@property (copy, nonatomic) NSString *lynxControllerURL;
@property (retain, nonatomic) NSNumber *lynxControllerURLTimeout;

- (void)setLynxURL:(id)arg0;
- (id)lynxURL;
- (id)lynxControllerURL;
- (id)lynxControllerURLTimeout;
- (id)lynxURLTimeout;
- (BOOL)cancelOtherAlerts;
- (void)setAlertID:(id)arg0;
- (void)setLynxURLTimeout:(id)arg0;
- (void)setLynxControllerURL:(id)arg0;
- (void)setLynxControllerURLTimeout:(id)arg0;
- (void)setCancelOtherAlerts:(BOOL)arg0;
- (id)eventClassName;
- (void)setEventClassName:(id)arg0;
- (void)setEventID:(id)arg0;
- (void).cxx_destruct;
- (void)setPriority:(long long)arg0;
- (id)eventID;
- (Class)eventClass;
- (long long)priority;
- (id)alertID;
- (void)setEventClass:(Class)arg0;

@end
