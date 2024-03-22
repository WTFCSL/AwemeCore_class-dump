//
//     Generated by private class-dump
//

@class AWERelationAlertView, NSString, AWEVCDAlertModel, AWEAuthorizeStateManager;

@interface AWERelationAlertViewController : UIViewController <AWERelationAlertViewDelegate> {
    id /* block */ _didClickBlock;
    AWERelationAlertView *_alertView;
    id /* block */ _completionBlock;
    id /* block */ _didShowBlock;
    AWEVCDAlertModel *_relationModel;
    AWEAuthorizeStateManager *_authorizeStateManager;
}

@property (retain, nonatomic) AWERelationAlertView *alertView;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ didShowBlock;
@property (retain, nonatomic) AWEVCDAlertModel *relationModel;
@property (retain, nonatomic) AWEAuthorizeStateManager *authorizeStateManager;
@property (copy, nonatomic) id /* block */ didClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)didShowBlock;
- (void)setDidShowBlock:(id /* block */)arg0;
- (void)agreeAction;
- (id /* block */)didClickBlock;
- (void)setDidClickBlock:(id /* block */)arg0;
- (void)setRelationModel:(id)arg0;
- (id)relationModel;
- (void)setAuthorizeStateManager:(id)arg0;
- (id)authorizeStateManager;
- (void)nextTimeAction;
- (id)initWithRelationModel:(id)arg0 didShowBlock:(id /* block */)arg1 complete:(id /* block */)arg2;
- (void).cxx_destruct;
- (void)setAlertView:(id)arg0;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)viewDidLoad;
- (id)alertView;

@end