//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveGameLiveIMPort : NSObject <IESLiveToolbarComponentHandler, IESLiveAAIGamePortDelegate> {
    id /* block */ throwPacketBlock;
    long long _stampToken;
}

@property (nonatomic) long long stampToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ throwPacketBlock;

- (id)initWithDIContext:(id)arg0;
- (void)toolbarReceiveComponent:(id)arg0 completion:(id /* block */)arg1;
- (void)toolbarComponentRemovedReason:(unsigned long long)arg0 extra:(id)arg1;
- (void)setThrowPacketBlock:(id /* block */)arg0;
- (id /* block */)throwPacketBlock;
- (void)_handleEnterRoomExtra:(id)arg0;
- (void)_handleIMExtra:(id)arg0;
- (void)_handleAudienceEntranceMessage:(id)arg0;
- (long long)stampToken;
- (void)setStampToken:(long long)arg0;
- (void).cxx_destruct;
- (void)reloadIfNeeded;

@end
