//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLivePlaybackTapAction;

@interface IESLivePlaybackTapContainerFragment : IESLivePlaybackComponent <IESLivePlaybackComponentLifeCycle> {
    BOOL _isKeyboardShowing;
    BOOL _isHideTaskRunning;
    BOOL _isHideClick;
    id<IESLivePlaybackTapAction> _tapAction;
}

@property (retain, nonatomic) id<IESLivePlaybackTapAction> tapAction;
@property (nonatomic) BOOL isKeyboardShowing;
@property (nonatomic) BOOL isHideTaskRunning;
@property (nonatomic) BOOL isHideClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)componentWillUnmount;
- (void)addTapGesture;
- (void)setIsKeyboardShowing:(BOOL)arg0;
- (BOOL)isKeyboardShowing;
- (void)didClickContainerView:(id)arg0;
- (void)doubleClickContainerView:(id)arg0;
- (BOOL)isHideTaskRunning;
- (void)setIsHideClick:(BOOL)arg0;
- (void)setIsHideTaskRunning:(BOOL)arg0;
- (BOOL)isHideClick;
- (void)componentWillMount;
- (BOOL)shouldAddGesture;
- (void).cxx_destruct;
- (BOOL)shouldReceiveTouch:(id)arg0;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (id)tapAction;
- (void)setTapAction:(id)arg0;

@end
