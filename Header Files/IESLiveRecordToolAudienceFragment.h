//
//     Generated by private class-dump
//

@class IESLiveRecordToolAudienceAppManager;

@interface IESLiveRecordToolAudienceFragment : IESLiveRoomComponent {
    IESLiveRecordToolAudienceAppManager *_appManager;
}

@property (retain, nonatomic) IESLiveRecordToolAudienceAppManager *appManager;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)componentMount;
- (void)componentUnmount;
- (void)setAppManager:(id)arg0;
- (void).cxx_destruct;
- (id)appManager;

@end
