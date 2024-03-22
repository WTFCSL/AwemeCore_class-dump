//
//     Generated by private class-dump
//

@class IESLiveGroupPhotoStore, NSString, HTSLiveGroupPhotoJumpDetail, IESLiveGroupPhotoPanelView;

@interface IESLiveGroupPhotoFragment : IESLiveRoomComponent <IESLiveGroupPhotoReaction> {
    IESLiveGroupPhotoStore *_store;
    HTSLiveGroupPhotoJumpDetail *_groupPhotoInfo;
    IESLiveGroupPhotoPanelView *_groupPhotoView;
}

@property (retain, nonatomic) IESLiveGroupPhotoStore *store;
@property (retain, nonatomic) HTSLiveGroupPhotoJumpDetail *groupPhotoInfo;
@property (retain, nonatomic) IESLiveGroupPhotoPanelView *groupPhotoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentCreate;
- (void)setGroupPhotoView:(id)arg0;
- (id)groupPhotoView;
- (void)showGroupPhotoView;
- (id)groupPhotoInfo;
- (void)setGroupPhotoInfo:(id)arg0;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;

@end
