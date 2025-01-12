//
//     Generated by private class-dump
//

@class IESLiveGeneralCarnivalMessageView, NSString, HTSLiveGeneralCarnivalMessage;

@interface IESLiveCarnivalStore : NSObject <HTSLiveMessageSubscriber, IESLiveDataSyncDelegate, IESVSMessageSubscriber> {
    BOOL _addDanmakuEnabled;
    BOOL _degradeForCarnival;
    HTSLiveGeneralCarnivalMessage *_cacheGeneralCarnival;
    IESLiveGeneralCarnivalMessageView *_generalCarnivalMessageView;
}

@property (retain, nonatomic) HTSLiveGeneralCarnivalMessage *cacheGeneralCarnival;
@property (retain, nonatomic) IESLiveGeneralCarnivalMessageView *generalCarnivalMessageView;
@property (nonatomic) BOOL addDanmakuEnabled;
@property (nonatomic) BOOL degradeForCarnival;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)subscribedSyncDataWithValue:(id)arg0 version:(long long)arg1;
- (void)subscribedSyncDataUpdatedWithValue:(id)arg0 oldVersion:(long long)arg1 newVersion:(long long)arg2;
- (void)generalCarnivalWillAppear:(BOOL)arg0 withMsg:(id)arg1;
- (void)generalCarnivalSpecialContentShow:(BOOL)arg0;
- (void)setDegradeForCarnival:(BOOL)arg0;
- (BOOL)degradeForCarnival;
- (void)handleSyncData:(id)arg0;
- (void)handleChatCarnivalMessageWithConfig:(id)arg0;
- (BOOL)enableProcessGeneralCarnival:(id)arg0;
- (void)handleGeneralCarnivalMessageWithConfig:(id)arg0;
- (BOOL)chatCarnivalEnable;
- (void)setCacheGeneralCarnival:(id)arg0;
- (void)setGeneralCarnivalMessageView:(id)arg0;
- (id)cacheGeneralCarnival;
- (id)generalCarnivalMessageView;
- (void)messageReceived:(id)arg0 source:(id)arg1;
- (void)cleanMessageWithSeekByUser;
- (BOOL)addDanmakuEnabled;
- (void)setAddDanmakuEnabled:(BOOL)arg0;
- (void).cxx_destruct;
- (void)messageReceived:(id)arg0;

@end
