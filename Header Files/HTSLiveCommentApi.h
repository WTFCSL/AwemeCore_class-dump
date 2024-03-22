//
//     Generated by private class-dump
//

@protocol IESLiveRoomService;

@interface HTSLiveCommentApi : HTSLiveApi {
    id<IESLiveRoomService> _roomModel;
}

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (id)roomModel;
- (void)setRoomModel:(id)arg0;
- (id)episodeInfoString;
- (id)channelCommentTypeWithRequestModel:(id)arg0;
- (void)fetchCommentInventionsWithSentence:(id)arg0 preSentence:(id)arg1 roomID:(id)arg2 completion:(id /* block */)arg3;
- (void)sendCommentWithRequestModel:(id)arg0 callBack:(id /* block */)arg1;
- (void)sendChannelCommentWithRequestModel:(id)arg0 channelID:(id)arg1 callBack:(id /* block */)arg2;
- (void)sendBarrage:(id)arg0 finished:(id /* block */)arg1;
- (void)uploadAudioWithPath:(id)arg0 duration:(long long)arg1 flowTime:(long long)arg2 completion:(id /* block */)arg3;
- (void)uploadAnchorSpeechAudioWithPath:(id)arg0 duration:(long long)arg1 atUserContent:(id)arg2 content:(id)arg3 completion:(id /* block */)arg4;
- (void)setAudioChat:(unsigned long long)arg0 finished:(id /* block */)arg1;
- (void)fetchAudioChatCodeFinished:(id /* block */)arg0;
- (void)sendPrivilegeDanmaku:(id)arg0 style:(int)arg1 completion:(id /* block */)arg2;
- (void)fetchSilenceBlockInfoWithCompletion:(id /* block */)arg0;
- (void).cxx_destruct;

@end