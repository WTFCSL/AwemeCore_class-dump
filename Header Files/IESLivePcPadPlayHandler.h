//
//     Generated by private class-dump
//

@class HTSEventContext;
@protocol IESLiveRoomService, IESLivePadCastService;

@interface IESLivePcPadPlayHandler : NSObject {
    BOOL _searchPad;
    BOOL _searchPc;
    id<IESLiveRoomService> _room;
    HTSEventContext *_trackContext;
    id<IESLivePadCastService> _padCast;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLivePadCastService> padCast;
@property (nonatomic) BOOL searchPad;
@property (nonatomic) BOOL searchPc;

+ (id)deviceIcon:(id)arg0 theme:(unsigned long long)arg1;
+ (id)pcFirstHelpUrl;
+ (id)padFirstHelpUrl;
+ (id)pcSecondHelpUrl;
+ (id)padSecondHelpUrl;
+ (id)pcGuideUrl;
+ (double)scanTimeOut;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)trackWithEvent:(id)arg0 params:(id)arg1;
- (id)initWithRoom:(id)arg0 trackContext:(id)arg1;
- (void)startFetchPadListWithUpdateBlock:(id /* block */)arg0;
- (void)startPushToPadDevice:(id)arg0 callback:(id /* block */)arg1;
- (void)startLoginToPadDevice:(id)arg0 extraInfo:(id)arg1 callback:(id /* block */)arg2;
- (void)beginDiscoverDevice;
- (void)stopDiscoverDevice;
- (BOOL)hasPadFound;
- (void)filterWithType:(long long)arg0 callback:(id /* block */)arg1;
- (void)startPushToDevice:(id)arg0 callback:(id /* block */)arg1;
- (void)fetchPcDeviceListCallback:(id /* block */)arg0;
- (BOOL)searchPc;
- (BOOL)searchPad;
- (id)padCast;
- (void)startPushToPcDevice:(id)arg0 callback:(id /* block */)arg1;
- (void)setSearchPc:(BOOL)arg0;
- (id)p_createPcDeviceWithData:(id)arg0;
- (void)setSearchPad:(BOOL)arg0;
- (void)setPadCast:(id)arg0;
- (void).cxx_destruct;
- (void)clearData;
- (id)room;
- (void)setRoom:(id)arg0;

@end