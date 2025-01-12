//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@protocol AWELynxPopupProtocol <AWEAlertProtocol>

@property (copy, nonatomic) NSString *alertID;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *lynxURL;
@property (retain, nonatomic) NSNumber *lynxURLTimeout;
@property (copy, nonatomic) NSString *lynxControllerURL;
@property (retain, nonatomic) NSNumber *lynxControllerURLTimeout;
@property (nonatomic) BOOL cancelOtherAlerts;

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
- (void)setPriority:(long long)arg0;
- (long long)priority;
- (id)alertID;

@end
