//
//     Generated by private class-dump
//

@class NSNumber;

@interface IESLiveSelfDisciplineApi : HTSLiveApi {
    NSNumber *_roomId;
}

@property (retain, nonatomic) NSNumber *roomId;

- (id)roomId;
- (void)setRoomId:(id)arg0;
- (void)getSelfDisciplineSettingInfoWithSecUserID:(id)arg0 callback:(id /* block */)arg1;
- (void)setSelfDisciplineConfigWithSwitchStatus:(int)arg0 target:(id)arg1 callback:(id /* block */)arg2;
- (void)setConfigWithStatus:(int)arg0 topic:(id)arg1 duration:(long long)arg2 callback:(id /* block */)arg3;
- (void)sendSignal:(int)arg0;
- (void)getPunchInfo:(id)arg0 callback:(id /* block */)arg1;
- (void).cxx_destruct;

@end
