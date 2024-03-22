//
//     Generated by private class-dump
//

@class IESLiveAnchorAudienceInteractiveGameModel, UIView;
@protocol IESLiveGameOpenPlatformFoundationAPIServiceInterface;

@interface IESLiveGameOpenPlatformReportConfiguration : NSObject {
    UIView *_container;
    id<IESLiveGameOpenPlatformFoundationAPIServiceInterface> _reportAPI;
    IESLiveAnchorAudienceInteractiveGameModel *_gameModel;
    id /* block */ _willAddReportPanelToContainer;
    id /* block */ _didHideReportPanelCallback;
}

@property (weak, nonatomic) UIView *container;
@property (retain, nonatomic) id<IESLiveGameOpenPlatformFoundationAPIServiceInterface> reportAPI;
@property (retain, nonatomic) IESLiveAnchorAudienceInteractiveGameModel *gameModel;
@property (copy, nonatomic) id /* block */ willAddReportPanelToContainer;
@property (copy, nonatomic) id /* block */ didHideReportPanelCallback;

- (id)reportAPI;
- (void)setReportAPI:(id)arg0;
- (id /* block */)willAddReportPanelToContainer;
- (void)setWillAddReportPanelToContainer:(id /* block */)arg0;
- (id /* block */)didHideReportPanelCallback;
- (void)setDidHideReportPanelCallback:(id /* block */)arg0;
- (id)container;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (id)gameModel;
- (void)setGameModel:(id)arg0;

@end
