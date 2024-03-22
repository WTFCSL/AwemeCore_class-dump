//
//     Generated by private class-dump
//

@class IESLiveBottomRightCardStore, IESLiveTopRightCardStore, IESLiveCommonCardApi;

@interface IESLiveBottomRightCardFragment : IESLiveRoomComponent {
    IESLiveBottomRightCardStore *_bottomRightCardStore;
    IESLiveCommonCardApi *_api;
    IESLiveTopRightCardStore *_topRightCardStore;
}

@property (retain, nonatomic) IESLiveBottomRightCardStore *bottomRightCardStore;
@property (retain, nonatomic) IESLiveCommonCardApi *api;
@property (retain, nonatomic) IESLiveTopRightCardStore *topRightCardStore;

- (void)componentCreate;
- (void)componentMount;
- (void)componentOrientationChanged:(long long)arg0;
- (void)componentOrientationTransitionBegin:(long long)arg0;
- (id)setCardStore:(id)arg0;
- (void)setTopRightCardStore:(id)arg0;
- (void)setBottomRightCardStore:(id)arg0;
- (void)fetchCommonCardInfo;
- (id)topRightCardStore;
- (id)bottomRightCardStore;
- (void).cxx_destruct;
- (id)api;
- (void)setApi:(id)arg0;

@end
