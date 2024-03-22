//
//     Generated by private class-dump
//

@class NSString, IESScreenCastContainerView;

@interface IESScreenCastContainerViewController : UIViewController <IESScreenCastContainerViewControllerAdapter> {
    id /* block */ _didAddClarityChooseViewControllerBlock;
    id /* block */ _willRemoveClarityChooseViewControllerBlock;
    IESScreenCastContainerView *_containerView;
}

@property (retain, nonatomic) IESScreenCastContainerView *containerView;
@property (copy, nonatomic) id /* block */ didAddClarityChooseViewControllerBlock;
@property (copy, nonatomic) id /* block */ willRemoveClarityChooseViewControllerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)didAddClarityChooseViewControllerBlock;
- (id /* block */)willRemoveClarityChooseViewControllerBlock;
- (void)setDidAddClarityChooseViewControllerBlock:(id /* block */)arg0;
- (void)setWillRemoveClarityChooseViewControllerBlock:(id /* block */)arg0;
- (void)removeClarityChooseView;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)viewDidLoad;
- (void)loadView;

@end
