//
//     Generated by private class-dump
//

@class NSMutableSet;

@interface AWEPlayInteractionLiveAppointmentGuideManager : NSObject {
    NSMutableSet *_liveAppointmentSet;
}

@property (retain, nonatomic) NSMutableSet *liveAppointmentSet;

+ (id)shareInstance;

- (BOOL)checkLiveAppointmentStatus:(id)arg0;
- (void)registerAppointment:(id)arg0;
- (id)liveAppointmentSet;
- (void)setLiveAppointmentSet:(id)arg0;
- (void).cxx_destruct;

@end
