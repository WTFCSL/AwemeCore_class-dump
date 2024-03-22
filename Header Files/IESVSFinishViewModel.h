//
//     Generated by private class-dump
//

@class NSString, HTSEventContext, HTSLiveRoom;

@interface IESVSFinishViewModel : NSObject {
    id /* block */ _closeVCBlock;
    HTSEventContext *_trackContext;
    NSString *_finishUrl;
    HTSLiveRoom *_room;
    NSString *_currentURL;
    id _mixroom;
}

@property (retain, nonatomic) HTSLiveRoom *room;
@property (retain, nonatomic) NSString *currentURL;
@property (retain, nonatomic) id mixroom;
@property (copy, nonatomic) id /* block */ closeVCBlock;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSString *finishUrl;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)finishUrl;
- (void)setFinishUrl:(id)arg0;
- (void)setCloseVCBlock:(id /* block */)arg0;
- (id)actualOwner;
- (id)firstRequestPage;
- (id /* block */)closeVCBlock;
- (BOOL)isDrawEnabled;
- (void)fetchRoomInfoWithComplete:(id /* block */)arg0;
- (id)mixroom;
- (void)setMixroom:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)initWithRoom:(id)arg0;
- (id)currentURL;
- (void)setCurrentURL:(id)arg0;

@end
