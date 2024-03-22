//
//     Generated by private class-dump
//

@class HTSEventContext, NSString;
@protocol IESLiveRoomService;

@interface IESLiveScreenRecordTracker : NSObject <IESLiveScreenRecordTrackerProtocol> {
    id<IESLiveRoomService> _room;
    HTSEventContext *_trackContext;
    long long _pushToType;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) long long pushToType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (long long)pushToType;
- (void)setPushToType:(long long)arg0;
- (id)initWithRoom:(id)arg0 trackContext:(id)arg1;
- (void)trackScreenRecordBtnClick;
- (void)trackScreenRecordCancel:(BOOL)arg0;
- (void)trackScreenRecordFinishSucceed:(BOOL)arg0 duration:(long long)arg1 errorType:(long long)arg2 extra:(id)arg3;
- (void)trackScreenRecordDiscard;
- (void)trackBackRecordBtnClick;
- (void)trackBackRecordFinishSucceed:(BOOL)arg0 duration:(unsigned long long)arg1 errorType:(long long)arg2 extra:(id)arg3;
- (void)trackBackRecordRetryCanStart:(BOOL)arg0 shouldRequest:(BOOL)arg1 extra:(id)arg2;
- (void)trackBackRecordDiscard;
- (void)trackSaveDraftClickWithRecordType:(long long)arg0;
- (void)trackSaveDraftResultSuccess:(BOOL)arg0 errorType:(long long)arg1 extra:(id)arg2;
- (void)trackShareToFansGroupClickWithRecordType:(long long)arg0;
- (void)trackShareToFansGroupResultSuccess:(BOOL)arg0 errorType:(long long)arg1 extra:(id)arg2;
- (void)trackDownloadClickWithRecordType:(long long)arg0;
- (void)trackDownloadResultSuccess:(BOOL)arg0 errorType:(long long)arg1 extra:(id)arg2;
- (void)trackPublishClickWithRecordType:(long long)arg0;
- (void)trackPublishResultSuccess:(BOOL)arg0 errorType:(long long)arg1 extra:(id)arg2;
- (BOOL)isDouyinAdmin;
- (void)FullLinkTrackEventWithName:(id)arg0 step:(id)arg1 params:(id)arg2;
- (id)isAnchorForTracker;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (id)room;
- (void)setRoom:(id)arg0;
- (BOOL)isAdmin;

@end