//
//     Generated by private class-dump
//

@class IESLivePlaybackScrollViewDelegateProxy;

@interface IESLivePlaybackPopupInsideCollectionView : UICollectionView {
    long long _popupItemType;
    IESLivePlaybackScrollViewDelegateProxy *_delegateProxy;
}

@property (retain, nonatomic) IESLivePlaybackScrollViewDelegateProxy *delegateProxy;
@property (nonatomic) long long popupItemType;

- (void)didSetAttachingDIContext;
- (void)setPopupItemType:(long long)arg0;
- (long long)popupItemType;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 collectionViewLayout:(id)arg1;
- (void)setDelegateProxy:(id)arg0;
- (id)delegateProxy;
- (void)setDelegate:(id)arg0;

@end
