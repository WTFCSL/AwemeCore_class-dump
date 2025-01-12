//
//     Generated by private class-dump
//

@class AWEDesktopSystemPopupGuideModel;
@protocol AWEDesktopSystemPopupGuideActionDelegateProtocol;

@interface AWEDesktopSystemPopupGuideViewModel : NSObject {
    AWEDesktopSystemPopupGuideModel *_guideModel;
    id<AWEDesktopSystemPopupGuideActionDelegateProtocol> _actionDelegate;
}

@property (retain, nonatomic) AWEDesktopSystemPopupGuideModel *guideModel;
@property (weak, nonatomic) id<AWEDesktopSystemPopupGuideActionDelegateProtocol> actionDelegate;

- (id)guideModel;
- (void)setGuideModel:(id)arg0;
- (void)rightButtonAction;
- (id)getTrackPopType;
- (void)guideViewDidLoad;
- (void)leftButtonAction;
- (BOOL)needToEnablePip;
- (void)desktopButtonAction;
- (void)clickMaskAreaAction;
- (id)initWithGuideModel:(id)arg0 actionDelegate:(id)arg1;
- (double)guideViewHeight;
- (void)prepareGuideViewResource;
- (void)recordWidgetShowTime;
- (void)trackGuideWithAction:(id)arg0;
- (void)trackWithAction:(id)arg0;
- (void).cxx_destruct;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg0;
- (void)closeButtonAction;

@end
