//
//     Generated by private class-dump
//

@class NSString, HTSLiveRoom;

@interface IESLivePlaybackVideoReplaceFragment : IESLivePlaybackComponent <IESVSVideoPlayAction, IESLivePlaybackChangeStreamAction> {
    HTSLiveRoom *_room;
    id _reminderAlert;
}

@property (retain, nonatomic) HTSLiveRoom *room;
@property (weak, nonatomic) id reminderAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_showAlert;
- (void)componentBindService;
- (void)didUpdatePlaybackEpisode:(id)arg0;
- (void)streamChangedWithEpisode:(id)arg0;
- (void)setReminderAlert:(id)arg0;
- (id)reminderAlert;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;

@end
