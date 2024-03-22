//
//     Generated by private class-dump
//

@class IESLivePKGuestTrackerContext;

@interface IESLivePKGuestTrackHandler : NSObject {
    IESLivePKGuestTrackerContext *_context;
}

@property (weak, nonatomic) IESLivePKGuestTrackerContext *context;

- (id)initWithDIContext:(id)arg0;
- (void)trackWithEvent:(id)arg0 extra:(id)arg1;
- (void)trackWithInteractionEvent:(id)arg0 extra:(id)arg1;
- (void)trackAudienceOnGuestConnectionOver;
- (void)trackAudienceWithPKEnd;
- (void)trackAudienceWithPunishEnd;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end