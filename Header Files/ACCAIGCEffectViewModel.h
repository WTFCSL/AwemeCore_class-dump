//
//     Generated by private class-dump
//

@class NSString;

@interface ACCAIGCEffectViewModel : NSObject <ACCAIGCEffectServiceProtocol> {
    BOOL _loadingEffectSignal;
    BOOL _closeEditPageSignal;
    BOOL _asyncQueueSignal;
    NSString *_musicIdSignal;
    long long _gobackSignal;
}

@property (nonatomic) long long gobackSignal;
@property (nonatomic) BOOL loadingEffectSignal;
@property (nonatomic) BOOL closeEditPageSignal;
@property (nonatomic) BOOL asyncQueueSignal;
@property (copy, nonatomic) NSString *musicIdSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)gobackSignal;
- (BOOL)loadingEffectSignal;
- (id)musicIdSignal;
- (BOOL)closeEditPageSignal;
- (void)loadingEffectWithStatus:(BOOL)arg0;
- (void)exitEditPageWhileLoading;
- (void)closeEditPage:(BOOL)arg0;
- (void)setGobackSignal:(long long)arg0;
- (void)setLoadingEffectSignal:(BOOL)arg0;
- (void)setMusicIdSignal:(id)arg0;
- (void)setCloseEditPageSignal:(BOOL)arg0;
- (void)switchSlotchangeMusic:(id)arg0;
- (BOOL)asyncQueueSignal;
- (void)setAsyncQueueSignal:(BOOL)arg0;
- (void).cxx_destruct;

@end
