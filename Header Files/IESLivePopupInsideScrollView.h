//
//     Generated by private class-dump
//

@class IESLiveScrollViewDelegateProxy;

@interface IESLivePopupInsideScrollView : UIScrollView {
    long long _popupItemType;
    IESLiveScrollViewDelegateProxy *_delegateProxy;
}

@property (retain, nonatomic) IESLiveScrollViewDelegateProxy *delegateProxy;
@property (nonatomic) long long popupItemType;

- (void)didSetAttachingDIContext;
- (void)setPopupItemType:(long long)arg0;
- (long long)popupItemType;
- (void).cxx_destruct;
- (void)setDelegateProxy:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegateProxy;
- (void)setDelegate:(id)arg0;

@end
