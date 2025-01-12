//
//     Generated by private class-dump
//

@class NSString, IESLiveLayoutPlaceholderView, IESLiveRightBottomMutuallyExclusiveItem;

@interface IESLiveAudienceVideoPlayFragment : IESLiveRoomComponent <IESLiveSEIListener> {
    IESLiveLayoutPlaceholderView *_placeholderView;
    IESLiveRightBottomMutuallyExclusiveItem *_anchorVideoItem;
}

@property (weak, nonatomic) IESLiveLayoutPlaceholderView *placeholderView;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *anchorVideoItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)arg0;
- (void)p_addPlaceholderView;
- (void)p_removePlaceholderView;
- (void)setAnchorVideoItem:(id)arg0;
- (id)anchorVideoItem;
- (id)placeholderView;
- (void).cxx_destruct;
- (void)setPlaceholderView:(id)arg0;

@end
