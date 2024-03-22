//
//     Generated by private class-dump
//

@class NSString, BDPUniqueID, UIView;
@protocol BDPCustomExitPopupRevisitEducationViewsProtocol;

@interface BDPRevisitEducationViewController : BDPBaseAlertViewController {
    BOOL _hasOption;
    BDPUniqueID *_uniqueID;
    id /* block */ _exitAction;
    id /* block */ _closeAction;
    NSString *_revisitEducationTitle;
    NSString *_revisitEducationDesc;
    NSString *_revisitEducationImageURL;
    UIView<BDPCustomExitPopupRevisitEducationViewsProtocol> *_revisitEducationView;
    unsigned long long _revisitEducationScene;
}

@property (nonatomic) BOOL hasOption;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) id /* block */ exitAction;
@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) NSString *revisitEducationTitle;
@property (copy, nonatomic) NSString *revisitEducationDesc;
@property (copy, nonatomic) NSString *revisitEducationImageURL;
@property (retain, nonatomic) UIView<BDPCustomExitPopupRevisitEducationViewsProtocol> *revisitEducationView;
@property (nonatomic) unsigned long long revisitEducationScene;

+ (id)getSettings;
+ (BOOL)shouldShowRevisitEducationViewWithUniqueID:(id)arg0 info:(id)arg1;
+ (BOOL)preCheckShouldShowRevisitEducationViewWithUniqueID:(id)arg0;
+ (void)prefetchImageIfNeed;
+ (BOOL)showRevisitEducationViewWithUniqueID:(id)arg0 scene:(unsigned long long)arg1;

- (void)_eventWithName:(id)arg0 params:(id)arg1;
- (id)initWithUniqueID:(id)arg0 exitAction:(id /* block */)arg1 hasOption:(BOOL)arg2 scene:(unsigned long long)arg3;
- (BOOL)hasOption;
- (id)initWithUniqueID:(id)arg0 scene:(unsigned long long)arg1;
- (id)revisitEducationImageURL;
- (void)fetchRevisitEducationViewConfig;
- (id)revisitEducationView;
- (unsigned long long)revisitEducationScene;
- (void)setRevisitEducationTitle:(id)arg0;
- (void)setRevisitEducationDesc:(id)arg0;
- (void)setRevisitEducationImageURL:(id)arg0;
- (id)revisitEducationTitle;
- (id)revisitEducationDesc;
- (id)_getHostRevisitEducationViewWithUniqueID:(id)arg0 imageURL:(id)arg1;
- (void)setRevisitEducationView:(id)arg0;
- (void)setHasOption:(BOOL)arg0;
- (void)setRevisitEducationScene:(unsigned long long)arg0;
- (BOOL)shouldAutorotate;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setUniqueID:(id)arg0;
- (id /* block */)exitAction;
- (id /* block */)closeAction;
- (void)setExitAction:(id /* block */)arg0;
- (void)setCloseAction:(id /* block */)arg0;
- (void)viewDidLoad;
- (id)alertView;

@end