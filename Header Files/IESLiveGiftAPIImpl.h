//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveMonitor;

@interface IESLiveGiftAPIImpl : HTSLiveApi <IESLiveGiftAPI> {
    id<IESLiveMonitor> _monitor;
}

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchGiftListWithRoomModel:(id)arg0 label:(id)arg1 fetchMomentType:(long long)arg2 toRoom:(id)arg3 toUser:(id)arg4 scene:(unsigned long long)arg5 forGiftID:(id)arg6 extraParams:(id)arg7 callback:(id /* block */)arg8;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;

@end