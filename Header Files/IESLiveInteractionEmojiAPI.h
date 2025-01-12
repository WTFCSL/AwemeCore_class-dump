//
//     Generated by private class-dump
//

@class NSOperationQueue, NSMutableDictionary;
@protocol IESLiveRoomService;

@interface IESLiveInteractionEmojiAPI : HTSLiveApi {
    id<IESLiveRoomService> _room;
    NSOperationQueue *_downloadQueue;
    NSMutableDictionary *_downloadTasks;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) NSOperationQueue *downloadQueue;
@property (retain, nonatomic) NSMutableDictionary *downloadTasks;

- (void)fetchEmojiList:(BOOL)arg0 scene:(long long)arg1 emojiCategory:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)apiPath:(id)arg0;
- (id)filePathWithEmoji:(id)arg0 emojiID:(id)arg1 prefix:(id)arg2;
- (void)fetchInteractEntranceActivityBtnsForUserId:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchInteractGuestHonorInfoForUserId:(id)arg0 type:(long long)arg1 completion:(id /* block */)arg2;
- (void)sendEmojiID:(id)arg0 toUserID:(id)arg1 type:(long long)arg2 action:(id)arg3 scene:(long long)arg4 completion:(id /* block */)arg5;
- (void)downloadEmojiSound:(id)arg0 emojiID:(id)arg1 completion:(id /* block */)arg2;
- (void)removeEmojiAudioCache:(id)arg0 emojiID:(id)arg1;
- (void).cxx_destruct;
- (void)setDownloadQueue:(id)arg0;
- (id)downloadQueue;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)downloadTasks;
- (void)setDownloadTasks:(id)arg0;
- (id)initWithRoom:(id)arg0;

@end
