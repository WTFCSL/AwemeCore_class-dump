//
//     Generated by private class-dump
//

@class NSString, AWEButton;

@interface AWEFansPushContainerViewController : UIViewController <AWEActionSheetDelegate, DUXActionSheetDelegate, AWERouterViewControllerProtocol> {
    NSString *_enterFrom;
    AWEButton *_moreFunctionButton;
    NSString *_userUrgeButtonText;
    NSString *_myUrgeButtonText;
}

@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEButton *moreFunctionButton;
@property (retain, nonatomic) NSString *userUrgeButtonText;
@property (retain, nonatomic) NSString *myUrgeButtonText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)enterFrom;
- (id)getParams;
- (id)buttonTexts;
- (void)didClickedButton:(id)arg0;
- (void)backBtnClicked:(id)arg0;
- (id)moreFunctionButton;
- (void)moreFunctionButtonClicked:(id)arg0;
- (void)trackDidClickMoreButton;
- (void)toggleUrgeReminder;
- (void)trackDidClickForwardViewButton;
- (void)trackCloseRemind;
- (void)trackOpenRemind;
- (void)setUserUrgeButtonText:(id)arg0;
- (void)setMyUrgeButtonText:(id)arg0;
- (id)userUrgeButtonText;
- (id)myUrgeButtonText;
- (void)setMoreFunctionButton:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
