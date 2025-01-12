//
//     Generated by private class-dump
//

@class NSString, NSMutableSet, NSMutableDictionary;

@interface IESLiveInteractFanTicketComponent : IESLiveInteractComponentBase <IESLiveInteractFanTicketRouter, IESLiveInteractFanTicketDelegate, HTSLiveAudienceActions> {
    BOOL _frequencyOptEnabled;
    NSMutableSet *_bizStores;
    NSMutableDictionary *_fanticketDict;
    NSMutableDictionary *_fanticketViewDict;
    NSMutableDictionary *_gcdTimers;
}

@property (retain, nonatomic) NSMutableSet *bizStores;
@property (retain, nonatomic) NSMutableDictionary *fanticketDict;
@property (retain, nonatomic) NSMutableDictionary *fanticketViewDict;
@property (retain, nonatomic) NSMutableDictionary *gcdTimers;
@property (nonatomic) BOOL frequencyOptEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)liveDidPause;
- (void)liveDidContinue;
- (void)removeFanticket:(int)arg0;
- (void)updateFanticket:(int)arg0 fanticketDict:(id)arg1;
- (void)componentDidChangedFromLayout:(id)arg0 toLayout:(id)arg1;
- (void)componentDidUpdatedGuestList:(id)arg0;
- (void)componentBindContext;
- (void)setFanticketDict:(id)arg0;
- (void)setFanticketViewDict:(id)arg0;
- (void)setGcdTimers:(id)arg0;
- (void)setFrequencyOptEnabled:(BOOL)arg0;
- (void)removeFanticket:(int)arg0 uid:(id)arg1;
- (void)registerFanticketView:(id)arg0 withUid:(id)arg1;
- (void)unRegisterFanticketView:(id)arg0 withUid:(id)arg1;
- (void)createBizStores;
- (void)addSettingListener;
- (id)bizStores;
- (id)fanticketViewDict;
- (id)fanticketDict;
- (void)renderFanticket:(id)arg0 uid:(id)arg1;
- (void)setBizStores:(id)arg0;
- (id)bizStoreClassGroup;
- (BOOL)frequencyOptEnabled;
- (void)realRenderFanticket:(id)arg0 uid:(id)arg1;
- (id)gcdTimers;
- (void).cxx_destruct;

@end
