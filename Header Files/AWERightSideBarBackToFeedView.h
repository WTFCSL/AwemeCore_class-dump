//
//     Generated by private class-dump
//

@class NSString;

@interface AWERightSideBarBackToFeedView : UIView <AWERightSidebarPageBottomViewProtocol> {
    id /* block */ _actionBlock;
}

@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id /* block */)actionBlock;
- (void)setupView;
- (void)setActionBlock:(id /* block */)arg0;
- (void)updateWithModel:(id)arg0;

@end
