//
//     Generated by private class-dump
//

@class NSNumber, NSString, IESLiveUpdateRoomInfoApi;

@interface IESLiveAnchorCommentPreferenceIMP : NSObject <IESLiveAnchorCommentPreferenceService> {
    IESLiveUpdateRoomInfoApi *_updateRoomInfoApi;
}

@property (retain, nonatomic) IESLiveUpdateRoomInfoApi *updateRoomInfoApi;
@property (readonly, nonatomic) NSNumber *commentAuthNumForRequest;
@property (nonatomic) BOOL allowComment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAllowComment:(BOOL)arg0;
- (BOOL)allowComment;
- (void)markEntryShown;
- (BOOL)isEntryShownBefore;
- (void)updateAllowCommentSetting:(BOOL)arg0 roomID:(id)arg1 completion:(id /* block */)arg2;
- (id)commentAuthNumForRequest;
- (id)updateRoomInfoApi;
- (void)setUpdateRoomInfoApi:(id)arg0;
- (void).cxx_destruct;

@end
