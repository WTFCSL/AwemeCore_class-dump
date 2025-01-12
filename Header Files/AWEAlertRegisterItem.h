//
//     Generated by private class-dump
//

@class NSArray, NSString, NSObject, NSNumber;
@protocol NSCopying;

@interface AWEAlertRegisterItem : NSObject {
    Class _alertClass;
    NSString *_title;
    NSString *_detail;
    NSString *_lineOfBusiness;
    NSArray *_owners;
    NSObject<NSCopying> *_alertID;
    NSNumber *_priority;
    NSArray *_events;
    NSArray *_eventClassInfos;
    NSArray *_eventClasses;
    unsigned long long _alertClassStatus;
}

@property (copy, nonatomic) NSArray *eventClasses;
@property (retain, nonatomic) Class alertClass;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) NSString *lineOfBusiness;
@property (copy, nonatomic) NSArray *owners;
@property (copy, nonatomic) NSObject<NSCopying> *alertID;
@property (copy, nonatomic) NSNumber *priority;
@property (copy, nonatomic) NSArray *events;
@property (copy, nonatomic) NSArray *eventClassInfos;
@property (nonatomic) unsigned long long alertClassStatus;

- (void)setLineOfBusiness:(id)arg0;
- (id)lineOfBusiness;
- (void)setAlertID:(id)arg0;
- (Class)alertClass;
- (void)setAlertClass:(Class)arg0;
- (id)eventClassInfos;
- (void)setEventClassInfos:(id)arg0;
- (void)setEventClasses:(id)arg0;
- (unsigned long long)alertClassStatus;
- (void)setAlertClassStatus:(unsigned long long)arg0;
- (id)events;
- (void)setDetail:(id)arg0;
- (void).cxx_destruct;
- (void)setPriority:(id)arg0;
- (void)setEvents:(id)arg0;
- (id)title;
- (id)detail;
- (id)priority;
- (void)setTitle:(id)arg0;
- (id)alertID;
- (void)setOwners:(id)arg0;
- (id)owners;
- (id)eventClasses;

@end
